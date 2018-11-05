#pragma once
#include "SequenceOperations.h"
#include "chargementDechet.h"
#include "CamionBleu.h"
#include "CamionVert.h"
#include "CamionBrun.h"
#include "Depot.h"
#include "Compteur.h"
#include "Camion.h"

class UsineTraitement
{
public:
	friend class OperationTraitement;
	UsineTraitement();
	UsineTraitement(const UsineTraitement&);
	~UsineTraitement();
	void chargerOperations(SequenceOperations* sequenceOperation);
	void demarrerTraitements(ChargementDechet* chargement);


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
	class Log
	{
	public:
		Log() { Compteur::ajouterConstructeur();}
		static void i(string info);
		static void i(Dechet const& dechet);
		static void i(Depot const& depot);
	};


};