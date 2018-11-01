#pragma once
#include "Operation.h"

class Operation3 :public Operation
{
public:
	
	Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse): Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); };
	~Operation3() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};

