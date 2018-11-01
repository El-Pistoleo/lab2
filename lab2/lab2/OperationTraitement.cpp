#include "OperationTraitement.h"



bool OperationTraitement::effectuerOperation(Dechet * dechet)
{
	return true;
}

void OperationTraitement::creerDechetTraiteRecyclable(Dechet * dechet)
{
	usineTraitement->creerDechetTraiteRecyclable(dechet);
}

void OperationTraitement::creerDechetTraiteNonRecyclable(Dechet * dechet)
{
	usineTraitement->creerDechetTraiteNonRecyclable(dechet);
}

void OperationTraitement::creerDechetTraiteCompostable(Dechet * dechet)
{
	usineTraitement->creerDechetTraiteCompostable(dechet);
}


