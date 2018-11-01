#pragma once
#include "Operation.h"

class Operation6 :public Operation
{
public:
	Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse): Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); };
	~Operation6() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};

