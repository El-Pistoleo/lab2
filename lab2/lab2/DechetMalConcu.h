#pragma once
#include "Dechet.h"
class DechetMalConcu :
	public Dechet
{
public:
	DechetMalConcu() : Dechet(70, "Dechet mal consu", 0, "Inconnu", INCONNU, 10, false, true) { Compteur::ajouterConstructeur(); };
	~DechetMalConcu() { Compteur::ajouterConstructeur(); };
};

