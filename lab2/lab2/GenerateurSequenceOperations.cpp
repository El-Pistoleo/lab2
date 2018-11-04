#include "GenerateurSequenceOperations.h"



GenerateurSequenceOperations::GenerateurSequenceOperations()
{
	Compteur::ajouterConstructeur();
}


GenerateurSequenceOperations::~GenerateurSequenceOperations()
{
	Compteur::ajouterDestructeur();
}

SequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement)
{
	SequenceOperations * operations = new SequenceOperations();
	switch (id) {
	case 0:
		operations = this->genererSequence0(usineTraitement);
		break;
	case 1:
		operations = this->genererSequence1(usineTraitement);
		break;
	default:
		break;
	}

	return operations;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{
	CreationDechetTraiteRecyclable* dtr =  new CreationDechetTraiteRecyclable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dtnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteCompostable* dtc = new CreationDechetTraiteCompostable(usineTraitement);
	SequenceOperations* sequenceOperations = new SequenceOperations();


	Operation6* op6 = new Operation6(dtnr, dtr);
	Operation5* op5 = new Operation5(dtc, dtnr);
	Operation4* op4 = new Operation4(dtc, op5);
	Operation3* op3 = new Operation3(dtr, op4);	
	Operation2* op2 = new Operation2(op6, op3);
	Operation1* op1 = new Operation1(dtnr, op2);

	sequenceOperations
		->ajouterOperation(op5)
		->ajouterOperation(op4)
		->ajouterOperation(op3)
		->ajouterOperation(op6)
		->ajouterOperation(op2)
		->ajouterOperation(op1)
		->definirOperationDemarrage(op1);

	return sequenceOperations;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence1(UsineTraitement * usineTraitement)
{
	return nullptr;
}
