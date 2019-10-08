#include "DechetTraiteNonRecyclable.h"



DechetTraiteNonRecyclable::DechetTraiteNonRecyclable(Dechet* dechet)
{
	Compteur::ajouterConstructeur();

	this->dechet = dechet;
}


DechetTraiteNonRecyclable::~DechetTraiteNonRecyclable()
{
	Compteur::ajouterDestructeur();
}