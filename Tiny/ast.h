#ifndef __AST_H
#define __AST_H

#define MAX_NODE_TYPE 50
#define MAX_EXTRA_DATA 50

typedef struct node {
	char type[MAX_NODE_TYPE];
	int numLinks;
	char extraData[MAX_EXTRA_DATA];
	struct node** links;
}Node;

Node* createTypeSpecifier(const char* typeName);
Node* createProgramNode(Node* declaration);
Node* createDeclarationNode(Node* varDeclaration);
Node* createFunctionDefinitionNode(Node* typeSpecifier, const char* functionName, Node* paramsList, Node* compoundStatement);
Node* createVarDeclaration(Node* typeSpecifier, const char* varName); 
Node* createArrayDeclaration(Node* typeSpecifier, Node* exp);
Node* createAssignStatement(Node* lexp, Node* exp);
Node* createReturnStatement(Node* exp);
Node* createStatement(Node* statement, Node* statement_col);
Node* createFunctionCall(const char* functionName,Node* paramList);
Node* createIOStatement(Node* exp,unsigned int type);
Node* createIfStatement( Node* exp, Node* thenStatement, Node* elseStatement);
Node* createWhileStatement(Node* exp, Node* Statement);
Node* createAccessStatement(Node* lexp, Node* exp);
Node* createLengthStatement(Node* lexp);
Node* createOperator(const char* operatorName);
Node* createOperation(Node* exp, Node* binop, Node* exp2 );
Node* createBlock(Node* varDeclaration, Node* statement);
Node* createDefaultNode(const char* nodeName, unsigned int linksCount);
Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize);
Node* createListNode(const char* listName, Node* firstLink);
void addLinkToList(Node* listNode, Node* linkToAdd);
void printAst(Node* ast, int level);
#endif
