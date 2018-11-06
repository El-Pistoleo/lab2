#pragma once
#ifndef SACCHIPS_H
#define SACCHIPS_H

#include "Dechet.h"
#include "Compteur.h"

class SacChips :
	public Dechet
{
public:
	SacChips();
	~SacChips();
};



SacChips::SacChips()
{
	Compteur::ajouterConstructeur();
}


SacChips::~SacChips()
{
	Compteur::ajouterDestructeur();
}

#endif