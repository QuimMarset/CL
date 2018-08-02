

grammar json;

// The grammar start symbol expected by main.cpp is 'json'
// If you change it, adapt main.cpp accordingly.
json : object;

object
	: ATOM 								# string
	| '{' (pair (',' pair)*)? '}'		# dict
	| '[' (object (',' object)*)? ']'	# list
	;

pair
	: ATOM ':' object
	;

/// complete the grammar rules to parse json files
/// ...
/// ...



/// strings in double quotes are json tokens (apart from brackets, commas, colons, etc.)

ATOM : '"' ~["]* '"';


/// skip white spaces
WS        : [ \t\r\n]+ -> skip ;

