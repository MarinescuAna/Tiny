
%{
#include <stdio.h>

int yyerror(char * s);
extern int yylex(void);
%}
%token TIMES 
%token DIVIDE 
%token PLUS 
%token MINUS 
%token LPAR 
%token LBRACK 
%token COMMA 
%token RPAR 
%token RBRACK 
%token LBRACE 
%token ASSIGN 
%token LESS 
%token EQUAL 
%token GREATER 
%token NEQUAL 
%token NOT 
%token RETURN 
%token NAME 
%token NUMBER 
%token QCHAR 
%token LENGTH 
%token INT 
%token CHAR 
%token WRITE 
%token READ 
%token WHILE 
%token IF 
%token ELSE 
%token RBRACE 
%token SEMICOLON 


%right NAME SEMICOLON
%left GREATER LESS EQUAL NEQUAL
%left PLUS MINUS 
%left TIMES DIVIDE
%left LBRACK RPAR RBRACE LBRACE LPAR RBRACK
%left COMMA
%nonassoc IF ELSE

%start program
%%

program : program declaration
		| declaration
		;
declaration : fun_declaration
			| var_declaration
			;
fun_declaration : type NAME LPAR formal_pars RPAR block
				;
formal_pars : formal_par 
			| formal_pars COMMA formal_par 
			| 
			;
formal_par : type NAME
		   ;
block : LBRACE var_declarations statements RBRACE
	  | LBRACE statements RBRACE
	  ;
var_declarations: var_declaration
				| var_declarations var_declaration
				;
var_declaration : type NAME SEMICOLON
				;
type : INT
	 | CHAR
	 | type LBRACK exp RBRACK 
	 ;
statements : statement 
		   | statements SEMICOLON statement
		   ;
statement : IF LPAR exp RPAR statement
		  | IF LPAR exp RPAR statement ELSE statement
		  | WHILE LPAR exp RPAR statement
		  | lexp ASSIGN exp
		  | RETURN exp
		  | NAME LPAR pars RPAR 
		  | block
		  | WRITE exp
		  | READ lexp
		  ;
lexp : var
	 | lexp LBRACK exp RBRACK 
	 ;
exp : lexp
	| exp binop exp
	| unop exp
	| LPAR exp RPAR
	| NUMBER
	| NAME LPAR pars RPAR 
	| QCHAR
	| LENGTH lexp 
	;
binop : MINUS
	  | PLUS
	  | TIMES
	  | DIVIDE
	  | EQUAL
	  | NEQUAL
	  | GREATER
	  | LESS
	  ;
unop : MINUS
	 | NOT
	 ;
pars : exp 
	 | pars COMMA exp
	 ;
var : NAME
	;


%%

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}