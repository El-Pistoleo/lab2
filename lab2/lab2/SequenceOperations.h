#pragma once
#include "Operation.h"
#include <list> 

class SequenceOperations
{
public:
	SequenceOperations() {Compteur::ajouterConstructeur(); };
	~SequenceOperations();
	SequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarrage(Operation* operation);
	Operation* getOperationDemarrage();

private:
	 list<Operation*> listeOperations;
	 Operation* operationDemarrage;
};

