#include "Dechet.h"

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide)
{
	this->id = idCourant+1;
	setPoids(poids);
	setDescription(description);
	setType(type);
	setCouleur(couleur);
	this->materiel = materiel;
	setPurete(purete);
	this->styromousse = styromousse;
	this->rigide = rigide;
	Compteur::ajouterConstructeur();
}

Dechet::Dechet(int poids, string description)
{
	this->id = idCourant+1;
	this->poids = poids;
	this->description = description;
	Compteur::ajouterConstructeur();
}

void Dechet::setPoids(int poids)
{
	if (poids >= 0 && poids <= 100)
	{
		this->poids = poids;
	}
}

void Dechet::setDescription(string description)
{
	if (description.length() < 3)
	{
		this->description = "???";
	}
	else
	{
		this->description = description;
	}
}

void Dechet::setType(int type)
{
	if (type >=0 && type <=7)
	{
		this->type = type;
	}
}

void Dechet::setCouleur(string couleur)
{
	if (couleur != "brun" || couleur != "vert")
	{
		this->couleur = "inconnu";
	}
	else
	{
		this->couleur = couleur;
	}
}

void Dechet::setPurete(int purete)
{
	if (purete >= 1 && purete <= 100)
	{
		this->purete = purete;
	}
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
	
	return out;
}