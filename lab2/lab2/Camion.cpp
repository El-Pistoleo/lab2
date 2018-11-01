#include "Camion.h"

Camion::Camion(int maxCapacite)
{
	this->maxCapacite = maxCapacite;
	this->capacite = 0;
	Compteur::ajouterConstructeur();
}


bool Camion::ajouterDechet(DechetTraite* dechetTraite)
{	
	Dechet* dechet = dechetTraite->getDechet();
	int poidsCamion = getCapacite() + dechet->getPoids();
	if (poidsCamion <= maxCapacite) {
		capacite += dechet->getPoids();
		pileDechet.push(dechetTraite);
		return true;
	}
	else
	{
		return false;
	}
}

int Camion::viderCamion()
{
	while (!pileDechet.empty())
	{
		DechetTraite* dechetT;
		dechetT=pileDechet.top();		
		pileDechet.pop();
	}
	return capacite;
}

int Camion::getCapacite()
{
	return capacite;
}

int Camion::getMaxCapacite()
{
	return maxCapacite;
}
