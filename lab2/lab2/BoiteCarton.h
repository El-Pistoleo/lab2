#pragma once
#include "Dechet.h"

class BoiteCarton :
	public Dechet
{
public:
	BoiteCarton() : Dechet (1, "Une Boite de Carton", 0, "brun", CARTON, 70,false,false) {Compteur::ajouterConstructeur();};

	/*constructeur par copie*/

	~BoiteCarton() { Compteur::ajouterDestructeur(); };
};

