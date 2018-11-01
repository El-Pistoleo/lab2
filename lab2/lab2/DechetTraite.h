#pragma once
#include "Dechet.h"
class DechetTraite
{
public:
	DechetTraite(Dechet* dechet);
	~DechetTraite() { Compteur::ajouterDestructeur(); };
	Dechet*  getDechet()  const;

protected:
	Dechet* dechet;
};