#include "MathExpression.h"

using namespace std;


Node * MathExpression::makeNode(const char * nodeType, double value)
{
	Node* node = new Node(nodeType, value);
	return node;
}

Node * MathExpression::makeNode(double value, Node * left, Node * right, string operand)
{
	Node* node = new Node(value, left, right, operand);
	return node;
}

Node * MathExpression::makeNode(double value, Node * right, string operand)
{
	Node* node = new Node(value, right, operand);
	return node;
}