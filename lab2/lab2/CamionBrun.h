#pragma once
#include "DechetTraiteCompostable.h"

class CamionBrun
{
public:
	CamionBrun();
	~CamionBrun();
	bool ajouterDechet(DechetTraiteCompostable* dechetTraite);
};

