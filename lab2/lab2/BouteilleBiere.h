#ifndef BOUTEILLEBIERE_H
#define BOUTEILLEBIERE_H

#include "Dechet.h"
#include "Compteur.h"

class BouteilleBiere :
	public Dechet
{
public:
	BouteilleBiere();
	~BouteilleBiere();
};



BouteilleBiere::BouteilleBiere()
{
	Compteur::ajouterConstructeur();
}


BouteilleBiere::~BouteilleBiere()
{
	Compteur::ajouterDestructeur();
}

#endif