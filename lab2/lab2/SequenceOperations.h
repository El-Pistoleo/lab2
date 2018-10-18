#pragma once
#include "Operation.h"

class SequenceOperations
{
public:
	SequenceOperations();
	~SequenceOperations();
	SequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarrage(Operation* operation);
	Operation* getOperationDemarrage();

private:
	Operation* listeOperation;
	Operation* operationDemarrage;
};

