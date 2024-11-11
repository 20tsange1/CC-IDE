import sys

sys.path.append('antlr/')

from antlr4 import *
from grammarParserLexer import grammarParserLexer
from grammarParserParser import grammarParserParser
from grammarParserVisitor import grammarParserVisitor

class Component:
    def __init__(self, name, children=[]):
        self.name = name
        self.children = children
        self.next = set()
        self.prev = set()

    def __repr__(self):
        return f"<{self.name}> : {self.children}, Prev - {self.prev}, Next - {self.next}"

class BNFParser:
    def __init__(self, fileName):
        self.fileName = fileName
        self.node_types = []
        self.node_children = []
        self.nodes = []

    def evaluate(self, word):
        if word[0] == "<" and word[-1] == ">":
            self.node_children[-1][-1].append(word[1:-1].replace("-", "_"))
            return "$." + word[1:-1].replace("-", "_")
        elif word[-1] == "?":
            if word[0] == "<" and word[-2]:
                self.node_children[-1][-1].append(word[1:-2].replace("-", "_"))
                return "optional($." + word[1:-2].replace("-", "_") + ")"
            else:
                self.node_children[-1][-1].append(word)
                return "optional(" + word + ")"
        elif word[0] == "/" and word[-1] == "/":
            self.node_children[-1][-1].append(word)
            return word
        else:
            self.node_children[-1][-1].append("'" + word + "'")
            return "'" + word + "'"

    def buildSeqRule(self, rule):
        retStr = ""

        self.node_children[-1].append([])

        if len(rule) > 1:
            retStr += "seq("
        retStr += self.evaluate(rule[0])
        for i in range(1, len(rule)):
            retStr += ", " + self.evaluate(rule[i])
        if len(rule) > 1:
            retStr += ")"
        return retStr

    def buildMultiRule(self, rules):
        retStr = self.buildSeqRule(rules[0])
        for i in range(1, len(rules)):
            retStr += ", \n\t" + self.buildSeqRule(rules[i])
        return retStr

    def buildInnerRule(self, rules):
        retStr = ""
        if len(rules) > 1:
            retStr += "choice (\n\t" + self.buildMultiRule(rules)
        elif len(rules) == 1:
            retStr += "(" + self.buildSeqRule(rules[0])
        else:
            # Raise Exception()
            pass
        return retStr

    def buildRule(self, symbol, rules):
        retStr = ""
        if symbol[0] == "<" and symbol[-1] == ">":
            word = symbol[1:-1].replace("-", "_")
            self.node_children.append([])
            retStr += word + ": $ => " + self.buildInnerRule(rules) + "\n),"
            self.nodes.append(Component(word, self.node_children.pop()))
        return retStr

    def buildGrammar(self, rulesArr):
        retStr = ""
        for symbol, rule in rulesArr:
            retStr += self.buildRule(symbol, rule) + "\n\n"
        return retStr

    def main(self):
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

            self.buildGrammar(arr)


if __name__ == '__main__':
    bnfp = BNFParser("text-files/colabnf.txt")
    bnfp.main()
    # main(sys.argv)