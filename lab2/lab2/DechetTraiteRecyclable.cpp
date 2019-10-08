#include "DechetTraiteRecyclable.h"



DechetTraiteRecyclable::DechetTraiteRecyclable(Dechet* dechet)
{
	Compteur::ajouterConstructeur();
	this->dechet = dechet;
}


DechetTraiteRecyclable::~DechetTraiteRecyclable()
{
	Compteur::ajouterDestructeur();
}