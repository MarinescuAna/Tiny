#include "ast.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

Node* createDefaultNode(const char* nodeName, unsigned int linksCount)
{
	Node* retNode = (Node*)malloc(sizeof(Node));
	if (retNode)
	{
		memset(retNode, 0, sizeof(Node));
		if (nodeName)
		{
			strcpy(retNode->type, nodeName);
		}
		retNode->numLinks = linksCount;
		if (linksCount > 0)
		{
			retNode->links = (Node**)malloc(linksCount * sizeof(Node*));
		}
	}
	return retNode;
}
Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize)
{
	if (nodeToResize->numLinks == 0)
	{
		nodeToResize->links = (Node**)malloc(newSize * sizeof(Node*));
	}
	else
	{
		nodeToResize->links = (Node**)realloc(nodeToResize->links, newSize * sizeof(Node*));
	}
	nodeToResize->numLinks = newSize;
	return nodeToResize;
}
Node* createListNode(const char* listName, Node* firstLink)
{
	Node* retNode = createDefaultNode(listName, 1);
	retNode->links[0] = firstLink;
	return retNode;
}
void addLinkToList(Node* listNode, Node* linkToAdd)
{
	unsigned int numLinks = listNode->numLinks;
	resizeNodeLinks(listNode, numLinks + 1);
	listNode->links[numLinks] = linkToAdd;
}

Node* createProgramNode(Node* declaration)
{
	Node* retNode = createDefaultNode("Program", 1);
	if (retNode)
	{
		retNode->links[0] = declaration;
	}

	return retNode;

}
Node* createDeclarationNode(Node* varDeclaration)
{
	Node* retNode = createDefaultNode("Declaration", 1);
	if (retNode)
	{
		retNode->links[0] = varDeclaration;
	}
	return retNode;
}
Node* createFunctionDefinitionNode(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement)
{

	Node* retNode = createDefaultNode("FunctionDefinition", 3);

	if (retNode)
	{
		retNode->links[0] = typeSpecifier;
		retNode->links[1] = paramsList;
		retNode->links[2] = compoundStatement;
		if (functionName)
			strcpy(retNode->extraData, functionName);
	}

	return retNode;
}
Node* createBlock(Node* varDeclaration, Node* statement) {
	Node* retNode = createDefaultNode("Block", 2);
	if (varDeclaration == NULL) {
		retNode->links[0] = statement;
	}
	else {
		retNode->links[0] = varDeclaration;
		retNode->links[1] = statement;
	}

	return retNode;
}
Node* createVarDeclaration(Node* typeSpecifier, const char* varName)
{
	Node* retNode = createDefaultNode("FormalParameter", 2);

	if (retNode)
	{
		retNode->links[0] = typeSpecifier;
		if (varName)
			sprintf(retNode->extraData, "%s", varName);
		retNode->links[1] = createDefaultNode("IntValue", 0);
	}

	return retNode;

}
Node* createAssignStatement(Node* lexp, Node* exp) {
	Node* retNode = createDefaultNode("AssignStatement", 2);
	retNode->links[0] = lexp;
	retNode->links[1] = exp;
	return retNode;
}
Node* createReturnStatement(Node* exp) {
	Node* retNode = createDefaultNode("ReturnStatement", 2);
	retNode->links[0] = exp;
	return retNode;
}
Node* createFunctionCall(const char* functionName, Node* paramList) {
	Node* retNode = createDefaultNode("FunctionCall", 2);
	retNode->links[0] = paramList;
	if (functionName)
		sprintf(retNode->extraData, "%s", functionName);
	return retNode;
}
Node* createIOStatement(Node* exp, unsigned int type) {
	Node* retNode = NULL;
	if (type == 1) {
		retNode = createDefaultNode("WriteStatement", 2);
	}
	else {
		retNode = createDefaultNode("ReadStatement", 2);
	}
	retNode->links[0] = exp;
	return retNode;
}
Node* createLengthStatement(Node* lexp) {
	Node* retNode = createDefaultNode("Length", 2);
	retNode->links[0] = lexp;
	return retNode;
}
Node* createArrayDeclaration(Node* typeSpecifier, Node* exp) {
	Node* retNode = createDefaultNode("ArrayStatement", 2);
	retNode->links[0] = typeSpecifier;
	retNode->links[1] = exp;
	return retNode;
}
Node* createStatement(Node* statement, Node* statement_col) {
	Node* retNode = createDefaultNode("Statement", 2);
	retNode->links[0] = statement;
	retNode->links[1] = statement_col;
	return retNode;
}
Node* createIfStatement(Node* exp, Node* thenStatement, Node* elseStatement)
{
	Node* retNode = createDefaultNode("IfStatement", 2);
	retNode->links[0] = exp;
	retNode->links[1] = thenStatement;
	retNode->links[2] = elseStatement;
	return retNode;
}
Node* createAccessStatement(Node* lexp, Node* exp)
{
	Node* retNode = createDefaultNode("AccessStatement", 2);
	retNode->links[0] = lexp;
	retNode->links[1] = exp;
	return retNode;
}
Node* createWhileStatement(Node* exp, Node* Statement) {
	Node* retNode = createDefaultNode("WhileStatement", 2);
	retNode->links[0] = exp;
	retNode->links[1] = Statement;
	return retNode;
}
Node* createTypeSpecifier(const char* typeName)
{
	Node* retVal = createDefaultNode("TypeSpecifier", 0);
	if (typeName)
		sprintf(retVal->extraData, "%s", typeName);
	return retVal;
}
Node* createOperation(Node* exp, Node* binop, Node* exp2) {
	Node* retNode = createDefaultNode("Operation", 2);
	retNode->links[0] = exp;
	retNode->links[1] = binop;
	if (exp2 != NULL) {
		retNode->links[2] = exp2;
	}
	return retNode;

}
Node* createOperator(const char* operatorName)
{
	Node* retVal = createDefaultNode("Operator", 2);
	if (operatorName)
		sprintf(retVal->extraData, "%s", operatorName);
	return retVal;
}

void printAst(Node* ast, int level)
{
	int idx = 0;
	if (ast)
	{
		for (idx = 0; idx < level; idx++)
		{
			printf(" ");
		}
		if (ast->type)
		{
			printf("%s ", ast->type);
		}
		if (ast->numLinks)
		{
			printf(" - %d - %s\n", ast->numLinks, ast->extraData);
		}
		else
		{
			printf(" - %s\n", ast->extraData);
		}
		for (idx = 0; idx < ast->numLinks; idx++)
		{

			printAst(ast->links[idx], level + 1);
		}
	}
}