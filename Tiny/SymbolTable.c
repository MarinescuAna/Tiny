#include "SymbolTable.h"
#include <malloc.h>
#include<string.h>
#include <stdio.h>



void addItem(Node* node, int i, char* functionName, char* functionType) {
	SymbolTable* iterator = (SymbolTable*)malloc(sizeof(SymbolTable));
	SymbolTable* newItem = (SymbolTable*)malloc(sizeof(SymbolTable));
	
	if (i == 1)
	{
		newItem->functionName = (char*)malloc(sizeof(char) * (strlen(functionName)+1));
		newItem->functionType = (char*)malloc(sizeof(char) * (strlen(functionType)+1));
		
		sprintf(newItem->functionName, "%s", functionName);
		sprintf(newItem->functionType, "%s", functionType);

		newItem->symbolScope = Global;
		newItem->varName = NULL;
		newItem->varType = NULL;
	}
	else {
		
		newItem->varName = (char*)malloc(sizeof(char) * (strlen(node->extraData)+1));
		newItem->varType = (char*)malloc(sizeof(char) * (strlen(node->links[0]->extraData)+1));
		
		sprintf(newItem->varName, "%s", node->extraData);
		sprintf(newItem->varType, "%s", node->links[0]->extraData);
		
		if (functionName != NULL) {
			newItem->functionName = (char*)malloc(sizeof(char) * (strlen(functionName)+1));
			newItem->functionType = (char*)malloc(sizeof(char) * (strlen(functionType)+1));
			
			sprintf(newItem->functionName, "%s", functionName);
			sprintf(newItem->functionType, "%s", functionType);
			
			newItem->symbolScope = Local;
		}
		else {
			newItem->symbolScope = Global;
			newItem->functionName = NULL;
			newItem->functionType = NULL;
		}
	}
	newItem->nextItem = NULL;

	if (table == NULL)
	{
		table = newItem;
	}
	else
	{
		iterator = table;
		while (iterator->nextItem != NULL)
		{
			iterator = iterator->nextItem;
		}
		iterator->nextItem = newItem;
	}
}

void createTable(Node* main, char* functionName , char* functionType) {
	int idx = 0;
	if (main)
	{
		if (!strcmp(main->type, "FormalParameter")) {
			addItem(main, 2, functionName, functionType);
		}
		else {
			if (!strcmp(main->type, "FunctionDefinition")) {
				if (functionName == NULL) {
					functionName =(char*) malloc(sizeof(char)*(strlen(main->extraData) + 1));
					functionType = (char*)malloc(sizeof(char) * (strlen(main->links[0]->extraData) + 1));
				}
				strcpy(functionName,main->extraData);
				strcpy(functionType, main->links[0]->extraData);
				addItem(main, 1, functionName, functionType);
			}
		}
		for (idx = 0; idx < main->numLinks && main->numLinks< MAX_EXTRA_DATA; idx++)
		{
			createTable(main->links[idx], functionName,functionType);
		}
	}
}

void printTable() {
	SymbolTable* iterator = table;
	while (iterator != NULL)
	{
		if (iterator->functionName != NULL && iterator->varName != NULL) {

			printf("[Var] %s(function -> type:%s) => %s : %s [local]\n",
				iterator->functionName,
				iterator->functionType,
				iterator->varName,
				iterator->varType);

		}
		else {
			if (iterator->functionName != NULL && iterator->varName == NULL) {
				printf("[Fnc] %s : %s\n",
					iterator->functionName,
					iterator->functionType);
			}
			else {
				if (iterator->functionName == NULL && iterator->varName != NULL) {
					printf("[Var] %s :%s [global]\n",
						iterator->varName,
						iterator->varType);
				}
			}
		}
		iterator = iterator->nextItem;
	}
}