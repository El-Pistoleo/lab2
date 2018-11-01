#include "Compteur.h"


void Compteur::ajouterConstructeur()
{
	constructeur++;
}

void Compteur::ajouterConstructeurCopie()
{
	constructeurCopie++;
}

void Compteur::ajouterDestructeur()
{
	destructeur++;
}

int Compteur::getNbConstructeurs()
{
	return constructeur;
}

int Compteur::getNbConstructeursCopie()
{
	return constructeurCopie;
}

int Compteur::getNbDestructeurs()
{
	return destructeur;
}
