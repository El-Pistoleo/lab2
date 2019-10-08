#include "Operation6.h"



Operation6::Operation6(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	Compteur::ajouterConstructeur();
	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}


Operation6::~Operation6()
{
	Compteur::ajouterDestructeur();
}

bool Operation6::effectuerOperation(Dechet* dechet)
{
	if (dechet->getType() == 0 || dechet->getType() == 6)
		return true;
	else
		return false;
}