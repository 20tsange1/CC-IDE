import unittest

import sys
sys.path.append("tools/tool-auxiliary/")
sys.path.append("tools/tool-auxiliary/antlr/")

from antlr4 import *
from grammarParserLexer import grammarParserLexer
from grammarParserParser import grammarParserParser
from grammarParserVisitor import grammarParserVisitor

from antlr4.error.ErrorListener import *

from parser import MyErrorListener

def parsing(input_text):
    input_stream = InputStream(input_text)

    lexer = grammarParserLexer(input_stream)
    lexer.removeErrorListeners()
    lexer.addErrorListener(MyErrorListener())

    stream = CommonTokenStream(lexer)

    parser = grammarParserParser(stream)
    parser.removeErrorListeners()
    parser.addErrorListener(MyErrorListener())

    tree = parser.gram()

    if parser.getNumberOfSyntaxErrors() > 0:
        print("syntax errors")
    else:
        vinterp = grammarParserVisitor()
        arr = vinterp.visit(tree)
    return arr

def rulebuild(text):
    arr = parsing(text)
    return '\n'.join(arr)

class TestBnfParserSpecial(unittest.TestCase):

    def test_rule_special_precedence(self):
        self.assertEqual(rulebuild('<rule> P0::= "hello";'), 'rule: $ => prec(0,("hello"\n)),')

    def test_rule_special_dynamic_precedence(self):
        self.assertEqual(rulebuild('<rule> PD0::= hello;'), "rule: $ => prec.dynamic(0,('hello'\n)),")

    def test_rule_special_left_precedence(self):
        self.assertEqual(rulebuild('<rule> L::= "hello world";'), 'rule: $ => prec.left(("hello world"\n)),')

    def test_rule_special_right_precedence(self):
        self.assertEqual(rulebuild('<rule> R::= hello world;'), "rule: $ => prec.right((seq('hello', 'world')\n)),")

    def test_rule_special_left_precedence_2(self):
        self.assertEqual(rulebuild('<rule> L0::= hello "world";'), 'rule: $ => prec.left(0,(seq(\'hello\', "world")\n)),')

    def test_rule_special_right_precedence_2(self):
        self.assertEqual(rulebuild('<rule> R0::= "hello"*;'), 'rule: $ => prec.right(0,(repeat("hello")\n)),')

if __name__ == '__main__':
    unittest.main()