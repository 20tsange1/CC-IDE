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
        4,0,18,91,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,
        6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,
        7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,0,1,0,1,1,
        1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,
        1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,4,14,69,8,14,11,
        14,12,14,70,1,15,4,15,74,8,15,11,15,12,15,75,1,16,1,16,5,16,80,8,
        16,10,16,12,16,83,9,16,1,17,4,17,86,8,17,11,17,12,17,87,1,17,1,17,
        0,0,18,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,
        25,13,27,14,29,15,31,16,33,17,35,18,1,0,5,1,0,48,57,8,0,9,10,32,
        32,34,34,39,41,47,47,58,60,62,63,124,124,3,0,65,90,95,95,97,122,
        4,0,48,57,65,90,95,95,97,122,3,0,9,10,12,13,32,32,94,0,1,1,0,0,0,
        0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
        1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
        1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
        1,0,0,0,0,35,1,0,0,0,1,37,1,0,0,0,3,41,1,0,0,0,5,43,1,0,0,0,7,45,
        1,0,0,0,9,47,1,0,0,0,11,49,1,0,0,0,13,51,1,0,0,0,15,53,1,0,0,0,17,
        55,1,0,0,0,19,57,1,0,0,0,21,59,1,0,0,0,23,61,1,0,0,0,25,63,1,0,0,
        0,27,65,1,0,0,0,29,68,1,0,0,0,31,73,1,0,0,0,33,77,1,0,0,0,35,85,
        1,0,0,0,37,38,5,58,0,0,38,39,5,58,0,0,39,40,5,61,0,0,40,2,1,0,0,
        0,41,42,5,40,0,0,42,4,1,0,0,0,43,44,5,41,0,0,44,6,1,0,0,0,45,46,
        5,124,0,0,46,8,1,0,0,0,47,48,5,60,0,0,48,10,1,0,0,0,49,50,5,62,0,
        0,50,12,1,0,0,0,51,52,5,34,0,0,52,14,1,0,0,0,53,54,5,39,0,0,54,16,
        1,0,0,0,55,56,5,63,0,0,56,18,1,0,0,0,57,58,5,43,0,0,58,20,1,0,0,
        0,59,60,5,42,0,0,60,22,1,0,0,0,61,62,5,59,0,0,62,24,1,0,0,0,63,64,
        5,58,0,0,64,26,1,0,0,0,65,66,5,47,0,0,66,28,1,0,0,0,67,69,7,0,0,
        0,68,67,1,0,0,0,69,70,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,71,30,
        1,0,0,0,72,74,8,1,0,0,73,72,1,0,0,0,74,75,1,0,0,0,75,73,1,0,0,0,
        75,76,1,0,0,0,76,32,1,0,0,0,77,81,7,2,0,0,78,80,7,3,0,0,79,78,1,
        0,0,0,80,83,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,34,1,0,0,0,83,
        81,1,0,0,0,84,86,7,4,0,0,85,84,1,0,0,0,86,87,1,0,0,0,87,85,1,0,0,
        0,87,88,1,0,0,0,88,89,1,0,0,0,89,90,6,17,0,0,90,36,1,0,0,0,5,0,70,
        75,81,87,1,6,0,0
    ]

class grammarParserLexer(Lexer):

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    OTTER = 1
    OPENBRACKET = 2
    CLOSEBRACKET = 3
    SPLITTER = 4
    CHEVRON = 5
    ICHEVRON = 6
    QUOTE = 7
    SINGLEQUOTE = 8
    QUESTION = 9
    PLUS = 10
    STAR = 11
    SEMICOLON = 12
    COLON = 13
    SLASH = 14
    INT = 15
    WORD = 16
    ID = 17
    WS = 18

    channelNames = [ u"DEFAULT_TOKEN_CHANNEL", u"HIDDEN" ]

    modeNames = [ "DEFAULT_MODE" ]

    literalNames = [ "<INVALID>",
            "'::='", "'('", "')'", "'|'", "'<'", "'>'", "'\"'", "'''", "'?'", 
            "'+'", "'*'", "';'", "':'", "'/'" ]

    symbolicNames = [ "<INVALID>",
            "OTTER", "OPENBRACKET", "CLOSEBRACKET", "SPLITTER", "CHEVRON", 
            "ICHEVRON", "QUOTE", "SINGLEQUOTE", "QUESTION", "PLUS", "STAR", 
            "SEMICOLON", "COLON", "SLASH", "INT", "WORD", "ID", "WS" ]

    ruleNames = [ "OTTER", "OPENBRACKET", "CLOSEBRACKET", "SPLITTER", "CHEVRON", 
                  "ICHEVRON", "QUOTE", "SINGLEQUOTE", "QUESTION", "PLUS", 
                  "STAR", "SEMICOLON", "COLON", "SLASH", "INT", "WORD", 
                  "ID", "WS" ]

    grammarFileName = "grammarParser.g4"

    def __init__(self, input=None, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.1")
        self._interp = LexerATNSimulator(self, self.atn, self.decisionsToDFA, PredictionContextCache())
        self._actions = None
        self._predicates = None


