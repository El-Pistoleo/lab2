#include "OperationTraitement.h"

OperationTraitement::OperationTraitement()
{
	Compteur::ajouterConstructeur();
}

OperationTraitement::OperationTraitement(UsineTraitement* _usineTraitement)
{
	Compteur::ajouterConstructeur();
	usineTraitement = _usineTraitement;
}

OperationTraitement::~OperationTraitement()
{
	Compteur::ajouterDestructeur();
}
bool OperationTraitement::effectuerOperation(Dechet* dechet)
{
	return 0;
}
void OperationTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteRecyclable(dechet);
}
void OperationTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteNonRecyclable(dechet);
}
void OperationTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteCompostable(dechet);
}