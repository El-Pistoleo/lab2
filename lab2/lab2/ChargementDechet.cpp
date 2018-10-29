#include "ChargementDechet.h"



ChargementDechet::ChargementDechet()
{
}

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	Dechet*<int>::iterator i
	for (i =listeDechets.begin(); i != listeDechets.end(); ++i)
	{
		cout << *i << endl;    //On accède à l'élément pointé via l'étoile
	}
}


ChargementDechet::~ChargementDechet()
{
}

Dechet * ChargementDechet::getDechet()
{
	return this->listeDechets;
}
