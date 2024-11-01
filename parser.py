import sys

sys.path.append('antlr/')

from antlr4 import *
from grammarParserLexer import grammarParserLexer
from grammarParserParser import grammarParserParser
from grammarParserVisitor import grammarParserVisitor

class BNFParser:
    def __init__(self, fileName, output, head="text-files/head.txt", tail="text-files/tail.txt", ontologies={}):
        self.fileName = fileName
        self.output = output
        self.head = head
        self.tail = tail
        self.ontologies = ontologies
        self.mapped = {}

    def evaluate(self, word):
        if word[0] == "<" and word[-1] == ">":
            return "$." + word[1:-1].replace("-", "_")
        elif word[-1] == "?":
            if word[0] == "<" and word[-2]:
                return "optional($." + word[1:-2].replace("-", "_") + ")"
            else:
                return "optional(" + word + ")"
        elif word[0] == "/" and word[-1] == "/":
            return word
        else:
            if word in self.ontologies:
                if word not in self.mapped:
                    self.buildOntologyRule(word)
                return f"$.{word}"
            else:
                return "'" + word + "'"

    def buildOntologyRule(self, word):
        retStr = f"{word}: $ => choice (\n"
        retStr += ', '.join([f"'{w}'" for w in self.ontologies[word]])
        retStr += "\n),"
        self.mapped[word] = retStr

    def buildSeqRule(self, rule):
        retStr = ""
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
            retStr += symbol[1:-1].replace("-", "_") + ": $ => " + self.buildInnerRule(rules) + "\n),"
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

            with open(self.head, 'r') as head:
                text = head.read()
            with open(self.output, 'w') as file:
                file.write(text)

            with open(self.output, 'a') as file:
                file.write(self.buildGrammar(arr))

                for ont in self.mapped.values():
                    file.write(ont + "\n\n")
            
            with open(self.tail, 'r') as tail:
                text = tail.read()
            with open(self.output, 'a') as file:
                file.write(text)


if __name__ == '__main__':
    main(sys.argv)