#pragma once
#ifndef QUELQUECHOSE_H
#define QUELQUECHOSE_H

#include "Dechet.h"
#include "Compteur.h"

class QuelqueChose :
	public Dechet
{
public:
	QuelqueChose();
	~QuelqueChose();
};



QuelqueChose::QuelqueChose()
{
	Compteur::ajouterConstructeur();
}


QuelqueChose::~QuelqueChose()
{
	Compteur::ajouterDestructeur();
}

#endif