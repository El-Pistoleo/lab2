#pragma once
#include "DechetTraiteCompostable.h"
#include "Camion.h"

class CamionBrun :public Camion
{
public:
	CamionBrun() : Camion(80) { Compteur::ajouterConstructeur(); };
	~CamionBrun() { Compteur::ajouterDestructeur(); };
	bool ajouterDechet(DechetTraiteCompostable* dechetTraite);
};

