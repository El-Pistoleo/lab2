#pragma once
#include "SequenceOperations.h"
#include "UsineTraitement.h"
#include "CreationDechetTraiteCompostable.h"
#include "CreationDechetTraiteNonRecyclable.h"
#include "CreationDechetTraiteRecyclable.h"
#include "Operation.h"
#include "Operation1.h"
#include "Operation2.h"
#include "Operation3.h"
#include "Operation4.h"
#include "Operation5.h"
#include "Operation6.h"

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

