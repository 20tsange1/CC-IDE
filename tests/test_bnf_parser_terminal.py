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

class TestBnfParserTerminal(unittest.TestCase):

    def test_single_rule_terminal_expansion(self):
        self.assertEqual(rulebuild('<rule> ::= "hello";'), 'rule: $ => ("hello"\n),')

    def test_single_rule_terminal_expansion_2(self):
        self.assertEqual(rulebuild('<rule> ::= hello;'), "rule: $ => ('hello'\n),")

    def test_single_rule_terminal_phrase_expansion(self):
        self.assertEqual(rulebuild('<rule> ::= "hello world";'), 'rule: $ => ("hello world"\n),')

    def test_single_rule_terminal_phrase_expansion_2(self):
        self.assertEqual(rulebuild('<rule> ::= hello world;'), "rule: $ => (seq('hello', 'world')\n),")

    def test_single_rule_terminal_phrase_mix(self):
        self.assertEqual(rulebuild('<rule> ::= hello "world";'), 'rule: $ => (seq(\'hello\', "world")\n),')

    def test_single_rule_terminal_repeat(self):
        self.assertEqual(rulebuild('<rule> ::= "hello"*;'), 'rule: $ => (repeat("hello")\n),')

    def test_single_rule_terminal_repeat_2(self):
        self.assertEqual(rulebuild('<rule> ::= "hello"+;'), 'rule: $ => (repeat1("hello")\n),')

    def test_single_rule_terminal_optional(self):
        self.assertEqual(rulebuild('<rule> ::= "hello"?;'), 'rule: $ => (optional("hello")\n),')

if __name__ == '__main__':
    unittest.main()