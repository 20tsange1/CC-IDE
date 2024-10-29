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
        4,1,10,61,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,5,0,11,8,0,10,
        0,12,0,14,9,0,3,0,16,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,
        27,8,1,10,1,12,1,30,9,1,3,1,32,8,1,1,2,4,2,35,8,2,11,2,12,2,36,1,
        3,1,3,1,3,1,3,1,3,1,3,5,3,45,8,3,10,3,12,3,48,9,3,1,3,1,3,3,3,52,
        8,3,1,3,1,3,5,3,56,8,3,10,3,12,3,59,9,3,1,3,0,1,6,4,0,2,4,6,0,0,
        65,0,15,1,0,0,0,2,31,1,0,0,0,4,34,1,0,0,0,6,51,1,0,0,0,8,16,3,2,
        1,0,9,11,3,2,1,0,10,9,1,0,0,0,11,14,1,0,0,0,12,10,1,0,0,0,12,13,
        1,0,0,0,13,16,1,0,0,0,14,12,1,0,0,0,15,8,1,0,0,0,15,12,1,0,0,0,16,
        1,1,0,0,0,17,18,3,6,3,0,18,19,5,1,0,0,19,20,3,6,3,0,20,32,1,0,0,
        0,21,22,3,6,3,0,22,23,5,1,0,0,23,28,3,4,2,0,24,25,5,2,0,0,25,27,
        3,4,2,0,26,24,1,0,0,0,27,30,1,0,0,0,28,26,1,0,0,0,28,29,1,0,0,0,
        29,32,1,0,0,0,30,28,1,0,0,0,31,17,1,0,0,0,31,21,1,0,0,0,32,3,1,0,
        0,0,33,35,3,6,3,0,34,33,1,0,0,0,35,36,1,0,0,0,36,34,1,0,0,0,36,37,
        1,0,0,0,37,5,1,0,0,0,38,39,6,3,-1,0,39,40,5,3,0,0,40,41,5,8,0,0,
        41,52,5,4,0,0,42,46,5,5,0,0,43,45,5,8,0,0,44,43,1,0,0,0,45,48,1,
        0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,47,49,1,0,0,0,48,46,1,0,0,0,49,
        52,5,5,0,0,50,52,5,8,0,0,51,38,1,0,0,0,51,42,1,0,0,0,51,50,1,0,0,
        0,52,57,1,0,0,0,53,54,10,4,0,0,54,56,5,6,0,0,55,53,1,0,0,0,56,59,
        1,0,0,0,57,55,1,0,0,0,57,58,1,0,0,0,58,7,1,0,0,0,59,57,1,0,0,0,8,
        12,15,28,31,36,46,51,57
    ]

class grammarParserParser ( Parser ):

    grammarFileName = "grammarParser.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'::='", "'|'", "'<'", "'>'", "'\"'", 
                     "'?'" ]

    symbolicNames = [ "<INVALID>", "OTTER", "SPLITTER", "CHEVRON", "ICHEVRON", 
                      "QUOTE", "QUESTION", "INT", "WORD", "ID", "WS" ]

    RULE_gram = 0
    RULE_component = 1
    RULE_arg = 2
    RULE_symbol = 3

    ruleNames =  [ "gram", "component", "arg", "symbol" ]

    EOF = Token.EOF
    OTTER=1
    SPLITTER=2
    CHEVRON=3
    ICHEVRON=4
    QUOTE=5
    QUESTION=6
    INT=7
    WORD=8
    ID=9
    WS=10

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
            self.state = 15
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,1,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 8
                self.component()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 12
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while (((_la) & ~0x3f) == 0 and ((1 << _la) & 296) != 0):
                    self.state = 9
                    self.component()
                    self.state = 14
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


        def OTTER(self):
            return self.getToken(grammarParserParser.OTTER, 0)

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
            self.state = 31
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,3,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 17
                self.symbol(0)
                self.state = 18
                self.match(grammarParserParser.OTTER)
                self.state = 19
                self.symbol(0)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 21
                self.symbol(0)
                self.state = 22
                self.match(grammarParserParser.OTTER)
                self.state = 23
                self.arg()
                self.state = 28
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==2:
                    self.state = 24
                    self.match(grammarParserParser.SPLITTER)
                    self.state = 25
                    self.arg()
                    self.state = 30
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
            self.state = 34 
            self._errHandler.sync(self)
            _alt = 1
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt == 1:
                    self.state = 33
                    self.symbol(0)

                else:
                    raise NoViableAltException(self)
                self.state = 36 
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
            self.state = 51
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [3]:
                self.state = 39
                self.match(grammarParserParser.CHEVRON)
                self.state = 40
                self.match(grammarParserParser.WORD)
                self.state = 41
                self.match(grammarParserParser.ICHEVRON)
                pass
            elif token in [5]:
                self.state = 42
                self.match(grammarParserParser.QUOTE)
                self.state = 46
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==8:
                    self.state = 43
                    self.match(grammarParserParser.WORD)
                    self.state = 48
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)

                self.state = 49
                self.match(grammarParserParser.QUOTE)
                pass
            elif token in [8]:
                self.state = 50
                self.match(grammarParserParser.WORD)
                pass
            else:
                raise NoViableAltException(self)

            self._ctx.stop = self._input.LT(-1)
            self.state = 57
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,7,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = grammarParserParser.SymbolContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_symbol)
                    self.state = 53
                    if not self.precpred(self._ctx, 4):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 4)")
                    self.state = 54
                    self.match(grammarParserParser.QUESTION) 
                self.state = 59
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,7,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
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
                return self.precpred(self._ctx, 4)
         




