#pragma once
#include "Dechet.h"
class RestantNourriture :
	public Dechet
{
public:
	RestantNourriture(): Dechet(55, "Restant", 0, "Inconnu", NOURRITURE, 40, false, false) { Compteur::ajouterConstructeur(); };
	~RestantNourriture() { Compteur::ajouterDestructeur(); };
};

