#pragma once
#include "Dechet.h"
class SacChips :
	public Dechet
{
public:
	SacChips() : Dechet(1, "Sac chips", 1, "Inconnu", STYROFOAM, 20, true, false) { Compteur::ajouterConstructeur(); };
	~SacChips() { Compteur::ajouterDestructeur(); };
};

