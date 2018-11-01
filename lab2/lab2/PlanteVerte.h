#pragma once
#include "Dechet.h"
class PlanteVerte : public Dechet
{
public:
	PlanteVerte() :Dechet(25, "Plante verte", 0, "vert", VEGETAL, 100, false, false) { Compteur::ajouterConstructeur(); };
	~PlanteVerte() { Compteur::ajouterDestructeur(); };
};

