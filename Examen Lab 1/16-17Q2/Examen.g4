grammar Examen;


program
    : (declaration)+
    ;

declaration
    : type ID (',' ID)* ';'
    ;

type
    : UNION '{' declaration+ '}'                #unionType
    | STRUCT '{' declaration+ '}'               #structType
    | typeDecl=(INT | DOUBLE | CHAR) POINTER?   #basicType
    ;


UNION:      'union';
STRUCT:     'struct';
INT:        'int';
DOUBLE:     'double';
CHAR:       'char';
POINTER:    '*';

ID: [a-zA-Z][a-zA-Z0-9]*;

WS : [ \t\n]+ -> skip ;
