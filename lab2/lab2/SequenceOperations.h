#pragma once
#ifndef SEQUENCEOPERATIONS_H
#define SEQUENCEOPERATIONS_H

#include "Operation.h"
#include "Compteur.h"
using namespace std;

class SequenceOperations
{
public:
	SequenceOperations();
	~SequenceOperations();
	SequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarage(Operation* operation);
	Operation* getOperationDemarage();
private:
	Operation* listeOperations;
	Operation* operationDemarage;
	list<Operation*> allOperations;
};

#endif