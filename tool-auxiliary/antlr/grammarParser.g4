// Grammar for parsing grammars
grammar grammarParser;
gram: component
    | component*
    ;
    
component: symbol otter symbol
    | symbol otter arg (SPLITTER arg)*
    ;

arg: symbol+
    ;

symbol: symbol QUESTION
    | symbol PLUS
    | symbol STAR
    | CHEVRON WORD ICHEVRON
    | QUOTE WORD* QUOTE
    | WORD
    ;

otter: OTTER
    | LOTTER
    | ROTTER
    ;

OTTER : '::=' ;
LOTTER: 'L::=';
ROTTER: 'R::=';
SPLITTER: '|' ;
CHEVRON: '<'  ;
ICHEVRON: '>' ; // inverted chevron
QUOTE: '"';
QUESTION: '?';
PLUS: '+';
STAR: '*';

INT : [0-9]+ ;
WORD: ~[ \t\n?"<>:|;]+;
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
WS: [ \t\n\r\f]+ -> skip ;
