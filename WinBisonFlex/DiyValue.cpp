#include "DiyValue.h"

void DiyValue::getValue(void* Target)
{
	switch (this->type)
	{
	case INT:
		*(int*)Target = IntValue;
		break;
	case FLOAT:
		*(float*)Target = FloatValue;
		break;
	case DOUBLE:
		*(double*)Target = DoubleValue;
		break;
	case BOOL:
		*(bool*)Target = BoolValue;
		break;
	case STRING:
		*(string*)Target = StringValue;
		break;
	default:
		break;
	}

}

void DiyValue::setValue(void * Value, MYTYPE type)
{
	switch (type)
	{
	case INT:
		IntValue = *(int *)Value;
		this->type = type;
		break;
	case FLOAT:
		FloatValue = *(float *)Value;
		this->type = type;
		break;
	case DOUBLE:
		DoubleValue = *(double*)Value;
		this->type = type;
		break;
	case BOOL:
		BoolValue = *(bool*)Value;
		this->type = type;
		break;
	case STRING:
		StringValue = *(string*)Value;
		this->type = type;
		break;
	default:
		break;
	}
}
