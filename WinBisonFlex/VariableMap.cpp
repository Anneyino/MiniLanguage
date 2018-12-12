#include "VariableMap.h"
#include <iostream>


DiyValue VariableMap::getIdentifier(string identifier)
{
	auto got = IdentifiersMap.find(identifier);
	if (got == IdentifiersMap.end())
	{
		printf("not found identifier\n");
		return DiyValue(BAD);
	}
	else
	{
		return got->second;
	}
}

void VariableMap::setIdentifier(pair<string, DiyValue> parameter)
{
	IdentifiersMap.erase(parameter.first);
	IdentifiersMap.insert(parameter);
}

//void VariableMap::setIdentifier(pair<string, string> parameter)
//{
//	stringIdentifiers.erase(parameter.first);
//	stringIdentifiers.insert(parameter);
//}
