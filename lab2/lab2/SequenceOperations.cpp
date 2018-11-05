#include "SequenceOperations.h"



SequenceOperations::~SequenceOperations()
{
	while (!listeOperations.empty()) {
		Compteur::ajouterDestructeur();
		listeOperations.pop_front();	
	}
	/*compteur destructeur*/
	Compteur::ajouterDestructeur();
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	listeOperations.push_front(operation);
	return this;
}

void SequenceOperations::definirOperationDemarrage(Operation* operation)
{
	this->operationDemarrage = operation;
}

 Operation *  SequenceOperations::getOperationDemarrage()
{
	return operationDemarrage;
}