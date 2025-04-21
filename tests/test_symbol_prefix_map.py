import unittest

import sys
sys.path.append("tools/tool-auxiliary/")
sys.path.append("tools/tool-auxiliary/antlr/")

from antlr4 import *
from grammarParserLexer import grammarParserLexer
from grammarParserParser import grammarParserParser
from grammarParserVisitor import grammarParserVisitor

from antlr4.error.ErrorListener import *

from parser import MyErrorListener, BNFParser

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
    return (arr, vinterp.node_replace)
    
class TestSymbolPrefix(unittest.TestCase):

    def test_symbol_none(self):
        symbol_replacer = BNFParser('','','')
        parsed_output = parsing('<rule> ::= "hello";')
        rules = parsed_output[0]
        replace_arr = parsed_output[1]
        output_rules = symbol_replacer.buildGrammar(rules, replace_arr)
        self.assertEqual(output_rules, 'rule: $ => ("hello"\n),\n\n')

    def test_symbol_no_replace(self):
        symbol_replacer = BNFParser('','','')
        parsed_output = parsing('<rule> C::= "hello";')
        rules = parsed_output[0]
        replace_arr = parsed_output[1]
        output_rules = symbol_replacer.buildGrammar(rules, replace_arr)
        self.assertEqual(output_rules, 'rule: $ => ("hello"\n),\n\n')

    def test_symbol_no_replace_alternative(self):
        symbol_replacer = BNFParser('','','')
        parsed_output = parsing('<rule> S::= "hello" | <world>;')
        rules = parsed_output[0]
        replace_arr = parsed_output[1]
        output_rules = symbol_replacer.buildGrammar(rules, replace_arr)
        self.assertEqual(output_rules, 'rule: $ => choice(\n\t"hello"\n\t,$.world\n),\n\n')

    def test_symbol_replace(self):
        symbol_replacer = BNFParser('','','')
        parsed_output = parsing('<rule2> ::= <rule>;\n<rule> S::= "hello";')
        rules = parsed_output[0]
        replace_arr = parsed_output[1]
        output_rules = symbol_replacer.buildGrammar(rules, replace_arr)
        self.assertEqual(output_rules, 'rule2: $ => (alias($.rule, $.statement)\n),\n\nrule: $ => ("hello"\n),\n\n')

    def test_symbol_replace_alternative(self):
        symbol_replacer = BNFParser('','','')
        parsed_output = parsing('<rule2> ::= <rule> | <rule> "hello";\n<rule> S::= "hello";')
        rules = parsed_output[0]
        replace_arr = parsed_output[1]
        output_rules = symbol_replacer.buildGrammar(rules, replace_arr)
        self.assertEqual(output_rules, 'rule2: $ => choice(\n\talias($.rule, $.statement)\n\t,seq(alias($.rule, $.statement), "hello")\n),\n\nrule: $ => ("hello"\n),\n\n')

    def test_symbol_similar(self):
        symbol_replacer = BNFParser('','','')
        parsed_output = parsing('<rule2> ::= <ruler>;\n<rule> S::= "hello";')
        rules = parsed_output[0]
        replace_arr = parsed_output[1]
        output_rules = symbol_replacer.buildGrammar(rules, replace_arr)
        self.assertEqual(output_rules, 'rule2: $ => ($.ruler\n),\n\nrule: $ => ("hello"\n),\n\n')


if __name__ == '__main__':
    unittest.main()