#include "ChargementDechet.h"



ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	this->listeDechets = listeDechets;
	Compteur::ajouterConstructeur();
}



Dechet* ChargementDechet::getDechet()
{
	if (this->listeDechets->empty())
		return NULL;
	Dechet* dechet = listeDechets->front();
	return dechet;
	
}
