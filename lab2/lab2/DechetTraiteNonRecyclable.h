#ifndef DECHETTRAITENONRECYCLABLE_H
#define DECHETTRAITENONRECYCLABLE_H

#include "DechetTraite.h"
#include "Compteur.h"

class DechetTraiteNonRecyclable :
	public DechetTraite
{
public:
	DechetTraiteNonRecyclable(Dechet* _dechet);
	~DechetTraiteNonRecyclable();
};

#endif