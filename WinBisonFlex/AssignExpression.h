#pragma once
#ifndef _ASSIGNEXPRESSION_H_
#define _ASSIGNEXPRESSION_H_
#include <string>
#include <vector>
#include <string>
#include <unordered_map>

#include "DiyValue.h"
using namespace std;


struct assign_statement
{
	string identifier;
	DiyValue value;

	assign_statement() = default;
	assign_statement(string identifier, double double_value) :identifier(identifier) { this->value = DiyValue(); this->value.setValue(&double_value, DOUBLE); }
	assign_statement(string identifier, bool bool_value) :identifier(identifier) { this->value = DiyValue(); this->value.setValue(&bool_value, BOOL); }
	assign_statement(string identifier, string string_value) :identifier(identifier) { this->value = DiyValue(); this->value.setValue(&string_value, STRING); }
};

class AssignExpression
{
private:

public:
	AssignExpression() = default;
	~AssignExpression() = default;
	
	assign_statement* makeAssign(char* const identifier, double double_value);
	assign_statement* makeAssign(char* const identifier, bool bool_value);
	assign_statement* makeAssign(char* const identifier, char* const string_value);

};


#endif // !_ASSIGNEXPRESSION_H_

