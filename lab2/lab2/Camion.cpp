#include "Camion.h"


Camion::Camion()
{
	Compteur::ajouterConstructeur();
}


Camion::Camion(int _maxCapacite)
{
	Compteur::ajouterConstructeur();

	maxCapacite = _maxCapacite;
	capacite = 0;
}


Camion::~Camion()
{
	Compteur::ajouterDestructeur();
}

bool Camion::ajouterDechet(DechetTraite* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		capacite++;
		pileDechets.push(_dechetTraite);
		return true;
	}
	else
		return false;
}

int Camion::viderCamion()
{
	Dechet* dechet;
	int poidsTotal = 0;
	while (!(pileDechets.empty()))
	{
		dechet = (Dechet*)pileDechets.top();
		poidsTotal += dechet->getPoids();
		pileDechets.pop();

		delete dechet;
	}
	capacite = 0;
	return poidsTotal;
}