#pragma once
#include "DechetTraiteRecyclable.h"
#include "Camion.h"

class CamionBleu :public Camion
{
public:
	CamionBleu();
	~CamionBleu();
	bool ajouterDechet(DechetTraiteRecyclable* dechetTraite);
};

