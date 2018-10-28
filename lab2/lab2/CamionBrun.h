#pragma once
#include "DechetTraiteCompostable.h"
#include "Camion.h"

class CamionBrun :public Camion
{
public:
	CamionBrun();
	~CamionBrun();
	bool ajouterDechet(DechetTraiteCompostable* dechetTraite);
};

