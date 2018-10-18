#pragma once
#include "DechetTraiteNonRecyclable.h"

class CamionVert
{
public:
	CamionVert();
	~CamionVert();
	bool ajouterDechet(DechetTraiteNonRecyclable* dechetTraite);
};

