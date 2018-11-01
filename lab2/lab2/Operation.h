#pragma once
#include "Dechet.h"

class Operation
{
public:
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	virtual ~Operation() { Compteur::ajouterDestructeur(); };
	virtual bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);

protected:
	Operation() { Compteur::ajouterConstructeur(); };

private:
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;
};

