#pragma once
#include "SequenceOperations.h"
#include "chargementDechet.h"
#include "CamionBleu.h"
#include "CamionVert.h"
#include "CamionBrun.h"
#include "Depot.h"

class UsineTraitement
{
public:
	UsineTraitement();
	~UsineTraitement();
	void chargerOperations(SequenceOperations* sequenceOperation);
	void demarrerOperations(ChargementDechet* chargement);

private:
	void preOperation();
	void postOperation();
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
	void traiterDechet(Dechet* dechet);

	SequenceOperations* sequenceOperations;
	Depot depot;
	CamionBleu* camionBleu;
	CamionVert* camionVert;
	CamionBrun* camionBrun;

};

