#pragma once
#ifndef _MATHEXPRESSION_H_
#define _MATHEXPRESSION_H_
#include <string>
#include <vector>
#include <string>
#include <unordered_map>


using namespace std;

struct Node
{
	string nodeType;
	Node* left = nullptr;
	Node* right = nullptr;
	double value = 0;

	Node(const char* nodeType, double value) :nodeType(nodeType), value(value) {}
	Node(double value, Node* left, Node* right, string nodeType) :value(value), left(left), right(right), nodeType(nodeType) {}
	Node(double value, Node* right, string nodeType) :value(value), right(right), nodeType(nodeType) {}
	~Node() = default;
	//~Node() {
	//	if (left)
	//	{
	//		delete left;
	//		left = nullptr;
	//	}
	//	if (right)
	//	{
	//		delete right;
	//		right = nullptr;
	//	}
	//	delete this;
	//}
};

class MathExpression 
{
public:
	MathExpression() = default;
	~MathExpression() = default;

	Node* makeNode(const char*, double value);
	Node* makeNode(double value, Node* left, Node* right, string operand);
	Node* makeNode(double value, Node* right, string operand);
};


#endif // !MathExpression.h


