#pragma once
#ifndef _DIYVALUE_H_
#define _DIYVALUE_H_

#include <string>

using namespace std;
enum MYTYPE
{
	BAD,
	INT,
	FLOAT,
	DOUBLE,
	BOOL,
	STRING,
};

class DiyValue 
{
private:
	int IntValue;
	float FloatValue;
	double DoubleValue;
	bool BoolValue;
	string StringValue;
public:
	MYTYPE type;
	DiyValue() = default;
	DiyValue(MYTYPE type) : type(type) {};
	~DiyValue() = default;

	void getValue(void* Target);
	void setValue(void* Value, MYTYPE type);
};


#endif
