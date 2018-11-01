#pragma once
#include "Operation.h"

class Operation1 :public Operation
{
public:

	Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); };
	~Operation1() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};

