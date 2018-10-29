#include "SequenceOperations.h"



SequenceOperations::SequenceOperations()
{
}


SequenceOperations::~SequenceOperations()
{
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	listeOperations.push_back(operation);
}

void SequenceOperations::definirOperationDemarrage(Operation* operation)
{
	if (operation == listeOperations.front())
	{
		operationDemarrage = operation;
	}
	else
		operationDemarrage = listeOperations.front();
	
}

Operation * SequenceOperations::getOperationDemarrage()
{
	return this->operationDemarrage;
}
