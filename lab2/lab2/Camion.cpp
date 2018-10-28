#include "Camion.h"



Camion::Camion()
{
	maxCapacite = 80;
	capacite = 0;
}

Camion::Camion(int maxCapacite)
{
	capacite = 0;
}


Camion::~Camion()
{
}

bool Camion::ajouterDechet(DechetTraite * dechetTraite)
{
	if (pileDechet.size < maxCapacite) {
		capacite += capacite;
		return true;
	}
	else
	{
		return false;
	}
}

int Camion::viderCamion()
{
	int poidsmax;
	while (!pileDechet.empty())
	{
		DechetTraite* dechetT;
		Dechet* dechet;
		dechetT=pileDechet.top();
		dechet = dechetT->getDechet();
		poidsmax = poidsmax +  dechet->getPoids() ;
		pileDechet.pop();
	}
	return poidsmax;
}

int Camion::getCapacite()
{
	return capacite;
}

int Camion::getMaxCapacite()
{
	return maxCapacite;
}
