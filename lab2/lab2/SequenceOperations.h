#pragma once
#include "Operation.h"
#include <list> 
#include <iterator> 

class SequenceOperations
{
public:
	SequenceOperations();
	~SequenceOperations();
	SequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarrage(Operation* operation);
	Operation* getOperationDemarrage();

private:
	list<Operation*> listeOperations;
	Operation* operationDemarrage;
};

