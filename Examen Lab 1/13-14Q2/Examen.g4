grammar Examen;

start
    : graph+
    ;

graph
    : GRAPH definition (body ';')* ENDGRAPH
    ;

definition
    : ID '(' params? ')'
    ;

params
    : ID (',' ID)*
    ;

body
    : definition
    | path
    ;

path
    : ID ('>' ID)+
    ;


GRAPH       : 'graph';
ENDGRAPH    : 'endgraph';
ID          : [a-zA-Z][a-zA-Z0-9]*;


WS : [ \t\n]+ -> skip ;
