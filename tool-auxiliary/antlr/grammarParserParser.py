# Generated from grammarParser.g4 by ANTLR 4.13.1
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,18,120,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,1,0,4,0,32,8,0,11,0,12,0,33,1,1,1,1,1,1,1,1,1,1,1,2,1,
        2,1,2,5,2,44,8,2,10,2,12,2,47,9,2,1,3,4,3,50,8,3,11,3,12,3,51,1,
        4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,64,8,4,1,5,1,5,1,6,1,6,
        1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,3,9,80,8,9,1,10,1,10,1,10,
        1,10,1,11,1,11,3,11,88,8,11,1,11,3,11,91,8,11,1,12,1,12,1,12,5,12,
        96,8,12,10,12,12,12,99,9,12,1,12,1,12,1,12,1,12,5,12,105,8,12,10,
        12,12,12,108,9,12,1,12,1,12,3,12,112,8,12,1,13,1,13,1,14,1,14,1,
        14,1,14,1,14,0,0,15,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,0,1,
        2,0,2,6,9,14,121,0,31,1,0,0,0,2,35,1,0,0,0,4,40,1,0,0,0,6,49,1,0,
        0,0,8,63,1,0,0,0,10,65,1,0,0,0,12,67,1,0,0,0,14,69,1,0,0,0,16,71,
        1,0,0,0,18,79,1,0,0,0,20,81,1,0,0,0,22,90,1,0,0,0,24,111,1,0,0,0,
        26,113,1,0,0,0,28,115,1,0,0,0,30,32,3,2,1,0,31,30,1,0,0,0,32,33,
        1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,1,1,0,0,0,35,36,3,20,10,0,
        36,37,3,22,11,0,37,38,3,4,2,0,38,39,5,12,0,0,39,3,1,0,0,0,40,45,
        3,6,3,0,41,42,5,4,0,0,42,44,3,6,3,0,43,41,1,0,0,0,44,47,1,0,0,0,
        45,43,1,0,0,0,45,46,1,0,0,0,46,5,1,0,0,0,47,45,1,0,0,0,48,50,3,8,
        4,0,49,48,1,0,0,0,50,51,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,7,
        1,0,0,0,53,54,3,18,9,0,54,55,3,10,5,0,55,64,1,0,0,0,56,57,3,18,9,
        0,57,58,3,12,6,0,58,64,1,0,0,0,59,60,3,18,9,0,60,61,3,14,7,0,61,
        64,1,0,0,0,62,64,3,18,9,0,63,53,1,0,0,0,63,56,1,0,0,0,63,59,1,0,
        0,0,63,62,1,0,0,0,64,9,1,0,0,0,65,66,5,9,0,0,66,11,1,0,0,0,67,68,
        5,11,0,0,68,13,1,0,0,0,69,70,5,10,0,0,70,15,1,0,0,0,71,72,5,2,0,
        0,72,73,3,4,2,0,73,74,5,3,0,0,74,17,1,0,0,0,75,80,3,16,8,0,76,80,
        3,20,10,0,77,80,3,24,12,0,78,80,3,28,14,0,79,75,1,0,0,0,79,76,1,
        0,0,0,79,77,1,0,0,0,79,78,1,0,0,0,80,19,1,0,0,0,81,82,5,5,0,0,82,
        83,5,16,0,0,83,84,5,6,0,0,84,21,1,0,0,0,85,91,5,1,0,0,86,88,5,16,
        0,0,87,86,1,0,0,0,87,88,1,0,0,0,88,89,1,0,0,0,89,91,5,1,0,0,90,85,
        1,0,0,0,90,87,1,0,0,0,91,23,1,0,0,0,92,97,5,7,0,0,93,96,5,16,0,0,
        94,96,3,26,13,0,95,93,1,0,0,0,95,94,1,0,0,0,96,99,1,0,0,0,97,95,
        1,0,0,0,97,98,1,0,0,0,98,100,1,0,0,0,99,97,1,0,0,0,100,112,5,7,0,
        0,101,106,5,8,0,0,102,105,5,16,0,0,103,105,3,26,13,0,104,102,1,0,
        0,0,104,103,1,0,0,0,105,108,1,0,0,0,106,104,1,0,0,0,106,107,1,0,
        0,0,107,109,1,0,0,0,108,106,1,0,0,0,109,112,5,8,0,0,110,112,5,16,
        0,0,111,92,1,0,0,0,111,101,1,0,0,0,111,110,1,0,0,0,112,25,1,0,0,
        0,113,114,7,0,0,0,114,27,1,0,0,0,115,116,5,14,0,0,116,117,5,16,0,
        0,117,118,5,14,0,0,118,29,1,0,0,0,12,33,45,51,63,79,87,90,95,97,
        104,106,111
    ]

class grammarParserParser ( Parser ):

    grammarFileName = "grammarParser.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'::='", "'('", "')'", "'|'", "'<'", "'>'", 
                     "'\"'", "'''", "'?'", "'+'", "'*'", "';'", "':'", "'/'" ]

    symbolicNames = [ "<INVALID>", "OTTER", "OPENBRACKET", "CLOSEBRACKET", 
                      "SPLITTER", "CHEVRON", "ICHEVRON", "QUOTE", "SINGLEQUOTE", 
                      "QUESTION", "PLUS", "STAR", "SEMICOLON", "COLON", 
                      "SLASH", "INT", "WORD", "ID", "WS" ]

    RULE_gram = 0
    RULE_component = 1
    RULE_expansion = 2
    RULE_arg = 3
    RULE_entersymbol = 4
    RULE_optionalsymbol = 5
    RULE_repeatsymbol = 6
    RULE_repeat1symbol = 7
    RULE_bracketsymbol = 8
    RULE_checksymbol = 9
    RULE_symbol = 10
    RULE_otter = 11
    RULE_strings = 12
    RULE_othersymbol = 13
    RULE_regex = 14

    ruleNames =  [ "gram", "component", "expansion", "arg", "entersymbol", 
                   "optionalsymbol", "repeatsymbol", "repeat1symbol", "bracketsymbol", 
                   "checksymbol", "symbol", "otter", "strings", "othersymbol", 
                   "regex" ]

    EOF = Token.EOF
    OTTER=1
    OPENBRACKET=2
    CLOSEBRACKET=3
    SPLITTER=4
    CHEVRON=5
    ICHEVRON=6
    QUOTE=7
    SINGLEQUOTE=8
    QUESTION=9
    PLUS=10
    STAR=11
    SEMICOLON=12
    COLON=13
    SLASH=14
    INT=15
    WORD=16
    ID=17
    WS=18

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.1")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class GramContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def component(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.ComponentContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.ComponentContext,i)


        def getRuleIndex(self):
            return grammarParserParser.RULE_gram

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitGram" ):
                return visitor.visitGram(self)
            else:
                return visitor.visitChildren(self)




    def gram(self):

        localctx = grammarParserParser.GramContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_gram)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 31 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 30
                self.component()
                self.state = 33 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==5):
                    break

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ComponentContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def symbol(self):
            return self.getTypedRuleContext(grammarParserParser.SymbolContext,0)


        def otter(self):
            return self.getTypedRuleContext(grammarParserParser.OtterContext,0)


        def expansion(self):
            return self.getTypedRuleContext(grammarParserParser.ExpansionContext,0)


        def SEMICOLON(self):
            return self.getToken(grammarParserParser.SEMICOLON, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_component

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitComponent" ):
                return visitor.visitComponent(self)
            else:
                return visitor.visitChildren(self)




    def component(self):

        localctx = grammarParserParser.ComponentContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_component)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 35
            self.symbol()
            self.state = 36
            self.otter()
            self.state = 37
            self.expansion()
            self.state = 38
            self.match(grammarParserParser.SEMICOLON)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExpansionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def arg(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.ArgContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.ArgContext,i)


        def SPLITTER(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.SPLITTER)
            else:
                return self.getToken(grammarParserParser.SPLITTER, i)

        def getRuleIndex(self):
            return grammarParserParser.RULE_expansion

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitExpansion" ):
                return visitor.visitExpansion(self)
            else:
                return visitor.visitChildren(self)




    def expansion(self):

        localctx = grammarParserParser.ExpansionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_expansion)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 40
            self.arg()
            self.state = 45
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==4:
                self.state = 41
                self.match(grammarParserParser.SPLITTER)
                self.state = 42
                self.arg()
                self.state = 47
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ArgContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def entersymbol(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.EntersymbolContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.EntersymbolContext,i)


        def getRuleIndex(self):
            return grammarParserParser.RULE_arg

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitArg" ):
                return visitor.visitArg(self)
            else:
                return visitor.visitChildren(self)




    def arg(self):

        localctx = grammarParserParser.ArgContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_arg)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 49 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 48
                self.entersymbol()
                self.state = 51 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 82340) != 0)):
                    break

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class EntersymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def checksymbol(self):
            return self.getTypedRuleContext(grammarParserParser.ChecksymbolContext,0)


        def optionalsymbol(self):
            return self.getTypedRuleContext(grammarParserParser.OptionalsymbolContext,0)


        def repeatsymbol(self):
            return self.getTypedRuleContext(grammarParserParser.RepeatsymbolContext,0)


        def repeat1symbol(self):
            return self.getTypedRuleContext(grammarParserParser.Repeat1symbolContext,0)


        def getRuleIndex(self):
            return grammarParserParser.RULE_entersymbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitEntersymbol" ):
                return visitor.visitEntersymbol(self)
            else:
                return visitor.visitChildren(self)




    def entersymbol(self):

        localctx = grammarParserParser.EntersymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_entersymbol)
        try:
            self.state = 63
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,3,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 53
                self.checksymbol()
                self.state = 54
                self.optionalsymbol()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 56
                self.checksymbol()
                self.state = 57
                self.repeatsymbol()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 59
                self.checksymbol()
                self.state = 60
                self.repeat1symbol()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 62
                self.checksymbol()
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OptionalsymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def QUESTION(self):
            return self.getToken(grammarParserParser.QUESTION, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_optionalsymbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitOptionalsymbol" ):
                return visitor.visitOptionalsymbol(self)
            else:
                return visitor.visitChildren(self)




    def optionalsymbol(self):

        localctx = grammarParserParser.OptionalsymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_optionalsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 65
            self.match(grammarParserParser.QUESTION)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class RepeatsymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STAR(self):
            return self.getToken(grammarParserParser.STAR, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_repeatsymbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitRepeatsymbol" ):
                return visitor.visitRepeatsymbol(self)
            else:
                return visitor.visitChildren(self)




    def repeatsymbol(self):

        localctx = grammarParserParser.RepeatsymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_repeatsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 67
            self.match(grammarParserParser.STAR)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class Repeat1symbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def PLUS(self):
            return self.getToken(grammarParserParser.PLUS, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_repeat1symbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitRepeat1symbol" ):
                return visitor.visitRepeat1symbol(self)
            else:
                return visitor.visitChildren(self)




    def repeat1symbol(self):

        localctx = grammarParserParser.Repeat1symbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_repeat1symbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 69
            self.match(grammarParserParser.PLUS)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class BracketsymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def OPENBRACKET(self):
            return self.getToken(grammarParserParser.OPENBRACKET, 0)

        def expansion(self):
            return self.getTypedRuleContext(grammarParserParser.ExpansionContext,0)


        def CLOSEBRACKET(self):
            return self.getToken(grammarParserParser.CLOSEBRACKET, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_bracketsymbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitBracketsymbol" ):
                return visitor.visitBracketsymbol(self)
            else:
                return visitor.visitChildren(self)




    def bracketsymbol(self):

        localctx = grammarParserParser.BracketsymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_bracketsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 71
            self.match(grammarParserParser.OPENBRACKET)
            self.state = 72
            self.expansion()
            self.state = 73
            self.match(grammarParserParser.CLOSEBRACKET)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ChecksymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def bracketsymbol(self):
            return self.getTypedRuleContext(grammarParserParser.BracketsymbolContext,0)


        def symbol(self):
            return self.getTypedRuleContext(grammarParserParser.SymbolContext,0)


        def strings(self):
            return self.getTypedRuleContext(grammarParserParser.StringsContext,0)


        def regex(self):
            return self.getTypedRuleContext(grammarParserParser.RegexContext,0)


        def getRuleIndex(self):
            return grammarParserParser.RULE_checksymbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitChecksymbol" ):
                return visitor.visitChecksymbol(self)
            else:
                return visitor.visitChildren(self)




    def checksymbol(self):

        localctx = grammarParserParser.ChecksymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_checksymbol)
        try:
            self.state = 79
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [2]:
                self.enterOuterAlt(localctx, 1)
                self.state = 75
                self.bracketsymbol()
                pass
            elif token in [5]:
                self.enterOuterAlt(localctx, 2)
                self.state = 76
                self.symbol()
                pass
            elif token in [7, 8, 16]:
                self.enterOuterAlt(localctx, 3)
                self.state = 77
                self.strings()
                pass
            elif token in [14]:
                self.enterOuterAlt(localctx, 4)
                self.state = 78
                self.regex()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class SymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def CHEVRON(self):
            return self.getToken(grammarParserParser.CHEVRON, 0)

        def WORD(self):
            return self.getToken(grammarParserParser.WORD, 0)

        def ICHEVRON(self):
            return self.getToken(grammarParserParser.ICHEVRON, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_symbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitSymbol" ):
                return visitor.visitSymbol(self)
            else:
                return visitor.visitChildren(self)




    def symbol(self):

        localctx = grammarParserParser.SymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_symbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 81
            self.match(grammarParserParser.CHEVRON)
            self.state = 82
            self.match(grammarParserParser.WORD)
            self.state = 83
            self.match(grammarParserParser.ICHEVRON)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OtterContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def OTTER(self):
            return self.getToken(grammarParserParser.OTTER, 0)

        def WORD(self):
            return self.getToken(grammarParserParser.WORD, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_otter

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitOtter" ):
                return visitor.visitOtter(self)
            else:
                return visitor.visitChildren(self)




    def otter(self):

        localctx = grammarParserParser.OtterContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_otter)
        self._la = 0 # Token type
        try:
            self.state = 90
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,6,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 85
                self.match(grammarParserParser.OTTER)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 87
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if _la==16:
                    self.state = 86
                    self.match(grammarParserParser.WORD)


                self.state = 89
                self.match(grammarParserParser.OTTER)
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class StringsContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def QUOTE(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.QUOTE)
            else:
                return self.getToken(grammarParserParser.QUOTE, i)

        def WORD(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.WORD)
            else:
                return self.getToken(grammarParserParser.WORD, i)

        def othersymbol(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.OthersymbolContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.OthersymbolContext,i)


        def SINGLEQUOTE(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.SINGLEQUOTE)
            else:
                return self.getToken(grammarParserParser.SINGLEQUOTE, i)

        def getRuleIndex(self):
            return grammarParserParser.RULE_strings

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitStrings" ):
                return visitor.visitStrings(self)
            else:
                return visitor.visitChildren(self)




    def strings(self):

        localctx = grammarParserParser.StringsContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_strings)
        self._la = 0 # Token type
        try:
            self.state = 111
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [7]:
                self.enterOuterAlt(localctx, 1)
                self.state = 92
                self.match(grammarParserParser.QUOTE)
                self.state = 97
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while (((_la) & ~0x3f) == 0 and ((1 << _la) & 97916) != 0):
                    self.state = 95
                    self._errHandler.sync(self)
                    token = self._input.LA(1)
                    if token in [16]:
                        self.state = 93
                        self.match(grammarParserParser.WORD)
                        pass
                    elif token in [2, 3, 4, 5, 6, 9, 10, 11, 12, 13, 14]:
                        self.state = 94
                        self.othersymbol()
                        pass
                    else:
                        raise NoViableAltException(self)

                    self.state = 99
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 100
                self.match(grammarParserParser.QUOTE)
                pass
            elif token in [8]:
                self.enterOuterAlt(localctx, 2)
                self.state = 101
                self.match(grammarParserParser.SINGLEQUOTE)
                self.state = 106
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while (((_la) & ~0x3f) == 0 and ((1 << _la) & 97916) != 0):
                    self.state = 104
                    self._errHandler.sync(self)
                    token = self._input.LA(1)
                    if token in [16]:
                        self.state = 102
                        self.match(grammarParserParser.WORD)
                        pass
                    elif token in [2, 3, 4, 5, 6, 9, 10, 11, 12, 13, 14]:
                        self.state = 103
                        self.othersymbol()
                        pass
                    else:
                        raise NoViableAltException(self)

                    self.state = 108
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 109
                self.match(grammarParserParser.SINGLEQUOTE)
                pass
            elif token in [16]:
                self.enterOuterAlt(localctx, 3)
                self.state = 110
                self.match(grammarParserParser.WORD)
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OthersymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def OPENBRACKET(self):
            return self.getToken(grammarParserParser.OPENBRACKET, 0)

        def CLOSEBRACKET(self):
            return self.getToken(grammarParserParser.CLOSEBRACKET, 0)

        def SPLITTER(self):
            return self.getToken(grammarParserParser.SPLITTER, 0)

        def CHEVRON(self):
            return self.getToken(grammarParserParser.CHEVRON, 0)

        def ICHEVRON(self):
            return self.getToken(grammarParserParser.ICHEVRON, 0)

        def QUESTION(self):
            return self.getToken(grammarParserParser.QUESTION, 0)

        def PLUS(self):
            return self.getToken(grammarParserParser.PLUS, 0)

        def STAR(self):
            return self.getToken(grammarParserParser.STAR, 0)

        def SEMICOLON(self):
            return self.getToken(grammarParserParser.SEMICOLON, 0)

        def COLON(self):
            return self.getToken(grammarParserParser.COLON, 0)

        def SLASH(self):
            return self.getToken(grammarParserParser.SLASH, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_othersymbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitOthersymbol" ):
                return visitor.visitOthersymbol(self)
            else:
                return visitor.visitChildren(self)




    def othersymbol(self):

        localctx = grammarParserParser.OthersymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 26, self.RULE_othersymbol)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 113
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 32380) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class RegexContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def SLASH(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.SLASH)
            else:
                return self.getToken(grammarParserParser.SLASH, i)

        def WORD(self):
            return self.getToken(grammarParserParser.WORD, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_regex

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitRegex" ):
                return visitor.visitRegex(self)
            else:
                return visitor.visitChildren(self)




    def regex(self):

        localctx = grammarParserParser.RegexContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_regex)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 115
            self.match(grammarParserParser.SLASH)
            self.state = 116
            self.match(grammarParserParser.WORD)
            self.state = 117
            self.match(grammarParserParser.SLASH)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





