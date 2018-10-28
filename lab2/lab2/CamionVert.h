#pragma once
#include "DechetTraiteNonRecyclable.h"
#include "Camion.h"

class CamionVert :public Camion
{
public:
	CamionVert();
	~CamionVert();
	bool ajouterDechet(DechetTraiteNonRecyclable* dechetTraite);
};

