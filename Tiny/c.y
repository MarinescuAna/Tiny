
%{
#include <stdio.h>

int yyerror(char * s);
extern int yylex(void);
%}
%token INT 
%token CHAR
%token LBRACK  
%token NAME
%token LPAR 
%token COMMA
%token QCHAR 
%token NUMBER 
%token TIMES 
%token DIVIDE 
%token PLUS 
%token MINUS 
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
%token LENGTH 
%token WRITE 
%token READ 
%token WHILE 
%token IF 
%token ELSE 
%token RBRACE 
%token SEMICOLON 

%start program
%%


program : declaration										
		| program declaration								
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
		
statements : statement statement_semicol					
		   |												
		   ;

statement_semicol : statement_semicol statement				
				  | 										
				  ;

statement : lexp ASSIGN exp SEMICOLON						
		  | RETURN exp SEMICOLON							
		  | NAME LPAR pars RPAR								
		  | WRITE exp SEMICOLON								
		  | READ lexp SEMICOLON								
		  | IF LPAR exp RPAR statement						
		  | IF LPAR exp RPAR statement ELSE statement		
		  | WHILE LPAR exp RPAR statement					
		  | block											
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
	  
binop : PLUS												
	  | MINUS												
	  | TIMES												
	  | DIVIDE												
	  | EQUAL												
	  | NEQUAL												
	  | GREATER												
	  | LESS												
	  ;
		
unop : NOT													
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