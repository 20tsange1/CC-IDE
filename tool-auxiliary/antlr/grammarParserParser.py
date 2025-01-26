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
        4,1,16,103,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,4,0,
        28,8,0,11,0,12,0,29,1,1,1,1,1,1,1,1,1,1,5,1,37,8,1,10,1,12,1,40,
        9,1,1,1,1,1,1,2,4,2,45,8,2,11,2,12,2,46,1,3,1,3,1,3,1,3,1,3,1,3,
        1,3,1,3,1,3,1,3,3,3,59,8,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,
        7,1,8,1,8,1,8,1,8,3,8,75,8,8,1,9,1,9,1,9,1,9,1,10,1,10,3,10,83,8,
        10,1,10,3,10,86,8,10,1,11,1,11,5,11,90,8,11,10,11,12,11,93,9,11,
        1,11,1,11,3,11,97,8,11,1,12,1,12,1,12,1,12,1,12,0,0,13,0,2,4,6,8,
        10,12,14,16,18,20,22,24,0,0,102,0,27,1,0,0,0,2,31,1,0,0,0,4,44,1,
        0,0,0,6,58,1,0,0,0,8,60,1,0,0,0,10,62,1,0,0,0,12,64,1,0,0,0,14,66,
        1,0,0,0,16,74,1,0,0,0,18,76,1,0,0,0,20,85,1,0,0,0,22,96,1,0,0,0,
        24,98,1,0,0,0,26,28,3,2,1,0,27,26,1,0,0,0,28,29,1,0,0,0,29,27,1,
        0,0,0,29,30,1,0,0,0,30,1,1,0,0,0,31,32,3,18,9,0,32,33,3,20,10,0,
        33,38,3,4,2,0,34,35,5,4,0,0,35,37,3,4,2,0,36,34,1,0,0,0,37,40,1,
        0,0,0,38,36,1,0,0,0,38,39,1,0,0,0,39,41,1,0,0,0,40,38,1,0,0,0,41,
        42,5,11,0,0,42,3,1,0,0,0,43,45,3,6,3,0,44,43,1,0,0,0,45,46,1,0,0,
        0,46,44,1,0,0,0,46,47,1,0,0,0,47,5,1,0,0,0,48,49,3,16,8,0,49,50,
        3,8,4,0,50,59,1,0,0,0,51,52,3,16,8,0,52,53,3,10,5,0,53,59,1,0,0,
        0,54,55,3,16,8,0,55,56,3,12,6,0,56,59,1,0,0,0,57,59,3,16,8,0,58,
        48,1,0,0,0,58,51,1,0,0,0,58,54,1,0,0,0,58,57,1,0,0,0,59,7,1,0,0,
        0,60,61,5,8,0,0,61,9,1,0,0,0,62,63,5,10,0,0,63,11,1,0,0,0,64,65,
        5,9,0,0,65,13,1,0,0,0,66,67,5,2,0,0,67,68,3,4,2,0,68,69,5,3,0,0,
        69,15,1,0,0,0,70,75,3,14,7,0,71,75,3,18,9,0,72,75,3,22,11,0,73,75,
        3,24,12,0,74,70,1,0,0,0,74,71,1,0,0,0,74,72,1,0,0,0,74,73,1,0,0,
        0,75,17,1,0,0,0,76,77,5,5,0,0,77,78,5,14,0,0,78,79,5,6,0,0,79,19,
        1,0,0,0,80,86,5,1,0,0,81,83,5,14,0,0,82,81,1,0,0,0,82,83,1,0,0,0,
        83,84,1,0,0,0,84,86,5,1,0,0,85,80,1,0,0,0,85,82,1,0,0,0,86,21,1,
        0,0,0,87,91,5,7,0,0,88,90,5,14,0,0,89,88,1,0,0,0,90,93,1,0,0,0,91,
        89,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,93,91,1,0,0,0,94,97,5,7,0,
        0,95,97,5,14,0,0,96,87,1,0,0,0,96,95,1,0,0,0,97,23,1,0,0,0,98,99,
        5,12,0,0,99,100,5,14,0,0,100,101,5,12,0,0,101,25,1,0,0,0,9,29,38,
        46,58,74,82,85,91,96
    ]

class grammarParserParser ( Parser ):

    grammarFileName = "grammarParser.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'::='", "'('", "')'", "'|'", "'<'", "'>'", 
                     "'\"'", "'?'", "'+'", "'*'", "';'", "'/'" ]

    symbolicNames = [ "<INVALID>", "OTTER", "OPENBRACKET", "CLOSEBRACKET", 
                      "SPLITTER", "CHEVRON", "ICHEVRON", "QUOTE", "QUESTION", 
                      "PLUS", "STAR", "SEMICOLON", "SLASH", "INT", "WORD", 
                      "ID", "WS" ]

    RULE_gram = 0
    RULE_component = 1
    RULE_arg = 2
    RULE_entersymbol = 3
    RULE_optionalsymbol = 4
    RULE_repeatsymbol = 5
    RULE_repeat1symbol = 6
    RULE_bracketsymbol = 7
    RULE_checksymbol = 8
    RULE_symbol = 9
    RULE_otter = 10
    RULE_strings = 11
    RULE_regex = 12

    ruleNames =  [ "gram", "component", "arg", "entersymbol", "optionalsymbol", 
                   "repeatsymbol", "repeat1symbol", "bracketsymbol", "checksymbol", 
                   "symbol", "otter", "strings", "regex" ]

    EOF = Token.EOF
    OTTER=1
    OPENBRACKET=2
    CLOSEBRACKET=3
    SPLITTER=4
    CHEVRON=5
    ICHEVRON=6
    QUOTE=7
    QUESTION=8
    PLUS=9
    STAR=10
    SEMICOLON=11
    SLASH=12
    INT=13
    WORD=14
    ID=15
    WS=16

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
            self.state = 27 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 26
                self.component()
                self.state = 29 
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


        def arg(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.ArgContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.ArgContext,i)


        def SEMICOLON(self):
            return self.getToken(grammarParserParser.SEMICOLON, 0)

        def SPLITTER(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.SPLITTER)
            else:
                return self.getToken(grammarParserParser.SPLITTER, i)

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
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 31
            self.symbol()
            self.state = 32
            self.otter()
            self.state = 33
            self.arg()
            self.state = 38
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==4:
                self.state = 34
                self.match(grammarParserParser.SPLITTER)
                self.state = 35
                self.arg()
                self.state = 40
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 41
            self.match(grammarParserParser.SEMICOLON)
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
        self.enterRule(localctx, 4, self.RULE_arg)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 44 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 43
                self.entersymbol()
                self.state = 46 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 20644) != 0)):
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
        self.enterRule(localctx, 6, self.RULE_entersymbol)
        try:
            self.state = 58
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,3,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 48
                self.checksymbol()
                self.state = 49
                self.optionalsymbol()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 51
                self.checksymbol()
                self.state = 52
                self.repeatsymbol()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 54
                self.checksymbol()
                self.state = 55
                self.repeat1symbol()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 57
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
        self.enterRule(localctx, 8, self.RULE_optionalsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 60
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
        self.enterRule(localctx, 10, self.RULE_repeatsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 62
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
        self.enterRule(localctx, 12, self.RULE_repeat1symbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 64
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

        def arg(self):
            return self.getTypedRuleContext(grammarParserParser.ArgContext,0)


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
        self.enterRule(localctx, 14, self.RULE_bracketsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 66
            self.match(grammarParserParser.OPENBRACKET)
            self.state = 67
            self.arg()
            self.state = 68
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
        self.enterRule(localctx, 16, self.RULE_checksymbol)
        try:
            self.state = 74
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [2]:
                self.enterOuterAlt(localctx, 1)
                self.state = 70
                self.bracketsymbol()
                pass
            elif token in [5]:
                self.enterOuterAlt(localctx, 2)
                self.state = 71
                self.symbol()
                pass
            elif token in [7, 14]:
                self.enterOuterAlt(localctx, 3)
                self.state = 72
                self.strings()
                pass
            elif token in [12]:
                self.enterOuterAlt(localctx, 4)
                self.state = 73
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
        self.enterRule(localctx, 18, self.RULE_symbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 76
            self.match(grammarParserParser.CHEVRON)
            self.state = 77
            self.match(grammarParserParser.WORD)
            self.state = 78
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
        self.enterRule(localctx, 20, self.RULE_otter)
        self._la = 0 # Token type
        try:
            self.state = 85
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,6,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 80
                self.match(grammarParserParser.OTTER)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 82
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if _la==14:
                    self.state = 81
                    self.match(grammarParserParser.WORD)


                self.state = 84
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

        def getRuleIndex(self):
            return grammarParserParser.RULE_strings

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitStrings" ):
                return visitor.visitStrings(self)
            else:
                return visitor.visitChildren(self)




    def strings(self):

        localctx = grammarParserParser.StringsContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_strings)
        self._la = 0 # Token type
        try:
            self.state = 96
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [7]:
                self.enterOuterAlt(localctx, 1)
                self.state = 87
                self.match(grammarParserParser.QUOTE)
                self.state = 91
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==14:
                    self.state = 88
                    self.match(grammarParserParser.WORD)
                    self.state = 93
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 94
                self.match(grammarParserParser.QUOTE)
                pass
            elif token in [14]:
                self.enterOuterAlt(localctx, 2)
                self.state = 95
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
        self.enterRule(localctx, 24, self.RULE_regex)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 98
            self.match(grammarParserParser.SLASH)
            self.state = 99
            self.match(grammarParserParser.WORD)
            self.state = 100
            self.match(grammarParserParser.SLASH)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





