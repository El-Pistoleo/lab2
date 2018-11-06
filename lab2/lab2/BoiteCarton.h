
#ifndef BOITECARTON_H
#define BOITECARTON_H

#include "Dechet.h"
#include "Compteur.h"

class BoiteCarton :
	public Dechet
{
public:
	BoiteCarton();
	~BoiteCarton();
};



BoiteCarton::BoiteCarton()
{
	Compteur::ajouterConstructeur();
}


BoiteCarton::~BoiteCarton()
{
	Compteur::ajouterDestructeur();
}

#endif