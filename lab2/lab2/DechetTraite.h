#ifndef DECHETTRAITE_H
#define DECHETTRAITE_H

#include "Dechet.h"
#include "Compteur.h"
class DechetTraite
{
public:
	DechetTraite();
	DechetTraite(Dechet* _dechet);
	virtual ~DechetTraite();
protected:
	Dechet* dechet;
};

#endif