#ifndef __SYMBOLTABLE_H
#define __SYMBOLTABLE_H

#include "ast.h"

enum IdentifierScope { Local = 0, Global };
typedef enum IdentifierScope Identifier;

typedef struct SymbolTable {

	char* varName;
	char* varType;
	Identifier symbolScope;
	char* functionName;
	char* functionType;
	struct SymbolTable* nextItem;
}SymbolTable;

SymbolTable* table;

void addItem(Node* node, int i, char* functionName, char* functionType);
void createTable(Node* main, char* functionName, char* functionType);
void printTable();
#endif
