#pragma once
#include <stack>
#include "DechetTraite.h"

class Camion
{
public:
	Camion(int maxCapacite);
	virtual ~Camion() { Compteur::ajouterDestructeur(); };
	virtual bool ajouterDechet(DechetTraite* dechetTraite);
	int viderCamion();
	int getCapacite();
	int getMaxCapacite();
private:
	int maxCapacite;
	int capacite;
	stack<DechetTraite*> pileDechet;
};

