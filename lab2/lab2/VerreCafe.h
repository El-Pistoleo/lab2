#pragma once
#include "Dechet.h"
class VerreCafe :
	public Dechet
{
public:
	VerreCafe(): Dechet(10, "Verre Cafe", 0, "Inconnu", INCONNU, 20, false, true) { Compteur::ajouterConstructeur(); };
	~VerreCafe() { Compteur::ajouterDestructeur(); };
};

