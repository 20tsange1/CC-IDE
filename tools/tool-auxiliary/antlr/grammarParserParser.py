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
        4,1,22,142,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,2,15,7,15,1,0,4,0,34,8,0,11,0,12,0,35,1,1,1,1,1,1,1,1,
        1,1,1,1,3,1,44,8,1,1,2,1,2,5,2,48,8,2,10,2,12,2,51,9,2,1,2,1,2,5,
        2,55,8,2,10,2,12,2,58,9,2,1,2,3,2,61,8,2,1,3,1,3,1,3,5,3,66,8,3,
        10,3,12,3,69,9,3,1,4,4,4,72,8,4,11,4,12,4,73,1,5,1,5,1,5,1,5,1,5,
        1,5,1,5,1,5,1,5,1,5,3,5,86,8,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,
        9,1,9,1,10,1,10,1,10,1,10,3,10,102,8,10,1,11,1,11,1,11,1,11,1,12,
        1,12,3,12,110,8,12,1,12,3,12,113,8,12,1,13,1,13,1,13,5,13,118,8,
        13,10,13,12,13,121,9,13,1,13,1,13,1,13,1,13,5,13,127,8,13,10,13,
        12,13,130,9,13,1,13,1,13,3,13,134,8,13,1,14,1,14,1,15,1,15,1,15,
        1,15,1,15,0,0,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,2,
        1,0,1,2,2,0,6,10,13,18,146,0,33,1,0,0,0,2,43,1,0,0,0,4,60,1,0,0,
        0,6,62,1,0,0,0,8,71,1,0,0,0,10,85,1,0,0,0,12,87,1,0,0,0,14,89,1,
        0,0,0,16,91,1,0,0,0,18,93,1,0,0,0,20,101,1,0,0,0,22,103,1,0,0,0,
        24,112,1,0,0,0,26,133,1,0,0,0,28,135,1,0,0,0,30,137,1,0,0,0,32,34,
        3,2,1,0,33,32,1,0,0,0,34,35,1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,
        36,1,1,0,0,0,37,38,3,22,11,0,38,39,3,24,12,0,39,40,3,6,3,0,40,41,
        5,16,0,0,41,44,1,0,0,0,42,44,3,4,2,0,43,37,1,0,0,0,43,42,1,0,0,0,
        44,3,1,0,0,0,45,49,7,0,0,0,46,48,5,20,0,0,47,46,1,0,0,0,48,51,1,
        0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,61,1,0,0,0,51,49,1,0,0,0,52,
        56,5,3,0,0,53,55,5,20,0,0,54,53,1,0,0,0,55,58,1,0,0,0,56,54,1,0,
        0,0,56,57,1,0,0,0,57,59,1,0,0,0,58,56,1,0,0,0,59,61,5,4,0,0,60,45,
        1,0,0,0,60,52,1,0,0,0,61,5,1,0,0,0,62,67,3,8,4,0,63,64,5,8,0,0,64,
        66,3,8,4,0,65,63,1,0,0,0,66,69,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,
        0,68,7,1,0,0,0,69,67,1,0,0,0,70,72,3,10,5,0,71,70,1,0,0,0,72,73,
        1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,9,1,0,0,0,75,76,3,20,10,0,
        76,77,3,12,6,0,77,86,1,0,0,0,78,79,3,20,10,0,79,80,3,14,7,0,80,86,
        1,0,0,0,81,82,3,20,10,0,82,83,3,16,8,0,83,86,1,0,0,0,84,86,3,20,
        10,0,85,75,1,0,0,0,85,78,1,0,0,0,85,81,1,0,0,0,85,84,1,0,0,0,86,
        11,1,0,0,0,87,88,5,13,0,0,88,13,1,0,0,0,89,90,5,15,0,0,90,15,1,0,
        0,0,91,92,5,14,0,0,92,17,1,0,0,0,93,94,5,6,0,0,94,95,3,6,3,0,95,
        96,5,7,0,0,96,19,1,0,0,0,97,102,3,18,9,0,98,102,3,22,11,0,99,102,
        3,26,13,0,100,102,3,30,15,0,101,97,1,0,0,0,101,98,1,0,0,0,101,99,
        1,0,0,0,101,100,1,0,0,0,102,21,1,0,0,0,103,104,5,9,0,0,104,105,5,
        20,0,0,105,106,5,10,0,0,106,23,1,0,0,0,107,113,5,5,0,0,108,110,5,
        20,0,0,109,108,1,0,0,0,109,110,1,0,0,0,110,111,1,0,0,0,111,113,5,
        5,0,0,112,107,1,0,0,0,112,109,1,0,0,0,113,25,1,0,0,0,114,119,5,11,
        0,0,115,118,5,20,0,0,116,118,3,28,14,0,117,115,1,0,0,0,117,116,1,
        0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,1,
        0,0,0,121,119,1,0,0,0,122,134,5,11,0,0,123,128,5,12,0,0,124,127,
        5,20,0,0,125,127,3,28,14,0,126,124,1,0,0,0,126,125,1,0,0,0,127,130,
        1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,131,1,0,0,0,130,128,
        1,0,0,0,131,134,5,12,0,0,132,134,5,20,0,0,133,114,1,0,0,0,133,123,
        1,0,0,0,133,132,1,0,0,0,134,27,1,0,0,0,135,136,7,1,0,0,136,29,1,
        0,0,0,137,138,5,18,0,0,138,139,5,20,0,0,139,140,5,18,0,0,140,31,
        1,0,0,0,16,35,43,49,56,60,67,73,85,101,109,112,117,119,126,128,133
    ]

class grammarParserParser ( Parser ):

    grammarFileName = "grammarParser.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'#'", "'//'", "'/*'", "'*/'", "'::='", 
                     "'('", "')'", "'|'", "'<'", "'>'", "'\"'", "'''", "'?'", 
                     "'+'", "'*'", "';'", "':'", "'/'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "OTTER", "OPENBRACKET", "CLOSEBRACKET", 
                      "SPLITTER", "CHEVRON", "ICHEVRON", "QUOTE", "SINGLEQUOTE", 
                      "QUESTION", "PLUS", "STAR", "SEMICOLON", "COLON", 
                      "SLASH", "INT", "WORD", "ID", "WS" ]

    RULE_gram = 0
    RULE_component = 1
    RULE_comment = 2
    RULE_expansion = 3
    RULE_arg = 4
    RULE_entersymbol = 5
    RULE_optionalsymbol = 6
    RULE_repeatsymbol = 7
    RULE_repeat1symbol = 8
    RULE_bracketsymbol = 9
    RULE_checksymbol = 10
    RULE_symbol = 11
    RULE_otter = 12
    RULE_strings = 13
    RULE_othersymbol = 14
    RULE_regex = 15

    ruleNames =  [ "gram", "component", "comment", "expansion", "arg", "entersymbol", 
                   "optionalsymbol", "repeatsymbol", "repeat1symbol", "bracketsymbol", 
                   "checksymbol", "symbol", "otter", "strings", "othersymbol", 
                   "regex" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    OTTER=5
    OPENBRACKET=6
    CLOSEBRACKET=7
    SPLITTER=8
    CHEVRON=9
    ICHEVRON=10
    QUOTE=11
    SINGLEQUOTE=12
    QUESTION=13
    PLUS=14
    STAR=15
    SEMICOLON=16
    COLON=17
    SLASH=18
    INT=19
    WORD=20
    ID=21
    WS=22

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
            self.state = 33 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 32
                self.component()
                self.state = 35 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 526) != 0)):
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

        def comment(self):
            return self.getTypedRuleContext(grammarParserParser.CommentContext,0)


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
            self.state = 43
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [9]:
                self.enterOuterAlt(localctx, 1)
                self.state = 37
                self.symbol()
                self.state = 38
                self.otter()
                self.state = 39
                self.expansion()
                self.state = 40
                self.match(grammarParserParser.SEMICOLON)
                pass
            elif token in [1, 2, 3]:
                self.enterOuterAlt(localctx, 2)
                self.state = 42
                self.comment()
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


    class CommentContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def WORD(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.WORD)
            else:
                return self.getToken(grammarParserParser.WORD, i)

        def getRuleIndex(self):
            return grammarParserParser.RULE_comment

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitComment" ):
                return visitor.visitComment(self)
            else:
                return visitor.visitChildren(self)




    def comment(self):

        localctx = grammarParserParser.CommentContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_comment)
        self._la = 0 # Token type
        try:
            self.state = 60
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [1, 2]:
                self.enterOuterAlt(localctx, 1)
                self.state = 45
                _la = self._input.LA(1)
                if not(_la==1 or _la==2):
                    self._errHandler.recoverInline(self)
                else:
                    self._errHandler.reportMatch(self)
                    self.consume()
                self.state = 49
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==20:
                    self.state = 46
                    self.match(grammarParserParser.WORD)
                    self.state = 51
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                pass
            elif token in [3]:
                self.enterOuterAlt(localctx, 2)
                self.state = 52
                self.match(grammarParserParser.T__2)
                self.state = 56
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==20:
                    self.state = 53
                    self.match(grammarParserParser.WORD)
                    self.state = 58
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 59
                self.match(grammarParserParser.T__3)
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
        self.enterRule(localctx, 6, self.RULE_expansion)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 62
            self.arg()
            self.state = 67
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==8:
                self.state = 63
                self.match(grammarParserParser.SPLITTER)
                self.state = 64
                self.arg()
                self.state = 69
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
        self.enterRule(localctx, 8, self.RULE_arg)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 71 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 70
                self.entersymbol()
                self.state = 73 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 1317440) != 0)):
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
        self.enterRule(localctx, 10, self.RULE_entersymbol)
        try:
            self.state = 85
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 75
                self.checksymbol()
                self.state = 76
                self.optionalsymbol()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 78
                self.checksymbol()
                self.state = 79
                self.repeatsymbol()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 81
                self.checksymbol()
                self.state = 82
                self.repeat1symbol()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 84
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
        self.enterRule(localctx, 12, self.RULE_optionalsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 87
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
        self.enterRule(localctx, 14, self.RULE_repeatsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 89
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
        self.enterRule(localctx, 16, self.RULE_repeat1symbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 91
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
        self.enterRule(localctx, 18, self.RULE_bracketsymbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 93
            self.match(grammarParserParser.OPENBRACKET)
            self.state = 94
            self.expansion()
            self.state = 95
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
        self.enterRule(localctx, 20, self.RULE_checksymbol)
        try:
            self.state = 101
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [6]:
                self.enterOuterAlt(localctx, 1)
                self.state = 97
                self.bracketsymbol()
                pass
            elif token in [9]:
                self.enterOuterAlt(localctx, 2)
                self.state = 98
                self.symbol()
                pass
            elif token in [11, 12, 20]:
                self.enterOuterAlt(localctx, 3)
                self.state = 99
                self.strings()
                pass
            elif token in [18]:
                self.enterOuterAlt(localctx, 4)
                self.state = 100
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
        self.enterRule(localctx, 22, self.RULE_symbol)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 103
            self.match(grammarParserParser.CHEVRON)
            self.state = 104
            self.match(grammarParserParser.WORD)
            self.state = 105
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
        self.enterRule(localctx, 24, self.RULE_otter)
        self._la = 0 # Token type
        try:
            self.state = 112
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,10,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 107
                self.match(grammarParserParser.OTTER)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 109
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if _la==20:
                    self.state = 108
                    self.match(grammarParserParser.WORD)


                self.state = 111
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
        self.enterRule(localctx, 26, self.RULE_strings)
        self._la = 0 # Token type
        try:
            self.state = 133
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [11]:
                self.enterOuterAlt(localctx, 1)
                self.state = 114
                self.match(grammarParserParser.QUOTE)
                self.state = 119
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while (((_la) & ~0x3f) == 0 and ((1 << _la) & 1566656) != 0):
                    self.state = 117
                    self._errHandler.sync(self)
                    token = self._input.LA(1)
                    if token in [20]:
                        self.state = 115
                        self.match(grammarParserParser.WORD)
                        pass
                    elif token in [6, 7, 8, 9, 10, 13, 14, 15, 16, 17, 18]:
                        self.state = 116
                        self.othersymbol()
                        pass
                    else:
                        raise NoViableAltException(self)

                    self.state = 121
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 122
                self.match(grammarParserParser.QUOTE)
                pass
            elif token in [12]:
                self.enterOuterAlt(localctx, 2)
                self.state = 123
                self.match(grammarParserParser.SINGLEQUOTE)
                self.state = 128
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while (((_la) & ~0x3f) == 0 and ((1 << _la) & 1566656) != 0):
                    self.state = 126
                    self._errHandler.sync(self)
                    token = self._input.LA(1)
                    if token in [20]:
                        self.state = 124
                        self.match(grammarParserParser.WORD)
                        pass
                    elif token in [6, 7, 8, 9, 10, 13, 14, 15, 16, 17, 18]:
                        self.state = 125
                        self.othersymbol()
                        pass
                    else:
                        raise NoViableAltException(self)

                    self.state = 130
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 131
                self.match(grammarParserParser.SINGLEQUOTE)
                pass
            elif token in [20]:
                self.enterOuterAlt(localctx, 3)
                self.state = 132
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
        self.enterRule(localctx, 28, self.RULE_othersymbol)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 135
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 518080) != 0)):
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
        self.enterRule(localctx, 30, self.RULE_regex)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 137
            self.match(grammarParserParser.SLASH)
            self.state = 138
            self.match(grammarParserParser.WORD)
            self.state = 139
            self.match(grammarParserParser.SLASH)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





