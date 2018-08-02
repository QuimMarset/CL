grammar Examen;

identificador
    : ident ('[' index ']')*
    ;

index
    : INT               #intIndex
    | identificador     #identIndex
    ;

ident
    : ID
    ;

INT: [0-9]+;    
ID: [a-zA-Z]+;


WS : [ \t\n]+ -> skip ;
