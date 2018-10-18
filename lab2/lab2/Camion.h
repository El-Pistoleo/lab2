#pragma once
#include "DechetTraite.h"

class Camion
{
public:
	Camion();
	Camion(int maxCapacite);
	~Camion();
	bool ajouterDechet(DechetTraite* dechetTraite);
	int viderCamion();

private:
	int maxCapacite;
	int capacite;
	stack<DechetTraite*> pileDechet;
};

