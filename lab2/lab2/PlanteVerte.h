#pragma once
#ifndef PLANTEVERTE_H
#define PLANTEVERTE_H

#include "Dechet.h"
#include "Compteur.h"


class PlanteVerte :
	public Dechet
{
public:
	PlanteVerte();
	~PlanteVerte();
};



PlanteVerte::PlanteVerte()
{
	Compteur::ajouterConstructeur();
}


PlanteVerte::~PlanteVerte()
{
	Compteur::ajouterDestructeur();
}

#endif