#pragma once
#include <stack>
#include "DechetTraite.h"

class Camion
{
public:
	Camion();
	Camion(int maxCapacite);
	~Camion();
	bool ajouterDechet(DechetTraite* dechetTraite);
	int viderCamion();
	int getCapacite();
	int getMaxCapacite();
private:
	int maxCapacite;
	int capacite;
	stack<DechetTraite*> pileDechet;
};

