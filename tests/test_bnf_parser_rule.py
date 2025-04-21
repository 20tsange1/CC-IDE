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

class TestBnfParserRule(unittest.TestCase):

    def test_single_rule(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion>;'), 'rule: $ => ($.expansion\n),')

    def test_single_rule_optional(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion>?;'), 'rule: $ => (optional($.expansion)\n),')

    def test_single_rule_repeat(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion>*;'), 'rule: $ => (repeat($.expansion)\n),')
    
    def test_single_rule_repeat1(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion>+;'), 'rule: $ => (repeat1($.expansion)\n),')

    def test_alternative_rule(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion> | <expansion2>;'), 'rule: $ => choice(\n\t$.expansion\n\t,$.expansion2\n),')

    def test_alternative_rule_optional(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion>? | <expansion2>;'), 'rule: $ => choice(\n\toptional($.expansion)\n\t,$.expansion2\n),')

    def test_alternative_rule_repeat(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion>* | <expansion2>;'), 'rule: $ => choice(\n\trepeat($.expansion)\n\t,$.expansion2\n),')
    
    def test_alternative_rule_repeat1(self):
        self.assertEqual(rulebuild('<rule> ::= <expansion>+ | <expansion2>;'), 'rule: $ => choice(\n\trepeat1($.expansion)\n\t,$.expansion2\n),')

    def test_alternative_rule_multi_optional(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>)?;'), 'rule: $ => (optional(choice(\n\t$.expansion\n\t,$.expansion2\n))\n),')

    def test_alternative_rule_multi_repeat(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>)*;'), 'rule: $ => (repeat(choice(\n\t$.expansion\n\t,$.expansion2\n))\n),')

    def test_alternative_rule_multi_repeat1(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>)?;'), 'rule: $ => (optional(choice(\n\t$.expansion\n\t,$.expansion2\n))\n),')

    def test_alternative_rule_multi_optional_within(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion>? | <expansion2>)?;'), 'rule: $ => (optional(choice(\n\toptional($.expansion)\n\t,$.expansion2\n))\n),')

if __name__ == '__main__':
    unittest.main()