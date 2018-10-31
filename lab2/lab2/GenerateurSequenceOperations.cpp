#include "GenerateurSequenceOperations.h"



GenerateurSequenceOperations::GenerateurSequenceOperations()
{
	/*Compteur constructeur*/
}


GenerateurSequenceOperations::~GenerateurSequenceOperations()
{
	/*compteur destructeur*/
}

SequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement)
{

	return nullptr;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperations = new SequenceOperations();
	usineTraitement->chargerOperations(sequenceOperations);

}
