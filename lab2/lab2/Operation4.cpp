#include "Operation4.h"



Operation4::Operation4(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	Compteur::ajouterConstructeur();

	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}


Operation4::~Operation4()
{
	Compteur::ajouterDestructeur();
}

bool Operation4::effectuerOperation(Dechet* dechet)
{

	if (dechet->getMateriel() == 5 && dechet->getCouleur() == "brun")
		return true;
	else
		return false;
}