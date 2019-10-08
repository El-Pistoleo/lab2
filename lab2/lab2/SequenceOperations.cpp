#include "SequenceOperations.h"

using namespace std;

SequenceOperations::SequenceOperations()
{
	Compteur::ajouterConstructeur();
}


SequenceOperations::~SequenceOperations()
{
	for (list<Operation*>::iterator it = allOperations.begin(); it != allOperations.end(); it++) {
		delete *it;
	}
	Compteur::ajouterDestructeur();
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	if (allOperations.size() == 0) {
		std::cout << "Yo c'est à zero" << std::endl;
	}
	bool isOperationIn = false;
	bool isNextOperationTrueIn = false;
	bool isNextOperationFalseIn = false;
	std::cout << this->allOperations.size();
	for (list<Operation*>::iterator it = allOperations.begin(); it != allOperations.end(); it++) {
		if (operation == (*it)) {
			isOperationIn = true;
		}

		if (operation->getOperationSuivante(true) == (*it)) {
			isNextOperationTrueIn = true;
		}

		if (operation->getOperationSuivante(false) == (*it)) {
			isNextOperationFalseIn = true;
		}
	}

	if (!isOperationIn) {
		allOperations.push_back(operation);
	}
	
	if (!isNextOperationTrueIn) {
		allOperations.push_back(operation->getOperationSuivante(true));
	}
	
	if (!isNextOperationFalseIn) {
		allOperations.push_back(operation->getOperationSuivante(false));
	}

	return this;
	//return NULL;
}

void SequenceOperations::definirOperationDemarage(Operation* operation)
{
	operationDemarage = operation;
}

Operation* SequenceOperations::getOperationDemarage()
{
	return operationDemarage;
}