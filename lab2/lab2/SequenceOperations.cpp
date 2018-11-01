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
	Operation* operationCourante = new Operation();
	operationCourante = operation;
	Operation* dtnr = new Operation(NULL, NULL);
	Operation* dtr = new Operation(NULL, NULL);
	Operation* dtc = new Operation(NULL, NULL);
	Operation5* op5 = new Operation5(dtc, dtnr);
	Operation4* op4 = new Operation4(dtc, op5);
	Operation3* op3 = new Operation3(dtr, op4);
	Operation6* op6 = new Operation6(dtnr, dtr);
	Operation2* op2 = new Operation2(op6, op3);
	Operation1* op1 = new Operation1(dtnr, op2);
	
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
