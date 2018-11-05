#pragma once
#ifndef RESTANT_NOUTRRITTURE_H
#define RESTANT_NOURRITURE_H

#include "Dechet.h"
#include "Compteur.h"


class RestantNourriture :
	public Dechet
{
public:
	RestantNourriture();
	~RestantNourriture();
};



RestantNourriture::RestantNourriture()
{
}


RestantNourriture::~RestantNourriture()
{
}

#endif