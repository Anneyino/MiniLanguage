#include "AssignExpression.h"

assign_statement * AssignExpression::makeAssign(char* const identifier, double double_value)
{
	assign_statement* pState = new assign_statement(identifier, double_value);
	return pState;
}

assign_statement * AssignExpression::makeAssign(char* const identifier, bool bool_value)
{
	assign_statement* pState = new assign_statement(identifier, bool_value);
	return pState;
}

assign_statement * AssignExpression::makeAssign(char* const identifier, char* const string_value)
{
	assign_statement* pState = new assign_statement(identifier, string_value);
	return pState;
}


