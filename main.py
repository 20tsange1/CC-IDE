from parser import BNFParser
import os
from tree_sitter import Language, Parser
from ontology import Ontology
from draw import Draw


class Handler:

    def __init__(self):
        self.language = Language("build/my-language.so", "cola")
        self.parser = Parser()
        self.parser.set_language(self.language)
        self.currentString = bytes("""hello""", "utf8")
        self.parse_tree = None
        self.prevString = ""
        self.draw = Draw()


    def reparseBNF(self, ontology):
        # Turn our BNF into the grammar.js file
        bnfparser = BNFParser(
            fileName="text-files/colabnf.txt", 
            output="cola/grammar.js", 
            head="text-files/head.txt", 
            tail="text-files/tail.txt", 
            ontologies=ontology)
        bnfparser.main()

        # # Enters the file and runs tree-sitter on the grammar json.
        os.system("cd cola; tree-sitter generate; tree-sitter build -o cola; cd ..")

        self.buildLanguage()


    def buildLanguage(self):
        # # Build Language to use within Python
        Language.build_library(
            # # Store the library in the `build` directory
            "build/my-language.so",
            # Include one or more languages
            ["cola"],
        )

    # def parseString(self, string):
    #     # Need to add in logic to see which parts of string has changed, so you know what to reparse
    #     # Then you also want to keep a local copy of the tree
    #     return string.upper()

    # Calculate start and end points (line, column) for Tree-sitter
    def get_point(self, text, idx):
        # Get line and column numbers
        line = text[:idx].count("\n")
        if line == 0:
            column = idx
        else:
            column = idx - text.rfind("\n", 0, idx) - 1
        return (line, column)


    def calculate_edit_offsets(self, new_text):
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
        
        # Return the results as a dictionary
        return {
            "start_byte": start_byte,
            "old_end_byte": old_end_byte,
            "new_end_byte": new_end_byte,
            "start_point": start_point,
            "old_end_point": old_end_point,
            "new_end_point": new_end_point,
        }

    def bnfStructure(self, string):

        if self.parse_tree:
            if string != self.prevString:
                edit_offsets = self.calculate_edit_offsets(string)
                self.parse_tree.edit(
                    start_byte=edit_offsets["start_byte"],
                    old_end_byte=edit_offsets["old_end_byte"],
                    new_end_byte=edit_offsets["new_end_byte"],
                    start_point=edit_offsets["start_point"],
                    old_end_point=edit_offsets["old_end_point"],
                    new_end_point=edit_offsets["new_end_point"]
                )
                self.parse_tree = self.parser.parse(bytes(string, "utf8"), self.parse_tree)
        else:
            self.parse_tree = self.parser.parse(bytes(string, "utf8"))

        node = self.parse_tree.root_node

        arr = []
        finalarr = []

        def explore(node, depth):
            if depth >= len(arr):
                arr.append([])
            
            print(node.text, node.child_count)
            if node.child_count > 0:
                arr[depth].append(f"<b>{node.type}</b>")
            else:
                text = node.text.decode("utf8")
                arr[depth].append(f"<b>{text}</b>")
                if node.parent.type == "holds":

                    # Do something like this to highlight relevant type text
                    finalarr.append(f'<b style="background-color:Tomato;">{text}</b>')
                else:
                    finalarr.append(f'<b>{text}</b>')

            for c in (node.children):
                explore(c, depth + 1)

        explore(node, 0)
        print(finalarr)

        self.prevString = string

        return str(arr).replace("],", "]\n") + "\n\n" + ' '.join(finalarr)

    def drawTree(self):
        return self.draw.buildTree(self.parse_tree, 5000, 10000)


    


if __name__ == "__main__":

    # ont = Ontology()
    # ont.breakdown("text-files/ontologies.txt")

    handle = Handler()

    # handle.reparseBNF(ont.ontologies)

    # TESTS

    strCheck =     bytes(
    """
    [1] it is not the case that on the 7 January 26 Alice Must PAY OTHEROBJECT objectthing
    """,
            "utf8"
        )


    tree = handle.parser.parse(strCheck)
    
    # print(buildTree(tree, 1000, 10000))

    # node = tree.root_node

    # arr = []

    # def explore(node, depth):
    #     if depth >= len(arr):
    #         arr.append([])
            
    #     arr[depth].append(node.type)

    #     for c in (node.children):
    #         explore(c, depth + 1)

    # explore(node, 0)

    # print(str(arr))