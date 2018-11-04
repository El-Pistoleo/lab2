#pragma once
#include <iostream>
#include <ostream>
#include <string>
#include "Compteur.h"

using namespace std;

class Dechet
{
public:
	virtual ~Dechet() { Compteur::ajouterDestructeur(); };
	friend class ChargementDechet;
	enum Materiel { CARTON, BOUTEILLE, PLASTIQUE, METAL, BOIS, NOURRITURE, VEGETAL, PAPIER, STYROFOAM, INCONNU };

	int getPoids()			{ return poids; };
	int getId()				{ return id; };
	string getDescription() { return description; };
	int getType()			{ return type; };
	string getCouleur()		{ return couleur; };
	Materiel getMateriel()	{ return materiel; };
	int getPurete()			{ return purete; };
	bool estEnStyromousse() { return styromousse; };
	bool estRigide()		{ return rigide; };
	friend ostream& operator<< (ostream& out, const Dechet&);

protected:

	Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide);
	Dechet(int poids, string description);
	

private:
	int poids;
	int id;
	string description;
	int type;
	string couleur;
	Materiel materiel;
	int purete;
	bool styromousse;
	bool rigide;
	static int idCourant;
	

	void setPoids(int poids);
	void setDescription(string description);
	void setType(int type);
	void setCouleur(string couleur);
	void setPurete(int purete);
};

/*ostream& operator<<(ostream& out, const Dechet& dechet);*/