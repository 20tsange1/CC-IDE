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
        4,1,14,69,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,5,0,13,
        8,0,10,0,12,0,16,9,0,3,0,18,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,5,1,29,8,1,10,1,12,1,32,9,1,3,1,34,8,1,1,2,4,2,37,8,2,11,2,12,
        2,38,1,3,1,3,1,3,1,3,1,3,1,3,5,3,47,8,3,10,3,12,3,50,9,3,1,3,1,3,
        3,3,54,8,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,62,8,3,10,3,12,3,65,9,3,1,
        4,1,4,1,4,0,1,6,5,0,2,4,6,8,0,1,1,0,1,3,74,0,17,1,0,0,0,2,33,1,0,
        0,0,4,36,1,0,0,0,6,53,1,0,0,0,8,66,1,0,0,0,10,18,3,2,1,0,11,13,3,
        2,1,0,12,11,1,0,0,0,13,16,1,0,0,0,14,12,1,0,0,0,14,15,1,0,0,0,15,
        18,1,0,0,0,16,14,1,0,0,0,17,10,1,0,0,0,17,14,1,0,0,0,18,1,1,0,0,
        0,19,20,3,6,3,0,20,21,3,8,4,0,21,22,3,6,3,0,22,34,1,0,0,0,23,24,
        3,6,3,0,24,25,3,8,4,0,25,30,3,4,2,0,26,27,5,4,0,0,27,29,3,4,2,0,
        28,26,1,0,0,0,29,32,1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,0,31,34,1,
        0,0,0,32,30,1,0,0,0,33,19,1,0,0,0,33,23,1,0,0,0,34,3,1,0,0,0,35,
        37,3,6,3,0,36,35,1,0,0,0,37,38,1,0,0,0,38,36,1,0,0,0,38,39,1,0,0,
        0,39,5,1,0,0,0,40,41,6,3,-1,0,41,42,5,5,0,0,42,43,5,12,0,0,43,54,
        5,6,0,0,44,48,5,7,0,0,45,47,5,12,0,0,46,45,1,0,0,0,47,50,1,0,0,0,
        48,46,1,0,0,0,48,49,1,0,0,0,49,51,1,0,0,0,50,48,1,0,0,0,51,54,5,
        7,0,0,52,54,5,12,0,0,53,40,1,0,0,0,53,44,1,0,0,0,53,52,1,0,0,0,54,
        63,1,0,0,0,55,56,10,6,0,0,56,62,5,8,0,0,57,58,10,5,0,0,58,62,5,9,
        0,0,59,60,10,4,0,0,60,62,5,10,0,0,61,55,1,0,0,0,61,57,1,0,0,0,61,
        59,1,0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,7,1,0,0,
        0,65,63,1,0,0,0,66,67,7,0,0,0,67,9,1,0,0,0,9,14,17,30,33,38,48,53,
        61,63
    ]

class grammarParserParser ( Parser ):

    grammarFileName = "grammarParser.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'::='", "'L::='", "'R::='", "'|'", "'<'", 
                     "'>'", "'\"'", "'?'", "'+'", "'*'" ]

    symbolicNames = [ "<INVALID>", "OTTER", "LOTTER", "ROTTER", "SPLITTER", 
                      "CHEVRON", "ICHEVRON", "QUOTE", "QUESTION", "PLUS", 
                      "STAR", "INT", "WORD", "ID", "WS" ]

    RULE_gram = 0
    RULE_component = 1
    RULE_arg = 2
    RULE_symbol = 3
    RULE_otter = 4

    ruleNames =  [ "gram", "component", "arg", "symbol", "otter" ]

    EOF = Token.EOF
    OTTER=1
    LOTTER=2
    ROTTER=3
    SPLITTER=4
    CHEVRON=5
    ICHEVRON=6
    QUOTE=7
    QUESTION=8
    PLUS=9
    STAR=10
    INT=11
    WORD=12
    ID=13
    WS=14

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
            self.state = 17
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,1,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 10
                self.component()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 14
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while (((_la) & ~0x3f) == 0 and ((1 << _la) & 4256) != 0):
                    self.state = 11
                    self.component()
                    self.state = 16
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

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
            self.state = 33
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,3,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 19
                self.symbol(0)
                self.state = 20
                self.otter()
                self.state = 21
                self.symbol(0)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 23
                self.symbol(0)
                self.state = 24
                self.otter()
                self.state = 25
                self.arg()
                self.state = 30
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==4:
                    self.state = 26
                    self.match(grammarParserParser.SPLITTER)
                    self.state = 27
                    self.arg()
                    self.state = 32
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

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
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 36 
            self._errHandler.sync(self)
            _alt = 1
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt == 1:
                    self.state = 35
                    self.symbol(0)

                else:
                    raise NoViableAltException(self)
                self.state = 38 
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,4,self._ctx)

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
            self.state = 53
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [5]:
                self.state = 41
                self.match(grammarParserParser.CHEVRON)
                self.state = 42
                self.match(grammarParserParser.WORD)
                self.state = 43
                self.match(grammarParserParser.ICHEVRON)
                pass
            elif token in [7]:
                self.state = 44
                self.match(grammarParserParser.QUOTE)
                self.state = 48
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==12:
                    self.state = 45
                    self.match(grammarParserParser.WORD)
                    self.state = 50
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 51
                self.match(grammarParserParser.QUOTE)
                pass
            elif token in [12]:
                self.state = 52
                self.match(grammarParserParser.WORD)
                pass
            else:
                raise NoViableAltException(self)

            self._ctx.stop = self._input.LT(-1)
            self.state = 63
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,8,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 61
                    self._errHandler.sync(self)
                    la_ = self._interp.adaptivePredict(self._input,7,self._ctx)
                    if la_ == 1:
                        localctx = grammarParserParser.SymbolContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_symbol)
                        self.state = 55
                        if not self.precpred(self._ctx, 6):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 6)")
                        self.state = 56
                        self.match(grammarParserParser.QUESTION)
                        pass

                    elif la_ == 2:
                        localctx = grammarParserParser.SymbolContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_symbol)
                        self.state = 57
                        if not self.precpred(self._ctx, 5):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 5)")
                        self.state = 58
                        self.match(grammarParserParser.PLUS)
                        pass

                    elif la_ == 3:
                        localctx = grammarParserParser.SymbolContext(self, _parentctx, _parentState)
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_symbol)
                        self.state = 59
                        if not self.precpred(self._ctx, 4):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 4)")
                        self.state = 60
                        self.match(grammarParserParser.STAR)
                        pass

             
                self.state = 65
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,8,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx


    class OtterContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def OTTER(self):
            return self.getToken(grammarParserParser.OTTER, 0)

        def LOTTER(self):
            return self.getToken(grammarParserParser.LOTTER, 0)

        def ROTTER(self):
            return self.getToken(grammarParserParser.ROTTER, 0)

        def getRuleIndex(self):
            return grammarParserParser.RULE_otter

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitOtter" ):
                return visitor.visitOtter(self)
            else:
                return visitor.visitChildren(self)




    def otter(self):

        localctx = grammarParserParser.OtterContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_otter)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 66
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 14) != 0)):
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
         




