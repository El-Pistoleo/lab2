#include "SequenceOperations.h"



SequenceOperations::SequenceOperations()
{
	Compteur::ajouterConstructeur();
}


SequenceOperations::~SequenceOperations()
{
	Compteur::ajouterDestructeur();
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	return NULL;
}

void SequenceOperations::definirOperationDemarage(Operation* operation)
{
	operationDemarage = operation;
}

Operation* SequenceOperations::getOperationDemarage()
{
	return operationDemarage;
}