#pragma once
#include "Operation.h"
#include "Operation1.h"
#include "Operation2.h"
#include "Operation3.h"
#include "Operation4.h"
#include "Operation5.h"
#include "Operation6.h"
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

