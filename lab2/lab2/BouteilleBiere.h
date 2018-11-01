#pragma once
#include "Dechet.h"
class BouteilleBiere :
	public Dechet
{
public:
	BouteilleBiere() : Dechet(25, "Bouteille de Biere", 0, "Inconnu", BOUTEILLE, 62, false, true) { Compteur::ajouterConstructeur(); };
	~BouteilleBiere() { Compteur::ajouterDestructeur(); };
};

