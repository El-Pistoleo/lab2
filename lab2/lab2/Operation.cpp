#include "Operation.h"


Operation::Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
	this->operationSuivanteTrue = operationSuivanteTrue;
	this->operationSuivanteFalse = operationSuivanteFalse;
	Compteur::ajouterConstructeur();
}


bool Operation::effectuerOperation(Dechet* dechet)
{
	return true;
}

Operation * Operation::getOperationSuivante(bool choix)
{
	if (choix) 
	{
		Operation * test = this->operationSuivanteTrue;
		return test;
	}

	return this->operationSuivanteFalse;
}

