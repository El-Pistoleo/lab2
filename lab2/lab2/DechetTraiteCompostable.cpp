#include "DechetTraiteCompostable.h"



DechetTraiteCompostable::DechetTraiteCompostable(Dechet* dechet)
{
	Compteur::ajouterConstructeur();
	this->dechet = dechet;
}


DechetTraiteCompostable::~DechetTraiteCompostable()
{
	Compteur::ajouterDestructeur();
}