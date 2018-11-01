#pragma once
#include "DechetTraiteRecyclable.h"
#include "Camion.h"

class CamionBleu :public Camion
{
public:
	CamionBleu() : Camion(80) { Compteur::ajouterConstructeur(); };
	~CamionBleu() { Compteur::ajouterDestructeur();};
	bool ajouterDechet(DechetTraiteRecyclable* dechetTraite);
};

