#include "CamionBrun.h"



CamionBrun::CamionBrun()
{
	Compteur::ajouterConstructeur();
}

CamionBrun::CamionBrun(int _maxCapacite)
{
	Compteur::ajouterConstructeur();

	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionBrun::~CamionBrun()
{
	Compteur::ajouterDestructeur();
}

bool CamionBrun::ajouterDechetTraite(DechetTraiteCompostable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}