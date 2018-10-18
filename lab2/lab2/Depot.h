#pragma once
#include <iostream>
#include <ostream>
#include "CamionBleu.h"
#include "CamionBrun.h"
#include "CamionVert.h"
using namespace std;

class Depot
{
public:
	Depot();
	~Depot();
	CamionBleu* getCamionBleu();
	CamionVert* getCamionVert();
	CamionBrun* getCamionBrun();
	void depotDechetsTraites(CamionVert* camion);
	void depotDechetsTraites(CamionBleu* camion);
	void depotDechetsTraites(CamionBrun* camion);

	friend ostream& operator<< (ostream& out, const Depot&);

private:
	int totalDTRecyclable;
	int totalDTNonRecyclable;
	int totalDTCompostable;
};

ostream& operator<<(ostream& out, const Depot& depot) {
	out << "-- DEPOT --" << endl;
	return out;
}