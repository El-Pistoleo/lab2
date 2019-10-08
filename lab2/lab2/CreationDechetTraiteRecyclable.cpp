#include "CreationDechetTraiteRecyclable.h"



CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement)
{
	Compteur::ajouterConstructeur();
	this->usineTraitement = usineTraitement;
}


CreationDechetTraiteRecyclable::~CreationDechetTraiteRecyclable()
{
	Compteur::ajouterDestructeur();
}

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteRecyclable(dechet);
	return true;
}