#pragma once
#include "DechetTraiteRecyclable.h"

class CamionBleu
{
public:
	CamionBleu();
	~CamionBleu();
	bool ajouterDechet(DechetTraiteRecyclable* dechetTraite);
};

