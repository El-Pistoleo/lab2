#include "Depot.h"



Depot::Depot()
{
	this->totalDTCompostable = 0;
	this->totalDTRecyclable = 0;
	this->totalDTNonRecyclable = 0;
}


Depot::~Depot()
{
}

CamionBleu * Depot::getCamionBleu()
{
	return new CamionBleu;
}

CamionVert * Depot::getCamionVert()
{
	return new CamionVert;
}

CamionBrun * Depot::getCamionBrun()
{
	return new CamionBrun;
}

void Depot::depotDechetsTraites(CamionVert * camion)
{
	totalDTNonRecyclable= totalDTNonRecyclable + camion->getCapacite();
	camion->viderCamion();
	delete camion;
}

void Depot::depotDechetsTraites(CamionBleu * camion)
{
	totalDTNonRecyclable = totalDTRecyclable + camion->getCapacite();
	camion->viderCamion();
	delete camion;
}

void Depot::depotDechetsTraites(CamionBrun * camion)
{
	totalDTNonRecyclable = totalDTCompostable + camion->getCapacite();
	camion->viderCamion();
	delete camion;
}

ostream& operator<< (ostream& out, const Dechet& dechet)
{
	out << "-- DEPOT --" << endl <<
		"totalDTRecyclable        :" << dechet.id << endl <<
		"totalDTNonRecyclable     :" << dechet.poids << endl <<
		"totalDTCompostables      :" << dechet.description << endl;
}
