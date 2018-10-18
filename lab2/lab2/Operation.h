#pragma once
#include "Dechet.h"

class Operation
{
public:
	Operation();
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation();
	bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);

protected:
	Operation();

private:
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;

};

