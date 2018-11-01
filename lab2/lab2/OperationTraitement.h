#pragma once
#include "UsineTraitement.h"
class OperationTraitement: public Operation
{
public:
	friend class UsineTraitement;

	OperationTraitement(UsineTraitement* usineTraitement) { Compteur::ajouterConstructeur(); };
	virtual ~OperationTraitement() { Compteur::ajouterDestructeur(); };
	virtual bool effectuerOperation(Dechet* dechet);

protected:
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);

private:
	UsineTraitement* usineTraitement;
};

