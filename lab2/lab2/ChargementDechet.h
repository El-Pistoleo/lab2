#pragma once
#include <iostream>
#include "Dechet.h"
#include <string>

using namespace std;

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


