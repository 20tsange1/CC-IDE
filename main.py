from parser import BNFParser
import os
from tree_sitter import Language, Parser
from ontology import Ontology
import time
import glob
import subprocess


class Handler:

    def __init__(self):
        """
        The Handler class is used to handle the parsing of our language. It is responsible
        for calling on helper classes to form the basis of our parser, along with returning
        outputs to the frontend.
        """
        self.edit = 0

        # Removing preexisting build files
        files = glob.glob('build/*')
        for f in files:
            os.remove(f)

        self.reset()
        

    def reset(self):
        # For purposes related to Parsing both the Grammar and our Language
        self.buildLanguage()
        self.parser = None
        self.parser = Parser()
        self.parser.set_language(Language(f"build/my-language{self.edit}.so", "cola"))
        
        # For storing the string that is to be processed
        self.currentString = bytes("""hello""", "utf8")
        
        # Storing the tree post-processing
        self.parse_tree = None
        
        # Comparison of string
        self.prevString = ""
        
        # For mapping auto suggestions, based on previous node, parent node and current node/text
        self.mapper = {}
        with open("text-files/nodemappings.txt", "r") as file:
            for lines in file.readlines():
                line = lines.strip().split(",")
                self.mapper[tuple(line[:3])] = set(line[3:-1])

        # For the different node types
        self.node_types = []
        with open("text-files/nodenames.txt", "r") as file:
            for lines in file.readlines():
                self.node_types.append(lines.strip())
                
        # Storing whether a node type should be highlighted - Previous colours stored in nodecolours.txt
        self.highlights = {}
        with open("text-files/nodecolours.txt", "r") as file:
            for lines in file.readlines():
                # print(lines.split(":"))
                nodename, colour = lines.split(":")
                if nodename in self.node_types:
                    self.highlights[nodename] = colour.strip()
        

    def reparseBNF(self, fileName, ontology):
        """
        Function used for parsing a BNF stored within a text file. Calls upon tree-sitter to initialise
        a tree-sitter grammar and allow us to begin parsing with our language.
        """
        # Turn our BNF into the grammar.js file
        bnfparser = BNFParser(
            fileName=fileName, 
            output="cola/grammar.js", 
            head="text-files/head.txt", 
            tail="text-files/tail.txt", 
            ontologies=ontology)
        bnfparser.main()

        # Enters the file and runs tree-sitter on the grammar json.
        # For some reason, if you delete just the file itself, and use the same name, it breaks.
        # Possibly due to some sort of caching done by the Tree-Sitter library itself?
        # So instead we have used an increment.
        if os.path.isfile(f"build/my-language{self.edit}.so"):
            os.remove(f"build/my-language{self.edit}.so")

        # Runs subprocess to execute tree-sitter commands in shell. Need to throw correct error
        
        commands = "cd cola; tree-sitter generate; tree-sitter build -o cola; cd .."
        process = subprocess.Popen(commands, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        (out, err) = process.communicate()
        # Error handling in the case that we have issues
        if err:
            raise Exception("""Issue generating grammar. Please ensure you have followed the syntax for defining a grammar. If defining recursiveness of your rules:
            'L::=' - Left Recursive
            'R::=' - Right Recursive""") 

        # print(out, err)


        self.edit += 1

        self.node_types = bnfparser.node_types
        self.nodes = bnfparser.nodes

        self.autosuggestion()

        self.reset()

    # NEED TO MOVE EVERYTHING TO NEW CLASSES & FILES, MAKE IT MORE MODULAR.
    def autosuggestion(self):
        # Make a mapping system based on Current, Prev, Parent
        mapper = {}

        for node in self.nodes:
            for i in range(len(node.children)):
                for j in range(len(node.children[i])-1):
                    child = node.children[i][j]

                    childprev = ""
                    childnext = ""

                    if j > 0:
                        childprev = node.children[i][j-1]
                    if j < len(node.children[i]) - 1:
                        childnext = node.children[i][j+1]

                    key = (child, childprev, node.name)
                    key2 = (child, childprev, "ERROR")

                    if key not in mapper:
                        mapper[key] = set()
                    if key2 not in mapper:
                        mapper[key2] = set()
                    
                    mapper[key].add(childnext)
                    mapper[key2].add(childnext)

        with open("text-files/nodemappings.txt", "w") as file:
            for i in mapper.items():
                arr = list(i[0])
                arr.extend(list(i[1]))
                for item in arr:
                    file.write(item + ",")
                file.write("\n")


    def buildLanguage(self):
        """
        Creates the file for the Language.
        """
        # # Build Language to use within Python
        Language.build_library(
            # # Store the library in the `build` directory
            f"build/my-language{self.edit}.so",
            # Include one or more languages
            ["cola"],
        )


    def get_point(self, text, idx):
        """
        Calculate start and end points (line, column) for Tree-sitter
        """
        # Get line and column numbers
        line = text[:idx].count("\n")
        if line == 0:
            column = idx
        else:
            column = idx - text.rfind("\n", 0, idx) - 1
        return (line, column)


    def calculate_edit_offsets(self, new_text):
        """
        Calculating the offset indexes for our tree-sitter to use,
        meaning we no longer have to reparse the whole tree.
        """
        # Find the start of the change
        start = 0
        for i in range(min(len(self.prevString), len(new_text))):
            if self.prevString[i] != new_text[i]:
                start = i
                break
        
        # Find the end of the change in both strings
        old_end = len(self.prevString) - 1
        new_end = len(new_text) - 1

        while old_end > start and new_end > start and self.prevString[old_end] == new_text[new_end]:
            old_end -= 1
            new_end -= 1

        # Convert start and end indices to byte offsets
        start_byte = len(self.prevString[:start].encode("utf8"))
        old_end_byte = len(self.prevString[:old_end].encode("utf8"))
        new_end_byte = len(new_text[:new_end].encode("utf8"))
        
        start_point = self.get_point(self.prevString, start)
        old_end_point = self.get_point(self.prevString, old_end)
        new_end_point = self.get_point(new_text, new_end)
        
        # Return the results as an array
        return [start_byte, old_end_byte, new_end_byte, start_point, old_end_point, new_end_point,]


    def exploreNodes(self, node, depth, arr, finalarr):
        """
        Depth First Traversal, exploring each node and their children.
        We can then construct our final sentence back together, utilising
        information from our parse tree to process the text in a useful manner.
        """

        """
        One of the problems with exploring it in a DFS fashion is that we are not utilising the tools provided
        by tree-sitter as well as we can. Tree-sitter has a TreeCursor object that traverses a tree efficiently.
        
        class tree_sitter.TreeCursor
        
        https://tree-sitter.github.io/py-tree-sitter/classes/tree_sitter.TreeCursor.html
        
        """


        if depth >= len(arr):
            arr.append([])

        # Need to add a more elegant way of doing this. FORMATTING
        #
        ##################
        #   EDIT
        ##################
        if node and node.type == "C-AND":
            finalarr.append("\n\n")
        if node and node.type == "identity":
            if finalarr and finalarr[-1] != "\n\n":
                finalarr.append("\n\n")
        elif node.parent and (node.parent.type == "conditional_statement" or node.parent.type == "condition"):
            if finalarr and finalarr[-1] != "\n\n":
                finalarr.append("\n\n")
            
        # In the case of children, this means that the node is not a terminal (leaf) node.
        # While the node type may be beneficial, the text does not exist at this level.
        if node.child_count > 0:
            arr[depth].append(f"<b>{node.type}</b>")
        else:
            text = node.text.decode("utf8")
            arr[depth].append(f"<b>{text}</b>")
            
            if node.parent and node.parent.type == "ERROR":
                colour = "#f76f6f"
                # finalarr.append(f'<b style="color:{colour};">ERROR</b>')
                finalarr.append(f'<b style="color:{colour};">')

            if node.parent and node.parent.type in self.highlights:
                colour = self.highlights[node.parent.type]
                if colour != "#000000":
                    finalarr.append(f'<b style="color:{colour};">{text.strip()}</b>')
                else:
                    finalarr.append(f'{text.strip()}')
            else:
                finalarr.append(f'{text.strip()}')


        for c in (node.children):
            self.exploreNodes(c, depth + 1, arr, finalarr)

        if node.child_count == 0 and node.parent and node.parent.type == "ERROR":
            finalarr.append('</b>')

        # Doing the AutoSuggestion Mapping
        prev_sibling = ""
        parent = ""

        if node.prev_sibling:
            prev_sibling = node.prev_sibling.type
        if node.parent:
            parent = node.parent.type

        key = (node.type, prev_sibling, parent)
        
        if key in self.mapper and parent == "ERROR":
        # if key in self.mapper and node.next_sibling == None: # For the case where you only want it if it is incomplete
        # node.prev_sibling would then be if you want to add some formatting Pre-node, next_sibling Post-node
            # [FUTURE] - Add in a way to view what this suggestion consists of + how to fulfil
            # Currently, we only have a highlevel suggestion, based on node-types, not by words.
            # finalarr.append(f'<b style="background-color:{"green"}; color:{"white"}"> {self.mapper[key]} </b>')
            hashed = hash(key)
            finalarr.append(f'<span class="popup" style="color:{"grey"}" onclick="myFunction(\'{hashed}\')">...<span class="popuptext" id="{hashed}">{self.mapper[key]}</span></span>')



    def bnfStructure(self, string):
        """
        Main function for evaluation / reevaluation of our input text.
        """
        if self.parse_tree:
            if string != self.prevString:
                edit_offsets = self.calculate_edit_offsets(string)
                self.parse_tree.edit(
                    start_byte=edit_offsets[0],
                    old_end_byte=edit_offsets[1],
                    new_end_byte=edit_offsets[2],
                    start_point=edit_offsets[3],
                    old_end_point=edit_offsets[4],
                    new_end_point=edit_offsets[5]
                )
                self.parse_tree = self.parser.parse(bytes(string, "utf8"), self.parse_tree)
        else:
            self.parse_tree = self.parser.parse(bytes(string, "utf8"))

        node = self.parse_tree.root_node

        arr = []
        finalarr = []

        self.exploreNodes(node, 0, arr, finalarr)

        self.prevString = string

        return ' '.join(finalarr)

        # return '\n'.join([str(i) for i in arr]) + '\n\n' + ' '.join(finalarr)


if __name__ == "__main__":

    # ont = Ontology()
    # ont.breakdown("text-files/ontologies.txt")

    handle = Handler()

    # handle.reparseBNF(ont.ontologies)

    # TESTS

    strCheck =  ("[1] it is not the case that on the 7 January 26 Alice Must PAY OTHEROBJECT objectthing")

    tree = handle.bnfStructure(strCheck)
    
    # handle.drawTree()