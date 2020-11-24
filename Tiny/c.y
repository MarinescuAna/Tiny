
%{
#include <stdio.h>
#include "ast.h"

Node* astRoot = NULL;
int yyerror(char * s);
extern int yylex(void);
%}
%union{
	
	Node* node;
	char* strings;
	int intVal;
}
%token INT 
%token CHAR
%token LBRACK  
%token <strings> NAME
%token LPAR 
%token COMMA
%token QCHAR 
%token <intVal> NUMBER 
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

%type <node> program
%type <node> declaration
%type <node> fun_declaration
%type <node> formal_pars
%type <node> formal_par
%type <node> block
%type <node> var_declarations
%type <node> var_declaration
%type <node> type
%type <node> statements
%type <node> statement_semicol
%type <node> statement
%type <node> lexp
%type <node> exp
%type <node> binop
%type <node> unop
%type <node> pars
%type <node> var

%start program
%%

program : declaration										{ $$ = createProgramNode($1); astRoot = $$;} 
		| program declaration								{ $$ = $1; addLinkToList($$, $2); }
        ;

declaration : fun_declaration								{ $$ = createDeclarationNode($1);}
            | var_declaration								{ $$ = createDeclarationNode($1);}
            ;

fun_declaration : type NAME LPAR formal_pars RPAR block     { $$ = createFunctionDefinitionNode($1, $2, $4, $6);  }
                ;

formal_pars : formal_par									{ $$ = createListNode("ParametersList", $1);}
            | formal_pars COMMA formal_par					{ $$ = $1; addLinkToList($$, $3); }
            | 												{ $$ = createListNode("", NULL); }
            ;

formal_par : type NAME										{ $$ = createVarDeclaration($1, $2);}
           ;

block : LBRACE var_declarations statements RBRACE			{ $$ = createBlock($2, $3);}
      | LBRACE statements RBRACE							{ $$ = createBlock(NULL, $2);}
      ;

var_declarations: var_declaration							{ $$ = createListNode("VarDeclarations", $1);}
                | var_declarations var_declaration			{ $$ = $1; addLinkToList($$, $2); }
                ;

var_declaration : type NAME SEMICOLON						{ $$ = createVarDeclaration($1, $2);}
                ;
type : INT													{ $$ = createTypeSpecifier("INT"); }
     | CHAR													{ $$ = createTypeSpecifier("CHAR");	}
     | type LBRACK exp RBRACK								{ $$ = createArrayDeclaration($1,$3); }
     ;
		
statements : statement statement_semicol					{ $$ = createStatement($1, $2); }
		   |												{ $$ = createListNode("", NULL); }
		   ;

statement_semicol : statement_semicol statement				{ $$ = createListNode("Statement", $2); }
				  | 										{ $$ = createListNode("", NULL); }
				  ;

statement : lexp ASSIGN exp SEMICOLON						{ $$ = createAssignStatement($1,$3); }
		  | RETURN exp SEMICOLON							{ $$ = createReturnStatement($2); }
		  | NAME LPAR pars RPAR								{ $$ = createFunctionCall($1,$3); }
		  | WRITE exp SEMICOLON								{ $$ = createIOStatement($2,1); }
		  | READ lexp SEMICOLON								{ $$ = createIOStatement($2,2); }
		  | IF LPAR exp RPAR statement						{ $$ = createIfStatement($3,$5,NULL); }
		  | IF LPAR exp RPAR statement ELSE statement		{ $$ = createIfStatement($3,$5,$7); }
		  | WHILE LPAR exp RPAR statement					{ $$ = createWhileStatement($3,$5); }
		  | block											{ $$ = createListNode("Block", $1); }
		  ;

lexp : var													{ $$ = createListNode("VarName", $1); }
	 | lexp LBRACK exp RBRACK								{ $$ = createAccessStatement($1, $3); }
	 ;
	   
exp : lexp													{ $$ = createListNode("lexp", $1); }
	| exp binop exp											{ $$ = createOperation($1, $2, $3); }
	| unop exp												{ $$ = createOperation($1, $2, NULL); }
	| LPAR exp RPAR											{ $$ = createListNode("Expression", $2); }
	| NUMBER												{ $$ = createTypeSpecifier("NUMBER"); }
	| NAME LPAR pars RPAR									{ $$ = createFunctionCall($1,$3); }   
	| QCHAR													{ $$ = createTypeSpecifier("QCHAR"); }
	| LENGTH lexp											{ $$ = createLengthStatement($2); }
	;
	  
binop : PLUS												{ $$ = createOperator("PLUS"); }
	  | MINUS												{ $$ = createOperator("MINUS"); }
	  | TIMES												{ $$ = createOperator("TIMES"); }
	  | DIVIDE												{ $$ = createOperator("DIVIDE"); }
	  | EQUAL												{ $$ = createOperator("EQUAL"); }
	  | NEQUAL												{ $$ = createOperator("NEQUAL"); }
	  | GREATER												{ $$ = createOperator("GREATER"); }
	  | LESS												{ $$ = createOperator("LESS"); }
	  ;
		
unop : NOT													{ $$ = createOperator("NOT"); }
	 ;
	   
pars : exp													{ $$ = createListNode("Expression", $1);}
	 | pars COMMA exp										{ $$ = $1; addLinkToList($$, $3); }
	 ;			

var : NAME													{ $$ = createTypeSpecifier("NAME"); }
	;


%%

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}