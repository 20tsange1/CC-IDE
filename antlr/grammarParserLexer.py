# Generated from grammarParser.g4 by ANTLR 4.13.1
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
    from typing import TextIO
else:
    from typing.io import TextIO


def serializedATN():
    return [
        4,0,10,59,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,
        6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,
        3,1,3,1,4,1,4,1,5,1,5,1,6,4,6,37,8,6,11,6,12,6,38,1,7,4,7,42,8,7,
        11,7,12,7,43,1,8,1,8,5,8,48,8,8,10,8,12,8,51,9,8,1,9,4,9,54,8,9,
        11,9,12,9,55,1,9,1,9,0,0,10,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
        9,19,10,1,0,5,1,0,48,57,6,0,9,10,32,32,34,34,58,60,62,63,124,124,
        3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,12,
        13,32,32,62,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,
        1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
        1,0,0,0,1,21,1,0,0,0,3,25,1,0,0,0,5,27,1,0,0,0,7,29,1,0,0,0,9,31,
        1,0,0,0,11,33,1,0,0,0,13,36,1,0,0,0,15,41,1,0,0,0,17,45,1,0,0,0,
        19,53,1,0,0,0,21,22,5,58,0,0,22,23,5,58,0,0,23,24,5,61,0,0,24,2,
        1,0,0,0,25,26,5,124,0,0,26,4,1,0,0,0,27,28,5,60,0,0,28,6,1,0,0,0,
        29,30,5,62,0,0,30,8,1,0,0,0,31,32,5,34,0,0,32,10,1,0,0,0,33,34,5,
        63,0,0,34,12,1,0,0,0,35,37,7,0,0,0,36,35,1,0,0,0,37,38,1,0,0,0,38,
        36,1,0,0,0,38,39,1,0,0,0,39,14,1,0,0,0,40,42,8,1,0,0,41,40,1,0,0,
        0,42,43,1,0,0,0,43,41,1,0,0,0,43,44,1,0,0,0,44,16,1,0,0,0,45,49,
        7,2,0,0,46,48,7,3,0,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,
        49,50,1,0,0,0,50,18,1,0,0,0,51,49,1,0,0,0,52,54,7,4,0,0,53,52,1,
        0,0,0,54,55,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,57,1,0,0,0,57,
        58,6,9,0,0,58,20,1,0,0,0,5,0,38,43,49,55,1,6,0,0
    ]

class grammarParserLexer(Lexer):

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    OTTER = 1
    SPLITTER = 2
    CHEVRON = 3
    ICHEVRON = 4
    QUOTE = 5
    QUESTION = 6
    INT = 7
    WORD = 8
    ID = 9
    WS = 10

    channelNames = [ u"DEFAULT_TOKEN_CHANNEL", u"HIDDEN" ]

    modeNames = [ "DEFAULT_MODE" ]

    literalNames = [ "<INVALID>",
            "'::='", "'|'", "'<'", "'>'", "'\"'", "'?'" ]

    symbolicNames = [ "<INVALID>",
            "OTTER", "SPLITTER", "CHEVRON", "ICHEVRON", "QUOTE", "QUESTION", 
            "INT", "WORD", "ID", "WS" ]

    ruleNames = [ "OTTER", "SPLITTER", "CHEVRON", "ICHEVRON", "QUOTE", "QUESTION", 
                  "INT", "WORD", "ID", "WS" ]

    grammarFileName = "grammarParser.g4"

    def __init__(self, input=None, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.1")
        self._interp = LexerATNSimulator(self, self.atn, self.decisionsToDFA, PredictionContextCache())
        self._actions = None
        self._predicates = None

