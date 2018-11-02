#include "Depot.h"



Depot::Depot()
{
	this->totalDTCompostable = 0;
	this->totalDTRecyclable = 0;
	this->totalDTNonRecyclable = 0;
	Compteur::ajouterConstructeur();
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

ostream& operator<< (ostream& out, const Depot& depot)
{
	out << "-- DEPOT --" << endl <<
		"totalDTRecyclable        :" << depot.totalDTRecyclable << endl <<
		"totalDTNonRecyclable     :" << depot.totalDTNonRecyclable << endl <<
		"totalDTCompostables      :" << depot.totalDTCompostable << endl;

	return out;
}
