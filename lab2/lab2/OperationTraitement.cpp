#include "OperationTraitement.h"



OperationTraitement::OperationTraitement()
{
}


OperationTraitement::~OperationTraitement()
{
}

void OperationTraitement::creerDechetTraiteRecyclable(Dechet * dechet)
{
	usineTraitement->creerDechetTraiteRecyclable(dechet);
}


