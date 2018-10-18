#pragma once
#include "SequenceOperations.h"
#include "UsineTraitement.h"

class GenerateurSequenceOperations
{
public:
	GenerateurSequenceOperations();
	~GenerateurSequenceOperations();
	SequenceOperations* genererSequence(int id, UsineTraitement* usineTraitement);

private:
	SequenceOperations* genererSequence0( UsineTraitement* usineTraitement);
	SequenceOperations* genererSequence1( UsineTraitement* usineTraitement);
};

