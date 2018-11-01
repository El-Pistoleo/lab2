#pragma once
#include "Dechet.h"
class QuelqueChose :
	public Dechet
{
public:
	QuelqueChose() : Dechet(55, "Une chose", 0, "Inconnu", INCONNU, 50, false, false) { Compteur::ajouterConstructeur(); };
	~QuelqueChose() { Compteur::ajouterDestructeur(); };
};

