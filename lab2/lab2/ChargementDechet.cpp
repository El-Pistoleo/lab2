#include "ChargementDechet.h"



ChargementDechet::ChargementDechet()
{
}

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	Dechet*<int>::iterator i
	for (i =listeDechets.begin(); i != listeDechets.end(); ++i)
	{
		cout << *i << endl;    //On acc�de � l'�l�ment point� via l'�toile
	}
}


ChargementDechet::~ChargementDechet()
{
}

Dechet * ChargementDechet::getDechet()
{
	return this->listeDechets;
}
