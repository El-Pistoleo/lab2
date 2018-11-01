#pragma once
#include "DechetTraiteNonRecyclable.h"
#include "Camion.h"

class CamionVert :public Camion
{
public:
	CamionVert() : Camion(80) { Compteur::ajouterConstructeur(); };
	~CamionVert() { Compteur::ajouterDestructeur(); };
	bool ajouterDechet(DechetTraiteNonRecyclable* dechetTraite);
};

