#pragma once
#include "UsineTraitement.h"
#include "OperationTraitement.h"

class CreationDechetTraiteCompostable : public OperationTraitement
{
public:
	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement) : OperationTraitement(usineTraitement) { Compteur::ajouterConstructeur(); };
	~CreationDechetTraiteCompostable() { Compteur::ajouterDestructeur(); };
	bool effectuerOperation(Dechet* dechet);
};

