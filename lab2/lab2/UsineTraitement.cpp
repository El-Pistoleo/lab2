#include "UsineTraitement.h"



UsineTraitement::UsineTraitement()
{
	Compteur::ajouterConstructeur();
}

UsineTraitement::UsineTraitement(const UsineTraitement&)
{
	Compteur::ajouterConstructeurCopie();
}


UsineTraitement::~UsineTraitement()
{
	Compteur::ajouterDestructeur();
}

void UsineTraitement::chargerOperations(SequenceOperations* sequenceOperation)
{
	this->sequenceOperations = sequenceOperation;
}


void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	Dechet* dechet;
	while ((dechet = chargement->getDechet()) != NULL)
	{
		Log::i(*dechet);
		preOperation();
		traiterDechet(dechet);
		postOperation();
	}
	delete chargement;
	Log::i(depot);
}

void UsineTraitement::preOperation()
{
	Log::i("PRÉOPERATION");
}

void UsineTraitement::postOperation()
{
	Log::i("POSTOPERATION");
}

void UsineTraitement::creerDechetTraiteRecyclable(Dechet * dechet)
{
	Log::i("ajout DTR : " + dechet->getId());
	DechetTraiteRecyclable* dtr = new DechetTraiteRecyclable(dechet);
	if (!camionBleu->ajouterDechet(dtr))
	{
		depot.depotDechetsTraites(camionBleu);
		camionBleu = depot.getCamionBleu();
		camionBleu->ajouterDechet(dtr);
	}
}

void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet * dechet)
{
	Log::i("ajout DTNR : " + dechet->getId());
	DechetTraiteNonRecyclable* dtnr = new DechetTraiteNonRecyclable(dechet);
	if (!camionVert->ajouterDechet(dtnr))
	{
		depot.depotDechetsTraites(camionVert);
		camionVert = depot.getCamionVert();
		camionVert->ajouterDechet(dtnr);
	}
}

void UsineTraitement::creerDechetTraiteCompostable(Dechet * dechet)
{
	Log::i("ajout DTC : " + dechet->getId());
	DechetTraiteCompostable* dtc = new DechetTraiteCompostable(dechet);
	if (!camionBrun->ajouterDechet(dtc))
	{
		depot.depotDechetsTraites(camionBrun);
		camionBrun = depot.getCamionBrun();
		camionBrun->ajouterDechet(dtc);
	}
}

void UsineTraitement::traiterDechet(Dechet * dechet)
{
	Operation* operationDemarrage = this->sequenceOperations->getOperationDemarrage();
	bool result;
	do
	{
		preOperation();
		result = operationDemarrage->effectuerOperation(dechet);
		operationDemarrage = operationDemarrage->getOperationSuivante(result);
		postOperation();

	} while (operationDemarrage != NULL);

}

void UsineTraitement::Log::i(string info)
{
	cout << info << endl;

}

void UsineTraitement::Log::i(Dechet const & dechet)
{
}

void UsineTraitement::Log::i(Depot const & depot)
{
}
