#pragma once
#include "Operation.h"

class Operation5
{
public:
	Operation5();
	Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation5();
	bool effectuerOperation(Dechet* dechet);
};

