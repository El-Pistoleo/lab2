#pragma once
#include "Operation.h"

class Operation4 :public Operation
{
public:
	Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse):Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); };
	~Operation4() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};

