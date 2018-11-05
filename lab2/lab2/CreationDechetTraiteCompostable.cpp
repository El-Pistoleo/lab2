#include "CreationDechetTraiteCompostable.h"



CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* usineTraitement)
{
	Compteur::ajouterConstructeur();

	this->usineTraitement = usineTraitement;
}


CreationDechetTraiteCompostable::~CreationDechetTraiteCompostable()
{
	Compteur::ajouterDestructeur();
}

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteCompostable(dechet);
	return true;
}