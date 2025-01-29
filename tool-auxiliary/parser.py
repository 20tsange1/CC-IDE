import sys

sys.path.append('antlr/')

from antlr4 import *
from grammarParserLexer import grammarParserLexer
from grammarParserParser import grammarParserParser
from grammarParserVisitor import grammarParserVisitor

import os
import re

class Component:
    def __init__(self, name, children=[]):
        self.name = name
        self.children = children
        self.next = {}
        self.prev = {}

    def __repr__(self):
        return self.name

# Need to add left recursive, add a flag, maybe L::=


class BNFParser:
    """
    Parses a BNF grammar file and converts it into a target syntax structure.

    Attributes:
        fileName (str): The input grammar file.
        output (str): The output file where the parsed grammar will be written.
        head (str): File containing the header content for the output grammar.
        tail (str): File containing the footer content for the output grammar.
        ontologies (dict): A dictionary of predefined ontology mappings.
        nodenames (str): File to store node types.
        mapped (dict): Tracks already mapped ontology rules.
        node_types (list): List of all node types encountered.
        node_children (list): Tracks children for each node.
        nodes (list): List of all parsed nodes as `Component` objects.
        otterMap (dict): Maps otter types to syntax representation.
    """

    def __init__(self, fileName, grammar_name, output, head="text-files/head.txt", tail="text-files/tail.txt", ontologies={}, nodenames="nodenames.txt"):
        self.fileName = fileName
        self.grammar_name = grammar_name
        self.output = output
        self.head = head
        self.tail = tail
        self.nodenames = nodenames
        # self.ontologies = ontologies
        # self.mapped = {}
        self.node_types = []

        self.node_children = []
        self.nodes = []

    def buildGrammar(self, rulesArr, replaceArr):
        """
        Building a grammar recursively.
        Constructs the complete grammar structure from an array of rules.

        Args:
            rulesArr (list): List of tuples containing symbol, recursiveness, and rules.

        Returns:
            str: The constructed grammar structure.
        """
        retStr = ""
        for rule in rulesArr:
            retStr += rule + "\n\n"

        for symbol, replacement in replaceArr:
            # Few different ways to do this.
                # 1. Use an alias, shows up as though it is that node type
                # 2. Replace the symbol name with our desired name
            # Using negative lookahead, to make sure we only match symbol instead of matching anything else.
            pattern = f"\$\.{symbol}(?!\w)"
            replace_str = f"alias($.{symbol}, $.{replacement})"
            # retStr = retStr.replace(f"$.{symbol}", f"alias($.{symbol}, $.{replacement})")
            retStr = re.sub(pattern, replace_str, retStr)
        
        return retStr

    def main(self):
        # input_stream = FileStream("bnf.txt")
        input_stream = FileStream(self.fileName)
        lexer = grammarParserLexer(input_stream)
        stream = CommonTokenStream(lexer)
        parser = grammarParserParser(stream)
        tree = parser.gram()
        if parser.getNumberOfSyntaxErrors() > 0:
            print("syntax errors")
        else:
            vinterp = grammarParserVisitor()
            arr = vinterp.visit(tree)

            self.node_types = vinterp.node_types

            self.node_children = vinterp.node_children
            self.nodes = vinterp.nodes

            self.node_replace = vinterp.node_replace

            # For the head and the tail, we have a predefined structure, so we are just filling it in.
            with open(self.head, 'r') as head:
                text = head.read()
            with open(self.output, 'w') as file:
                file.write(text)
                
            # print(self.buildGrammar(arr))

            with open(self.output, 'a') as file:
                # The grammar 
                file.write(self.buildGrammar(arr, self.node_replace))

                # # The additionally rules from the ontology
                # for ont in self.mapped.values():
                #     file.write(ont + "\n\n")

            with open(self.tail, 'r') as tail:
                text = tail.read()
            with open(self.output, 'a') as file:
                file.write(text)

            # Writing out the types of the nodes, used for auto-suggestions
            # Make a new file for that grammar if not already there.
            path = f"text-files/{self.grammar_name[:-4]}"
            if not os.path.exists(path):
                os.makedirs(path)
                with open(path + "/nodecolours.txt", 'w') as file:
                    file.write('')
                with open(path + "/nodeformats.txt", 'w') as file:
                    file.write('')
                with open(path + "/nodemappings.txt", 'w') as file:
                    file.write('')
                with open(path + "/nodenames.txt", 'w') as file:
                    file.write('')

            with open(path + '/' + self.nodenames, 'w') as file:
                for types in self.node_types:
                    file.write(types + "\n")

            print("PARSED")


if __name__ == '__main__':
    # bnfp = BNFParser("","")
    # bnfp.main()
    BNFParser.main(sys.argv)