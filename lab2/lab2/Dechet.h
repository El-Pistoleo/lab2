#pragma once
#include <iostream> //pour l'utilisation des string
#include <ostream>

using namespace std;

class Dechet
{
protected:
	enum Materiel { CARTON, BOUTEILLE, PLASTIQUE, METAL, BOIS, NOURRITURE, VEGETAL, PAPIER, STYROFOAM, INCONNU };
	Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide);
	Dechet(int poids, string description);
	

public:
	Dechet();
	~Dechet();
	int getPoids()			{ return poids; };
	int getId()				{ return id; };
	string getDescription() { return description; };
	int getType()			{ return type; };
	string getCouleur()		{ return couleur; };
	Materiel getMateriel()	{ return materiel; };
	int getPurete()			{ return purete; };
	bool estEnStyromousse() { return styromousse; };
	bool estRigide()		{ return right; };
	friend ostream& operator<< (ostream& out, const Dechet&);

	

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