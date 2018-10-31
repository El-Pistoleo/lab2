#pragma once
#include <iostream>
#include "Dechet.h"
#include <string>
#include <list> 
#include <iterator> 

using namespace std;

class ChargementDechet
{
public:

	ChargementDechet();
	ChargementDechet(list<Dechet*>* listeDechets);
	~ChargementDechet();
	Dechet* getDechet();

private:
	list<Dechet*>* listeDechets;
};


