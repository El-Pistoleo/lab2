#pragma once
#include "UsineTraitement.h"
#include "OperationTraitement.h"

class CreationDechetTraiteRecyclable : public OperationTraitement
{
public:
	CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement) { Compteur::ajouterConstructeur(); };
	~CreationDechetTraiteRecyclable() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};