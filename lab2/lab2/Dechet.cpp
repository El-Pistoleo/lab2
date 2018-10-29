#include "Dechet.h"

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide)
{
	this->id = idCourant;
	this->poids = poids;
	this->description = description;
	this->type = type;
	this->couleur = couleur;
	this->materiel = materiel;
	this->purete = purete;
	this->styromousse = styromousse;
	this->rigide = rigide;
}

Dechet::Dechet(int poids, string description)
{
	this->id = idCourant;
	this->poids = poids;
	this->description = description;
}

Dechet::Dechet()
{
}


Dechet::~Dechet()
{
}

ostream& operator<< (ostream& out, const Dechet& dechet)
{
	out << "--------------------------------" << endl <<
		"id             :" << dechet.id << endl <<
		"poids          :" << dechet.poids << endl <<
		"description    :" << dechet.description << endl <<
		"type           :" << dechet.type << endl <<
		"couleur        :" << dechet.couleur << endl <<
		"materiel       :" << dechet.materiel << endl <<
		"purete         :" << dechet.purete << endl <<
		"styromousse    :" << dechet.styromousse << endl <<
		"rigide         :" << dechet.rigide << endl;
}