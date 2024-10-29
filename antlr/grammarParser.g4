// Grammar for parsing grammars
grammar grammarParser;
gram: component
    | component*
    ;
    
component: symbol OTTER symbol
    | symbol OTTER arg (SPLITTER arg)*
    ;

arg: symbol+
    ;

symbol: symbol QUESTION
    | CHEVRON WORD ICHEVRON
    | QUOTE WORD* QUOTE
    | WORD
    ;

OTTER : '::=' ;
SPLITTER: '|' ;
CHEVRON: '<'  ;
ICHEVRON: '>' ; // inverted chevron
QUOTE: '"';
QUESTION: '?';

INT : [0-9]+ ;
WORD: ~[ \t\n?"<>:|;]+;
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
WS: [ \t\n\r\f]+ -> skip ;
