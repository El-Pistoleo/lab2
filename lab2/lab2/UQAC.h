#pragma once
#ifndef UQAC_H
#define UQAC_H

#include "ChargementDechet.h"
#include "Compteur.h"

class UQAC
{
public:
	UQAC();
	~UQAC();

	static ChargementDechet* getChargementDechets();
};

#endif