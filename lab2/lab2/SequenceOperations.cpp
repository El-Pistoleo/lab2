#include "SequenceOperations.h"



SequenceOperations::SequenceOperations()
{
 /*compteur constructeur*/
}


SequenceOperations::~SequenceOperations()
{
	/*compteur destructeur*/
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	SequenceOperations* sequenceOperations = new SequenceOperations();
	Operation* dtnr = new Operation();
	Operation* dtr = new Operation();
	Operation* dtc = new Operation();
	Operation* op1 = new Operation1();
	Operation* op2 = new Operation2();
	Operation* op3 = new Operation3();
	Operation* op4 = new Operation4();
	Operation* op5 = new Operation5();
	Operation* op6 = new Operation6();
	
	sequenceOperations
		->ajouterOperation(dtnr)
		->ajouterOperation(dtr)
		->ajouterOperation(dtc)
		->ajouterOperation(op5)
		->ajouterOperation(op4)
		->ajouterOperation(op3)
		->ajouterOperation(op6)
		->ajouterOperation(op2)
		->ajouterOperation(op1)
		->definirOperationDemarrage(op1);
	return this;
}

void SequenceOperations::definirOperationDemarrage(Operation* operation)
{
	this->operationDemarrage = operation;

	
}

Operation * SequenceOperations::getOperationDemarrage()
{
	return this->operationDemarrage;
}
