#pragma once
#include "Dechet.h"
class Chaise :
	public Dechet
{
public:
	Chaise() : Dechet(15, "Une chaise", 2, "vert", BOIS, 80, false, true) { Compteur::ajouterConstructeur(); };
	~Chaise() { Compteur::ajouterDestructeur(); };
};

