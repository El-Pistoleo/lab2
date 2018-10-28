#pragma once
#include "Operation.h"

class Operation2 :public Operation
{
public:
	Operation2();
	Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation2();
	bool effectuerOperation(Dechet* dechet);
};

