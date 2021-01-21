#include <stdio.h>
#include "ast.h"
#include "SymbolTable.h"

extern int yyparse(void);
extern FILE* yyin;
extern int yydebug;
extern Node* astRoot;
SymbolTable* symbolTable;

int main() {

	yydebug = 1;
	yyin = fopen("Text.txt", "rt");

	if (yyin != NULL)
	{
		int result = yyparse();
		switch (result)
		{
		case 0:
			printf("\nParse successfull.\n");
			break;

		case 1:
			printf("\nInvalid input encountered\n");
			break;

		case 2:
			printf("\nOut of memory\n");
			break;

		default:
			break;
		}
		printf("\n\n");
		printAst(astRoot, 0);
		printf("\n\n");
		createTable(astRoot, symbolTable,NULL,NULL);
		printTable(symbolTable);
		fclose(yyin);
	}
	else
	{
		printf("\nFisier inexistent");
	}


	return 0;
}