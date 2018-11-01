#pragma once
#include "UsineTraitement.h"
#include "OperationTraitement.h"

class CreationDechetTraiteNonRecyclable : public OperationTraitement
{
public:
	
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement) { Compteur::ajouterConstructeur();};
	~CreationDechetTraiteNonRecyclable() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};