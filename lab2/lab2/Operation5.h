#pragma once
#include "Operation.h"

class Operation5 :public Operation
{
public:
	Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse): Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); };
	~Operation5() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};

