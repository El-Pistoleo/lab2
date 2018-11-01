#include "DechetTraite.h"



DechetTraite::DechetTraite(Dechet* dechet)
{
	this->dechet = dechet;
	Compteur::ajouterConstructeur();
}


Dechet * DechetTraite::getDechet() const
{
	return dechet;
}
