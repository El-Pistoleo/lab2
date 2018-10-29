#pragma once
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Dechet
{
public:
	Dechet();
	~Dechet();
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
	

	void setPoids(int poids) { this->poids= poids; };
	void setDescription(string description) { this->description = description; };
	void setType(int type) { this->type = type; };
	void setClouleur(string couleur) { this->couleur = couleur; };
	void setPurete(int purete) { this->purete = purete; };
};

ostream& operator<<(ostream& out, const Dechet& dechet) {
		out << "" << endl;
		return out;
	}