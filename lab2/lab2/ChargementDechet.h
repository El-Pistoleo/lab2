#pragma once
#include "Dechet.h"
class ChargementDechet
{
public:
	ChargementDechet();
	ChargementDechet(list<Dechet*>* listeDechets);
	~ChargementDechet();
	Dechet* getDechet();

private:
	Dechet* listeDechets;
};


