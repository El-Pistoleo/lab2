#include "ChargementDechet.h"



ChargementDechet::ChargementDechet()
{
}

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	this->listeDechets = listeDechets;
	

}


ChargementDechet::~ChargementDechet()
{
}

Dechet* ChargementDechet::getDechet()
{
	list<Dechet*>::iterator x;
	if (!this->listeDechets->empty()) 
	{
		for (x = this->listeDechets->begin(); x != this->listeDechets->end(); x++)
		{
				return *x;
		}

	}
	
}
