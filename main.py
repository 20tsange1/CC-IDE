import sys
sys.path.append('tool-auxiliary/')

from parser import BNFParser
from ontology import Ontology
from metadata import MetaData

from tree_sitter import Language, Parser, LookaheadIterator

import os
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
        self.language = Language(f"build/my-language{self.edit}.so", "cola")
        self.parser = None
        self.parser = Parser()
        self.parser.set_language(self.language)
        
        # For storing the string that is to be processed
        self.currentString = bytes("""hello""", "utf8")
        
        # Storing the tree post-processing
        self.parse_tree = None
        
        # Comparison of string
        self.prevString = ""

        self.grammar_name = ""
        checker = MetaData()
        prev_meta = checker.read_meta("bnfs/grammar.ini")
        if "Grammar_Name" in prev_meta:
            self.grammar_name = prev_meta["Grammar_Name"]

        grammar_info_path = f"text-files/{self.grammar_name}/"
        node_types_path = "nodenames.txt"
        node_map_path = "nodemappings.txt"
        node_highlights_path = "nodecolours.txt"
        node_formats_path = "nodeformats.txt"

        # For the different node types
        self.node_types = []
        if os.path.isfile(grammar_info_path + node_types_path):
            with open(grammar_info_path + node_types_path, "r") as file:
                for lines in file.readlines():
                    self.node_types.append(lines.strip())
        
        # For mapping auto suggestions, based on previous node, parent node and current node/text
        self.mapper = {}
        if os.path.isfile(grammar_info_path + node_map_path):
            with open(grammar_info_path + node_map_path, "r") as file:
                for lines in file.readlines():
                    line = lines.strip().split(",")
                    self.mapper[tuple(line[:3])] = set(line[3:-1])
                
        # Storing whether a node type should be highlighted - Previous colours stored in nodecolours.txt
        self.highlights = {}
        if os.path.isfile(grammar_info_path + node_highlights_path):
            with open(grammar_info_path + node_highlights_path, "r") as file:
                for lines in file.readlines():
                    nodename, colour = lines.split(":")
                    if nodename in self.node_types:
                        self.highlights[nodename] = colour.strip()

                for nodename in self.node_types:
                    if nodename not in self.highlights:
                        self.highlights[nodename] = "#000000"

        # Adding prefix and suffix
        # {prefix, suffix, inline}
        self.pref_suf_format = {}
        if os.path.isfile(grammar_info_path + node_formats_path):
            with open(grammar_info_path + node_formats_path, "r") as file:
                for lines in file.readlines():
                    nodename, prefix, suffix, inline, _ = lines.split("~~")
                    if nodename in self.node_types:
                        self.pref_suf_format[nodename] = {"prefix": prefix, "suffix": suffix, "inline": inline}


        self.checkid = set()
        
        

    def reparseBNF(self, file_name, grammar_name, ontology):
        """
        Function used for parsing a BNF stored within a text file. Calls upon tree-sitter to initialise
        a tree-sitter grammar and allow us to begin parsing with our language.
        """
        # Turn our BNF into the grammar.js file
        bnfparser = BNFParser(
            fileName=file_name, 
            grammar_name = grammar_name,
            output="cola/grammar.js", 
            head="text-files/head.txt", 
            tail="text-files/tail.txt", 
            ontologies=ontology
            )
        bnfparser.main()

        # self.edit used as an iterator for version number
        if os.path.isfile(f"build/my-language{self.edit}.so"):
            os.remove(f"build/my-language{self.edit}.so")

        # Runs subprocess to execute tree-sitter commands in shell. Need to throw correct error
        
        commands = "cd cola; tree-sitter generate; tree-sitter build -o cola; cd .."
        process = subprocess.Popen(commands, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        (out, err) = process.communicate()
        # Error handling in the case that we have issues
        # Need to redo this, be a lil more specific.
        if err:
            raise Exception("""Issue generating grammar. Please ensure you have followed the syntax for defining a grammar. If defining recursiveness of your rules:
            'L::=' - Left Recursive
            'R::=' - Right Recursive""") 

        self.edit += 1

        self.node_types = bnfparser.node_types
        self.nodes = bnfparser.nodes

        self.autosuggestion(grammar_name)

        return


    # NEED TO MOVE EVERYTHING TO NEW CLASSES & FILES, MAKE IT MORE MODULAR.
    def autosuggestion(self, grammar_name):
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

        with open(f"text-files/{grammar_name[:-4]}/nodemappings.txt", "w") as file:
            for i in mapper.items():
                arr = list(i[0])
                arr.extend(list(i[1]))
                for item in arr:
                    file.write(item + ",")
                file.write("\n")

        return


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

    
    def nodeAddText(self, node, finalarr):
        # In the case of no children, this means that the node a terminal (leaf) node.
        if not node.children:
            text = node.text.decode("utf8")
            
            # Attribute describing if node is an error node
            if node.is_error:
                colour = "#f76f6f"
                finalarr.append(f'<b style="color:{colour};">')

            if node.parent and len(node.children) == 0:
                finalarr.append(f'{text}')
            


    def nodeAutoSuggestion(self, node, finalarr):
        """ 
        Doing the AutoSuggestion Mapping

        Checking your current node, previous node, and parent node.
        Then using that to see if it is a valid triplet within the language.
        If it is, we can then provide a suggestion for the next node.
        """

        prev_sibling = ""
        parent = ""

        if node.prev_sibling:
            prev_sibling = node.prev_sibling.type
        if node.parent:
            parent = node.parent.type

        key = (node.type, prev_sibling, parent)
        
        if key in self.mapper and parent == "ERROR":

            hashed = hash(key)
            # Created a popup class within css.
            finalarr.append(f'<span class="popup" style="color:{"grey"}" onclick="popupFunction(\'{hashed}\')">...<span class="popuptext" id="{hashed}">{self.mapper[key]}</span></span>')

    
    def exploreNodes(self, cursor, finalarr, checkid, reached):

        node = cursor.node

        flag = True

        # if str(node.id) == str(checkid):
        if str(node.id) in checkid:
            reached = 0

        # Checks if it is in chosen range
        if reached:
            # if 1 <= cursor.depth <= 3:
            #     finalarr.append(f'<span style="color: #{hex(2-cursor.depth)[2:]*3}" onclick="nodeFold(\'{node.id}\')">></span>')
                
            self.nodeAddText(node, finalarr)

            # Sets up the css structure
            if node and node.children:
                finalarr.append(f'<span class="{node.type}">')

        if cursor.goto_first_child():
            while flag:
                self.exploreNodes(cursor, finalarr, checkid, reached)
                flag = cursor.goto_next_sibling()
            cursor.goto_parent()

        if reached:

            if not node.children and node.is_error:
                finalarr.append('</b>')

            if node and node.children:
                finalarr.append(f'</span>')

            self.nodeAutoSuggestion(node, finalarr)
        
        return cursor


    def bnfStructure(self, string=""):
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

        cursor = self.parse_tree.walk()

        finalarr = []

        # self.exploreNodes(cursor, finalarr, "", 1)
        self.exploreNodes(cursor, finalarr, self.checkid, 1)

        self.prevString = string

        # This prevents it from adding an extra space for the span, which messes with the desired output.
        return ''.join([((i + ' ') if i and i[-1] != '>' else i) for i in finalarr])


    def bnfSubStructure(self, nodeID=""):
        if self.parse_tree:
            cursor = self.parse_tree.walk()
            finalarr = []
            if nodeID == "":
                self.checkid = set()
            self.exploreNodes(cursor, finalarr, self.checkid, 1)
            return ''.join([((i + ' ') if i and i[-1] != '>' else i) for i in finalarr])
        else:
            return ''

    


    ###############
    # Final Output
    ###############

    def exploreNodesOutput(self, node, depth, finalarr):
        """
        
        """
        # Adding prefix
        # if node and node.type in self.pref_suf_format:
        #     if finalarr and finalarr[-1] != self.pref_suf_format[node.type]["inline"]:
        #         if self.pref_suf_format[node.type]["prefix"] != "":
        #             finalarr.append(self.pref_suf_format[node.type]["prefix"])

        if node.child_count == 0:
            finalarr.append(node.text.decode("utf8"))

        for c in (node.children):
            self.exploreNodesOutput(c, depth + 1, finalarr)

        # Adding suffix
        if node and node.type in self.pref_suf_format:
            if self.pref_suf_format[node.type]["suffix"] != "":
                finalarr.append(self.pref_suf_format[node.type]["suffix"])


    def contractOutput(self):
        if self.parse_tree:
            node = self.parse_tree.root_node
            finalarr = []
            self.exploreNodesOutput(node, 0, finalarr)
            return ' '.join(finalarr)
        else:
            return ''



if __name__ == "__main__":
    pass