#include "ScannerParserCL.h"

#include "analyzer.h"
#include "scanner.h"
#include <iomanip>



ScannerParserCL::ScannerParserCL()
{
	mathHead = nullptr;
	grammarHead = nullptr;
	pMath = new MathExpression();
	pAssign = new AssignExpression();
	pVariableMap = new VariableMap();
}


ScannerParserCL::~ScannerParserCL()
{
	delete grammarHead;
	delete mathHead;
	delete pAssign;
	delete pMath;
	delete pVariableMap;

	grammarHead = nullptr;
	mathHead = nullptr;
	pAssign = nullptr;
	pMath = nullptr;
	pVariableMap = nullptr;
}

Node * ScannerParserCL::getTreeHead()
{
	return this->mathHead;
}

TemplateNode * ScannerParserCL::getGrammarHead()
{
	return this->grammarHead;
}

MathExpression * ScannerParserCL::getPMath()
{
	return pMath;
}

AssignExpression * ScannerParserCL::getPAssign()
{
	return pAssign;
}

VariableMap * ScannerParserCL::getPVariableMap()
{
	return pVariableMap;
}

void ScannerParserCL::SayHello(char* const msg) const
{
	std::cout << "Msg from ScannerParserCL: " << msg << std::endl;
}
int ScannerParserCL::RunParser(const std::string& filename)
{
	int rlt;

	try
	{
		yyscan_t scanner;

		FILE *in = nullptr;  errno_t er;

		if (filename != "")
			er = fopen_s(&in, filename.c_str(), "r");
		else
			in = stdin;

		yylex_init_extra(this, &scanner);
		yyset_in(in, scanner);

		rlt = yyparse(scanner, this);

		yylex_destroy(scanner);

		if (in != nullptr)
		{
			fclose(in);
			in = nullptr;
		}
	}
	catch (std::exception&)
	{

	}

	return rlt;
}


void ScannerParserCL::copy_cstr(char** pTarget, const char* pSource)
{
	size_t size = strlen(pSource) + 1;
	*pTarget = new char[size];
	strcpy_s(*pTarget, size, pSource);
}

void ScannerParserCL::copy_int(int& Target, const char* pSource)
{
	Target = atoi(pSource);
}

void ScannerParserCL::copy_double(double& Target, const char* pSource)
{
	Target = atof(pSource);
}

void ScannerParserCL::copy_string(char** pTarget, const char* pSource)
{
	size_t size = strlen(pSource) + 1;

	*pTarget = new char[size];

	strcpy_s(*pTarget, size, pSource);
}


void ScannerParserCL::makeTreeHead(Node * node)
{
	mathHead = node;
}

void ScannerParserCL::printTree(Node * pNode, const string& prefix)
{
	if (pNode != nullptr)
	{
		bool hasLeft = pNode->left != nullptr;
		bool hasRight = pNode->right != nullptr;

		if (!hasLeft && !hasRight)
		{
			return;
		}
		cout << prefix;
		cout << ((hasLeft  && hasRight) ? "©À©¤©¤ " : "");
		cout << ((!hasLeft && hasRight) ? "©¸©¤©¤ " : "");

		if (hasRight)
		{
			bool printStrand = (hasLeft && hasRight && (pNode->right->right != nullptr || pNode->right->left != nullptr));
			string newPrefix = prefix + (printStrand ? "©¦   " : "    ");
			cout << pNode->right->nodeType << "=" << pNode->right->value << endl;
			printTree(pNode->right, newPrefix);
		}

		if (hasLeft)
		{
			cout << (hasRight ? prefix : "") << "©¸©¤©¤ " << pNode->left->nodeType << "=" << pNode->left->value << endl;
			printTree(pNode->left, prefix + "    ");
		}
	}
	else {
		return;
	}
}

void ScannerParserCL::storeAssign(assign_statement * pState)
{
	if (pState == nullptr)
	{
		printf("get pState = nullptr error \n");
		return;
	}
	pVariableMap->setIdentifier(pair<string, DiyValue>(pState->identifier, pState->value));

}

void ScannerParserCL::printIdentifier(string identifier)
{
	DiyValue result = pVariableMap->getIdentifier(identifier);
	switch (result.type)
	{
	case INT:
	{
		int int_value;
		result.getValue(&int_value);
		cout << "Identifier: " << identifier << "=" << int_value << endl;
		break;
	}
	case FLOAT:
	{
		float float_value;
		result.getValue(&float_value);
		cout << "Identifier: " << identifier << "=" << float_value << endl;
		break;
	}
	case DOUBLE:
	{
		double double_value;
		result.getValue(&double_value);
		cout << "Identifier: " << identifier << "=" << double_value << endl;
		break;
	}
	case BOOL:
	{
		bool bool_value;
		result.getValue(&bool_value);
		cout << "Identifier: " << identifier << "=" << bool_value << endl;
		break;
	}
	case STRING:
	{
		string string_value;
		result.getValue(&string_value);
		cout << "Identifier: " << identifier << "=" << string_value << endl;
		break;
	}
	default:
		break;
	}
}

