#include "Operation3.h"



Operation3::Operation3(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	Compteur::ajouterConstructeur();

	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}


Operation3::~Operation3()
{
	Compteur::ajouterDestructeur();
}

bool Operation3::effectuerOperation(Dechet* dechet)
{

	if (dechet->getMateriel() == 0 || dechet->getMateriel() == 7)
		return true;
	else
		return false;
}