#pragma once
class Compteur
{
public:
	Compteur();
	~Compteur(); 
	void ajouterConstructeur();
	void ajouterConstructeurCopie();
	void ajouterDestructeur();
	int getNbConstructeurs();
	int getNbConstructeursCopie();
	int getNbDestructeurs();

private:
	int constructeur;
	int constructeurCopie;
	int destructeur;
};

