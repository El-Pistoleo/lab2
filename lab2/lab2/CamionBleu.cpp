#include "CamionBleu.h"



CamionBleu::CamionBleu()
{
	Compteur::ajouterConstructeur();
}

CamionBleu::CamionBleu(int _maxCapacite)
{
	Compteur::ajouterConstructeur();

	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionBleu::~CamionBleu()
{
	Compteur::ajouterDestructeur();
}

bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}