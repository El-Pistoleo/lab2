#pragma once
#include "Dechet.h"
class FeuillePapier :
	public Dechet
{
public:
	FeuillePapier() : Dechet(1, "Une feuille", 0, "Inconnu", PAPIER, 95, true, false) { Compteur::ajouterConstructeur(); };
	~FeuillePapier() { Compteur::ajouterDestructeur(); };
};

