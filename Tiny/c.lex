D			[0-9]
L			[a-zA-Z]
H			[a-fA-F0-9]
U			[_]

%{
#include <stdio.h>
#include "ast.h"
#include "c.tab.h"

void count();
%}

%%
"int"		{ count(); return(INT); }
"return"	{ count(); return(RETURN); }
"}"			{ count(); return(RBRACE); }
";"			{ count(); return(SEMICOLON); }
"*"			{ count(); return(TIMES); }
"write"		{ count(); return(WRITE); }
"!"		    { count(); return(NOT); }
"if"		{ count(); return(IF); }
"("			{ count(); return(LPAR); }
"["			{ count(); return(LBRACK); }
","			{ count(); return(COMMA); }
"/"			{ count(); return(DIVIDE); }
"read"		{ count(); return(READ); }
"length"	{ count(); return(LENGTH); }
"else"		{ count(); return(ELSE); }
")"			{ count(); return(RPAR); }
"]"			{ count(); return(RBRACK); }
"+"		    { count(); return(PLUS); }
"=="		{ count(); return(EQUAL); }
">"			{ count(); return(GREATER); }
"while"		{ count(); return(WHILE); }
"!="		{ count(); return(NEQUAL); }
"{"			{ count(); return(LBRACE); }
"="			{ count(); return(ASSIGN); }
"-"			{ count(); return(MINUS); }
"char"		{ count(); return(CHAR); }
"<"			{ count(); return(LESS); }

{L}({L}|{D}|{U})*  			{ count(); yylval.strings = strdup(yytext);  return(NAME);}
{D}+			  			{ count(); yylval.intVal = atoi(yytext); return(NUMBER);}
\'.\'		  	  			{ count(); return(QCHAR); }

\\ 			{ count(); comment();}

[\t\v\n]	{ count(); }
.			{ }

%%


yywrap()
{
	return(1);
}


comment()
{
	char c;
	while ((c = input()) != '\n' && c != 0)
		putchar(c);
	printf("\n");
}

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


