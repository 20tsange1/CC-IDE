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
        4,1,15,87,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,1,
        0,4,0,15,8,0,11,0,12,0,16,3,0,19,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,5,1,31,8,1,10,1,12,1,34,9,1,1,1,1,1,3,1,38,8,1,1,2,4,
        2,41,8,2,11,2,12,2,42,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,52,8,3,10,
        3,12,3,55,9,3,1,3,1,3,3,3,59,8,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,67,
        8,3,10,3,12,3,70,9,3,1,4,1,4,4,4,74,8,4,11,4,12,4,75,1,4,1,4,1,5,
        1,5,3,5,82,8,5,1,5,3,5,85,8,5,1,5,0,1,6,6,0,2,4,6,8,10,0,0,95,0,
        18,1,0,0,0,2,37,1,0,0,0,4,40,1,0,0,0,6,58,1,0,0,0,8,71,1,0,0,0,10,
        84,1,0,0,0,12,19,3,2,1,0,13,15,3,2,1,0,14,13,1,0,0,0,15,16,1,0,0,
        0,16,14,1,0,0,0,16,17,1,0,0,0,17,19,1,0,0,0,18,12,1,0,0,0,18,14,
        1,0,0,0,19,1,1,0,0,0,20,21,3,6,3,0,21,22,3,10,5,0,22,23,3,6,3,0,
        23,24,5,11,0,0,24,38,1,0,0,0,25,26,3,6,3,0,26,27,3,10,5,0,27,32,
        3,4,2,0,28,29,5,4,0,0,29,31,3,4,2,0,30,28,1,0,0,0,31,34,1,0,0,0,
        32,30,1,0,0,0,32,33,1,0,0,0,33,35,1,0,0,0,34,32,1,0,0,0,35,36,5,
        11,0,0,36,38,1,0,0,0,37,20,1,0,0,0,37,25,1,0,0,0,38,3,1,0,0,0,39,
        41,3,6,3,0,40,39,1,0,0,0,41,42,1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,
        0,43,5,1,0,0,0,44,45,6,3,-1,0,45,59,3,8,4,0,46,47,5,5,0,0,47,48,
        5,13,0,0,48,59,5,6,0,0,49,53,5,7,0,0,50,52,5,13,0,0,51,50,1,0,0,
        0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,56,1,0,0,0,55,53,
        1,0,0,0,56,59,5,7,0,0,57,59,5,13,0,0,58,44,1,0,0,0,58,46,1,0,0,0,
        58,49,1,0,0,0,58,57,1,0,0,0,59,68,1,0,0,0,60,61,10,6,0,0,61,67,5,
        8,0,0,62,63,10,5,0,0,63,67,5,9,0,0,64,65,10,4,0,0,65,67,5,10,0,0,
        66,60,1,0,0,0,66,62,1,0,0,0,66,64,1,0,0,0,67,70,1,0,0,0,68,66,1,
        0,0,0,68,69,1,0,0,0,69,7,1,0,0,0,70,68,1,0,0,0,71,73,5,2,0,0,72,
        74,3,6,3,0,73,72,1,0,0,0,74,75,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,
        0,76,77,1,0,0,0,77,78,5,3,0,0,78,9,1,0,0,0,79,85,5,1,0,0,80,82,5,
        13,0,0,81,80,1,0,0,0,81,82,1,0,0,0,82,83,1,0,0,0,83,85,5,1,0,0,84,
        79,1,0,0,0,84,81,1,0,0,0,85,11,1,0,0,0,12,16,18,32,37,42,53,58,66,
        68,75,81,84
    ]

class grammarParserParser ( Parser ):

    grammarFileName = "grammarParser.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'::='", "'('", "')'", "'|'", "'<'", "'>'", 
                     "'\"'", "'?'", "'+'", "'*'", "';'" ]

    symbolicNames = [ "<INVALID>", "OTTER", "OPENBRACKET", "CLOSEBRACKET", 
                      "SPLITTER", "CHEVRON", "ICHEVRON", "QUOTE", "QUESTION", 
                      "PLUS", "STAR", "SEMICOLON", "INT", "WORD", "ID", 
                      "WS" ]

    RULE_gram = 0
    RULE_component = 1
    RULE_arg = 2
    RULE_symbol = 3
    RULE_bracketsymbol = 4
    RULE_otter = 5

    ruleNames =  [ "gram", "component", "arg", "symbol", "bracketsymbol", 
                   "otter" ]

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
    INT=12
    WORD=13
    ID=14
    WS=15

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
            self.state = 18
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,1,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 12
                self.component()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 14 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while True:
                    self.state = 13
                    self.component()
                    self.state = 16 
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)
                    if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 8356) != 0)):
                        break

                pass


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

        def symbol(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.SymbolContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.SymbolContext,i)


        def otter(self):
            return self.getTypedRuleContext(grammarParserParser.OtterContext,0)


        def SEMICOLON(self):
            return self.getToken(grammarParserParser.SEMICOLON, 0)

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
            self.state = 37
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,3,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 20
                self.symbol(0)
                self.state = 21
                self.otter()
                self.state = 22
                self.symbol(0)
                self.state = 23
                self.match(grammarParserParser.SEMICOLON)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 25
                self.symbol(0)
                self.state = 26
                self.otter()
                self.state = 27
                self.arg()
                self.state = 32
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==4:
                    self.state = 28
                    self.match(grammarParserParser.SPLITTER)
                    self.state = 29
                    self.arg()
                    self.state = 34
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 35
                self.match(grammarParserParser.SEMICOLON)
                pass


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

        def symbol(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.SymbolContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.SymbolContext,i)


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
            self.state = 40 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 39
                self.symbol(0)
                self.state = 42 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 8356) != 0)):
                    break

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

        def bracketsymbol(self):
            return self.getTypedRuleContext(grammarParserParser.BracketsymbolContext,0)


        def CHEVRON(self):
            return self.getToken(grammarParserParser.CHEVRON, 0)

        def WORD(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.WORD)
            else:
                return self.getToken(grammarParserParser.WORD, i)

        def ICHEVRON(self):
            return self.getToken(grammarParserParser.ICHEVRON, 0)

        def QUOTE(self, i:int=None):
            if i is None:
                return self.getTokens(grammarParserParser.QUOTE)
            else:
                return self.getToken(grammarParserParser.QUOTE, i)

        def symbol(self):
            return self.getTypedRuleContext(grammarParserParser.SymbolContext,0)


        def QUESTION(self):
            return self.getToken(grammarParserParser.QUESTION, 0)

        def PLUS(self):
            return self.getToken(grammarParserParser.PLUS, 0)

        def STAR(self):
            return self.getToken(grammarParserParser.STAR, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_symbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitSymbol" ):
                return visitor.visitSymbol(self)
            else:
                return visitor.visitChildren(self)



    def symbol(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = grammarParserParser.SymbolContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 6
        self.enterRecursionRule(localctx, 6, self.RULE_symbol, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 58
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [2]:
                self.state = 45
                self.bracketsymbol()
                pass
            elif token in [5]:
                self.state = 46
                self.match(grammarParserParser.CHEVRON)
                self.state = 47
                self.match(grammarParserParser.WORD)
                self.state = 48
                self.match(grammarParserParser.ICHEVRON)
                pass
            elif token in [7]:
                self.state = 49
                self.match(grammarParserParser.QUOTE)
                self.state = 53
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==13:
                    self.state = 50
                    self.match(grammarParserParser.WORD)
                    self.state = 55
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 56
                self.match(grammarParserParser.QUOTE)
                pass
            elif token in [13]:
                self.state = 57
                self.match(grammarParserParser.WORD)
                pass
            else:
                raise NoViableAltException(self)

            self._ctx.stop = self._input.LT(-1)
            self.state = 68
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,8,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 66
                    self._errHandler.sync(self)
                    la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
                    if la_ == 1:
                        localctx = grammarParserParser.SymbolContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_symbol)
                        self.state = 60
                        if not self.precpred(self._ctx, 6):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 6)")
                        self.state = 61
                        self.match(grammarParserParser.QUESTION)
                        pass

                    elif la_ == 2:
                        localctx = grammarParserParser.SymbolContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_symbol)
                        self.state = 62
                        if not self.precpred(self._ctx, 5):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 5)")
                        self.state = 63
                        self.match(grammarParserParser.PLUS)
                        pass

                    elif la_ == 3:
                        localctx = grammarParserParser.SymbolContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_symbol)
                        self.state = 64
                        if not self.precpred(self._ctx, 4):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 4)")
                        self.state = 65
                        self.match(grammarParserParser.STAR)
                        pass

             
                self.state = 70
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,8,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class BracketsymbolContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def OPENBRACKET(self):
            return self.getToken(grammarParserParser.OPENBRACKET, 0)

        def CLOSEBRACKET(self):
            return self.getToken(grammarParserParser.CLOSEBRACKET, 0)

        def symbol(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(grammarParserParser.SymbolContext)
            else:
                return self.getTypedRuleContext(grammarParserParser.SymbolContext,i)


        def getRuleIndex(self):
            return grammarParserParser.RULE_bracketsymbol

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitBracketsymbol" ):
                return visitor.visitBracketsymbol(self)
            else:
                return visitor.visitChildren(self)




    def bracketsymbol(self):

        localctx = grammarParserParser.BracketsymbolContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_bracketsymbol)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 71
            self.match(grammarParserParser.OPENBRACKET)
            self.state = 73 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 72
                self.symbol(0)
                self.state = 75 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 8356) != 0)):
                    break

            self.state = 77
            self.match(grammarParserParser.CLOSEBRACKET)
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
        self.enterRule(localctx, 10, self.RULE_otter)
        self._la = 0 # Token type
        try:
            self.state = 84
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,11,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 79
                self.match(grammarParserParser.OTTER)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 81
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if _la==13:
                    self.state = 80
                    self.match(grammarParserParser.WORD)


                self.state = 83
                self.match(grammarParserParser.OTTER)
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx



    def sempred(self, localctx:RuleContext, ruleIndex:int, predIndex:int):
        if self._predicates == None:
            self._predicates = dict()
        self._predicates[3] = self.symbol_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def symbol_sempred(self, localctx:SymbolContext, predIndex:int):
            if predIndex == 0:
                return self.precpred(self._ctx, 6)
         

            if predIndex == 1:
                return self.precpred(self._ctx, 5)
         

            if predIndex == 2:
                return self.precpred(self._ctx, 4)
         




