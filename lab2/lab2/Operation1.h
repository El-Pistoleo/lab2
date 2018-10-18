#pragma once
#include "Operation.h"

class Operation1
{
public:
	Operation1();
	Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation1();
	bool effectuerOperation(Dechet* dechet);
};

