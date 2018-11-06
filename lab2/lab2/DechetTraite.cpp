#include "DechetTraite.h"


DechetTraite::DechetTraite()
{
	Compteur::ajouterConstructeur();
}


DechetTraite::DechetTraite(Dechet* dechet)
{
	Compteur::ajouterConstructeur();
	this->dechet = dechet;
}


DechetTraite::~DechetTraite()
{
	Compteur::ajouterDestructeur();
	delete dechet;
}