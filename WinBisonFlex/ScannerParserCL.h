#pragma once

#include "MathExpression.h"
#include "AssignExpression.h"
#include "VariableMap.h"
#include "TemplateNode.h"

using namespace std;


const int INF = 0x3f3f3f3f;
static int lineNumber = 1;
static bool IsProgramCorrect = true;

class ScannerParserCL
{
private:
	TemplateNode* grammarHead;
	Node* mathHead;
	MathExpression* pMath;
	AssignExpression* pAssign;
	VariableMap* pVariableMap;

public:
	ScannerParserCL();
	~ScannerParserCL();
	Node* getTreeHead();
	TemplateNode* getGrammarHead();
	MathExpression* getPMath();
	AssignExpression* getPAssign();
	VariableMap* getPVariableMap();

	int RunParser(const std::string& filename = "");

	void SayHello(char* const msg) const;
	void copy_cstr(char** pTarget, const char* pSource);
	void copy_int(int& Target, const char* pSource);
	void copy_double(double& Target, const char* pSource);
	void copy_string(char** pTarget, const char* pSource);

	void makeTreeHead(Node* node);
	void printTree(Node* pNode, const string& prefix="");
	void printIdentifier(string identifier);
	void storeAssign(assign_statement * pState);
};



