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

class TestBnfParserGroup(unittest.TestCase):

    def test_alternative_group(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>) <expansion3>;'), 'rule: $ => (seq(choice(\n\t$.expansion\n\t,$.expansion2\n), $.expansion3)\n),')

    def test_alternative_group_2(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>) | <expansion3>;'), 'rule: $ => choice(\n\tchoice(\n\t$.expansion\n\t,$.expansion2\n)\n\t,$.expansion3\n),')

    def test_alternative_group_optional(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>)? | <expansion3>;'), 'rule: $ => choice(\n\toptional(choice(\n\t$.expansion\n\t,$.expansion2\n))\n\t,$.expansion3\n),')

    def test_alternative_group_repeat(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>)* | <expansion3>;'), 'rule: $ => choice(\n\trepeat(choice(\n\t$.expansion\n\t,$.expansion2\n))\n\t,$.expansion3\n),')

    def test_alternative_group_repeat1(self):
        self.assertEqual(rulebuild('<rule> ::= (<expansion> | <expansion2>)? | <expansion3>;'), 'rule: $ => choice(\n\toptional(choice(\n\t$.expansion\n\t,$.expansion2\n))\n\t,$.expansion3\n),')

    def test_alternative_group_optional_within(self):
        self.assertEqual(rulebuild('<rule> ::= ((<expansion> | <expansion2>)? | <expansion3>)?;'), 'rule: $ => (optional(choice(\n\toptional(choice(\n\t$.expansion\n\t,$.expansion2\n))\n\t,$.expansion3\n))\n),')

if __name__ == '__main__':
    unittest.main()