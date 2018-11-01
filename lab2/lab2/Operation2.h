#pragma once
#include "Operation.h"

class Operation2 :public Operation
{
public:
	Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse): Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); };
	~Operation2() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};

