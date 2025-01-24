// Grammar for parsing grammars
grammar grammarParser;
gram: component
    | component+
    ;
    
component: symbol otter symbol SEMICOLON
    | symbol otter arg (SPLITTER arg)* SEMICOLON
    ;

arg: symbol+
    ;

symbol: bracketsymbol
    | symbol QUESTION
    | symbol PLUS
    | symbol STAR
    | CHEVRON WORD ICHEVRON
    | QUOTE WORD* QUOTE
    | WORD
    ;

bracketsymbol: OPENBRACKET symbol+ CLOSEBRACKET
    ;

otter: OTTER
    | WORD? OTTER
    ;

OTTER : '::=' ;
OPENBRACKET: '(';
CLOSEBRACKET: ')';
SPLITTER: '|' ;
CHEVRON: '<'  ;
ICHEVRON: '>' ; // inverted chevron
QUOTE: '"';
QUESTION: '?';
PLUS: '+';
STAR: '*';
SEMICOLON: ';';

INT : [0-9]+ ;
WORD: ~[ \t\n?"<>:|;()]+;
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
WS: [ \t\n\r\f]+ -> skip ;