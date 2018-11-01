#pragma once
#include <iostream>
#include "Dechet.h"
#include <string>
#include <list> 

using namespace std;

class ChargementDechet
{
public:

	/*ChargementDechet();*/
	ChargementDechet(list<Dechet*>* listeDechets);
	~ChargementDechet() { Compteur::ajouterDestructeur(); };
	Dechet* getDechet();

private:
	list<Dechet*>* listeDechets;
};


