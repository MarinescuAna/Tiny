

#include <stdio.h>
#include "symbols.h"

extern FILE* yyin;
extern int yylex(void);
const char* lexUnits[] = { "END",
							"RETURN",
							"RBRACE",
							"SEMICOLON",
							"TIMES",
							"WRITE",
							"NOT",
							"IF",
							"LPAR",
							"LBRACK",
							"COMMA",
							"DIVIDE",
							"READ",
							"LENGTH",
							"ELSE",
							"RPAR",
							"RBRACK",
							"PLUS",
							"EQUAL",
							"GREATER",
							"WHI1LE",
							"NEQUAL",
							"LBRACE",
							"ASSIGN",
							"MINUS",
							"CHAR",
							"LESS",
							"NAME",
							"NUMBER",
							"QCHAR",
							"INT"
};

int main() {

	int tokenValue = 0;
	yyin = fopen("Text.txt", "rt");

	if (yyin == NULL)
		printf("Fisierul nu poate fi deschis");

	while ((tokenValue = yylex()) != END) {
		printf(" -> token = %s(%d)\n", lexUnits[tokenValue],tokenValue);
	}

	return 0;
}