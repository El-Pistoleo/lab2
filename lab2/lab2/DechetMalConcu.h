#ifndef DECHETMALCONCU_H
#define DECHETMALCONCU_H

#include "Dechet.h"
#include "Compteur.h"
class DechetMalConcu :
	public Dechet
{
public:
	DechetMalConcu();
	~DechetMalConcu();
};



DechetMalConcu::DechetMalConcu()
{
	Compteur::ajouterConstructeur();
}


DechetMalConcu::~DechetMalConcu()
{
	Compteur::ajouterDestructeur();
}

#endif