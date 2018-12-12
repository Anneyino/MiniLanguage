#pragma once
#ifndef _VARIABLEMAP_H_
#define _VARIABLEMAP_H_

#include <string>
#include <vector>
#include <string>
#include <unordered_map>

#include "DiyValue.h"
using namespace std;

class VariableMap
{
private:
	unordered_map<string, DiyValue> IdentifiersMap;

public:
	VariableMap() = default;
	~VariableMap() = default;

	DiyValue getIdentifier(string identifier);
	void setIdentifier(pair<string, DiyValue> parameter);
	//void setIdentifier(pair<string, string> parameter);
};


#endif // !_VARIABLEMAP_H_

