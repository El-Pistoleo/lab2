#pragma once
#include "ChargementDechet.h"
#include "SacChips.h"
#include "BouteilleBiere.h"
#include "Chaise.h"
#include "DechetMalConcu.h"
#include "BoiteCarton.h"
#include "VerreCafe.h"
#include "RestantNourriture.h"
#include "QuelqueChose.h"
#include "FeuillePapier.h"
#include "PlanteVerte.h"

class UQAC
{
public:
	UQAC() { Compteur::ajouterConstructeur(); };
	~UQAC() { Compteur::ajouterDestructeur(); };
	static ChargementDechet*  getChargementDechets();
};

