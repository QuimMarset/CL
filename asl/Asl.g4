//////////////////////////////////////////////////////////////////////
//
//    Asl - Another simple language (grammar)
//
//    Copyright (C) 2017  Universitat Politecnica de Catalunya
//
//    This library is free software; you can redistribute it and/or
//    modify it under the terms of the GNU General Public License
//    as published by the Free Software Foundation; either version 3
//    of the License, or (at your option) any later version.
//
//    This library is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    Affero General Public License for more details.
//
//    You should have received a copy of the GNU Affero General Public
//    License along with this library; if not, write to the Free Software
//    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//
//    contact: José Miguel Rivero (rivero@cs.upc.es)
//             Computer Science Department
//             Universitat Politecnica de Catalunya
//             despatx Omega.110 - Campus Nord UPC
//             08034 Barcelona.  SPAIN
//
//////////////////////////////////////////////////////////////////////

grammar Asl;

//////////////////////////////////////////////////
/// Parser Rules
//////////////////////////////////////////////////

// A program is a list of functions
program 
        : function+ EOF
        ;

function
        : FUNC ID '(' params? ')' (':' basicType declarations 
            statements returnInst | declarations statements)  ENDFUNC
        ;
params
        : ID ':' type (',' ID ':' type)*
        ;

declarations
        : variable_decl*
        ;

variable_decl
        : VAR ID (',' ID)* ':' type
        ;

type    
        : basicType
        | array
        ;

basicType
        : INT
        | FLOAT
        | CHAR
        | BOOL
        ;

functionCall
        : ident '(' (expr (',' expr)*)? ')'
        ;

statements
        : statement*
        ;

returnInst
        : RETURN (expr)? ';'
        ;

statement
        : left_expr ASSIGN expr ';'                             # assignStmt
        | IF expr THEN statements elseCond? ENDIF               # ifStmt
        | WHILE expr DO statements ENDWHILE                     # whileStmt
        | functionCall  ';'                                     # procCall
        | READ left_expr ';'                                    # readStmt
        | WRITE expr ';'                                        # writeExpr
        | WRITE STRING ';'                                      # writeString
        | returnInst                                            # returnStmt
        ;

expr    
        : op=(MINUS | PLUS) expr                                # unaryArithmeticExpr
        | expr op=(MUL | DIV | MOD) expr                        # arithmeticExpr
        | expr op=(PLUS | MINUS) expr                           # arithmeticExpr
        | expr op=(EQ | NEQ | GT | LT | LET | GET) expr         # relationalExpr
        | op=NOT expr                                           # unaryBooleanExpr
        | expr op=AND expr                                      # booleanExpr
        | expr op=OR expr                                       # booleanExpr
        | '(' expr ')'                                          # subExpr
        | value                                                 # valueExpr
        | functionCall                                          # procCallExpr
        | ident_refer                                           # identExpr
        ;

value
        : BOOLVAL
        | INTVAL
        | CHARVAL
        | FLOATVAL
        ;

left_expr
        : ident_refer
        ;

ident_refer
        : ident ('[' expr ']')?
        ;

ident
        : ID 
        ;

array   
        : ARRAY '[' INTVAL ']' OF basicType
        ;

//////////////////////////////////////////////////
/// Lexer Rules
//////////////////////////////////////////////////

ASSIGN    : '=' ;

EQ        : '==' ;
NEQ       : '!=' ;
GT        : '>' ;
LT        : '<' ;
GET       : '>=' ;
LET       : '<=' ;

AND       : 'and' ;
OR        : 'or' ;
NOT       : 'not' ;

PLUS      : '+' ;
MUL       : '*';
DIV       : '/';
MINUS     : '-';
MOD       : '%';

VAR       : 'var';

INT       : 'int';
FLOAT     : 'float';
CHAR      : 'char';
BOOL      : 'bool';

ARRAY     : 'array';
OF        : 'of';

IF        : 'if' ;
THEN      : 'then' ;
ELSE      : 'else' ;
ENDIF     : 'endif' ;

WHILE     : 'while';
DO        : 'do';
ENDWHILE  : 'endwhile';

FUNC      : 'func' ;
ENDFUNC   : 'endfunc' ;

READ      : 'read' ;
WRITE     : 'write' ;
RETURN    : 'return';

INTVAL    : ('0'..'9')+ ;
FLOATVAL  : ([0-9]+ ('.' [0-9]+)?) | '.' [0-9]+;
BOOLVAL   : 'true' | 'false';
CHARVAL   : '\'' (. | '\n' | '\t') '\'';

ID        : ('a'..'z'|'A'..'Z'|'_') ('a'..'z'|'A'..'Z'|'_'|'0'..'9')* ;

// Strings (in quotes) with escape sequences
STRING    : '"' ( ESC_SEQ | ~('\\'|'"') )* '"' ;

fragment
ESC_SEQ   : '\\' ('b'|'t'|'n'|'f'|'r'|'"'|'\''|'\\') ;

// Comments (inline C++-style)
COMMENT   : '//' ~('\n'|'\r')* '\r'? '\n' -> skip ;

// White spaces
WS        : (' '|'\t'|'\r'|'\n')+ -> skip ;
// Alternative description
// WS        : [ \t\r\n]+ -> skip ;
