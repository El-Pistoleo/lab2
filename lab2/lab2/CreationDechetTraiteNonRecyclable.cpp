#include "CreationDechetTraiteNonRecyclable.h"



CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement)
{
	Compteur::ajouterConstructeur();
	this->usineTraitement = usineTraitement;
}


CreationDechetTraiteNonRecyclable::~CreationDechetTraiteNonRecyclable()
{
	Compteur::ajouterDestructeur();
}

bool CreationDechetTraiteNonRecyclable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteCompostable(dechet);
	return true;
}