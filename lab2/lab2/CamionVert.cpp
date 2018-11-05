#include "CamionVert.h"



CamionVert::CamionVert()
{
	Compteur::ajouterConstructeur();
}

CamionVert::CamionVert(int _maxCapacite)
{
	Compteur::ajouterConstructeur();
	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionVert::~CamionVert()
{
	Compteur::ajouterDestructeur();
}

bool CamionVert::ajouterDechetTraite(DechetTraiteNonRecyclable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}