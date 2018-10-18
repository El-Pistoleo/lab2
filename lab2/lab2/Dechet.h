#pragma once
#include <iostream> //pour l'utilisation des string
#include <ostream>

using namespace std;

class Dechet
{
public:
	Dechet();
	~Dechet();
	int getPoids();
	int getId();
	string getDescription();
	int getType();
	string getCouleur();
	Materiel getMateriel();
	int getPurete();
	bool estEnStyromousse();
	bool estRigide();
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
	void setClouleur(string couleur);
	void setPurete(int purete);

	enum Materiel { CARTON, BOUTEILLE, PLASTIQUE, METAL, BOIS, NOURRITURE, VEGETAL, PAPIER, STYROFOAM, INCONNU };
};

ostream& operator<<(ostream& out, const Dechet& dechet) {
		out << "--------------------------------" << endl;
		return out;
	}