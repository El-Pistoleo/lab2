#pragma once
#ifndef USINETRAITEMENT_H
#define USINETRAITEMENT_H

#include "Operation1.h"
#include "ChargementDechet.h"
#include "SequenceOperations.h"
#include "Depot.h"
#include "Compteur.h"
#include "Operation.h"

class UsineTraitement
{
public:

	class Log
	{
	public:
		Log();
		~Log();
		void i(std::string info) const { std::cout << info << std::endl; };
		void i(Dechet const& dechet) {};
		void i(Depot const& depot) {};
	};
	UsineTraitement();
	~UsineTraitement();
	void chargerOperations(SequenceOperations* sequenceOperations);
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
	CamionVert* camionVert;
	CamionBleu* camionBleu;
	CamionBrun* camionBrun;

	friend class OperationTraitement;

};

#endif