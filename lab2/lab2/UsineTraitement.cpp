#include "UsineTraitement.h"



UsineTraitement::UsineTraitement()
{
	camionBleu = new CamionBleu();
	camionVert = new CamionVert();
	camionBrun = new CamionBrun();
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
	Log::i("PREOPERATION");
}

void UsineTraitement::postOperation()
{
	Log::i("POSTOPERATION");
}

void UsineTraitement::creerDechetTraiteRecyclable(Dechet * dechet)
{
	int poids;
	DechetTraiteRecyclable* dtr = new DechetTraiteRecyclable(dechet);
	if (camionBleu->ajouterDechet(dtr))
	{
		Log::i("ajout DTR : " + dechet->getId());
	}
	else
	{
		poids = camionBleu->viderCamion();
		depot.depotDechetsTraites(camionBleu);
		camionBleu = depot.getCamionBleu();
		camionBleu->ajouterDechet(dtr);
	}
}

void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet * dechet)
{
	int poids;
	DechetTraiteNonRecyclable* dtnr = new DechetTraiteNonRecyclable(dechet);
	if (camionVert->ajouterDechet(dtnr))
	{
		Log::i("ajout DTNR : " + dechet->getId());
	}
	else
	{
		poids = camionVert->viderCamion();
		depot.depotDechetsTraites(camionVert);
		camionVert = depot.getCamionVert();
		camionVert->ajouterDechet(dtnr);
	}
}

void UsineTraitement::creerDechetTraiteCompostable(Dechet * dechet)
{
	int poids;
	DechetTraiteCompostable* dtc = new DechetTraiteCompostable(dechet);
	if (camionBrun->ajouterDechet(dtc))
	{
		Log::i("ajout DTC : " + dechet->getId());
	}
	else
	{
		poids = camionBrun->viderCamion();
		depot.depotDechetsTraites(camionBrun);
		camionBrun = depot.getCamionBrun();
		camionBrun->ajouterDechet(dtc);
	}
}

void UsineTraitement::traiterDechet(Dechet * dechet)
{
	Operation* operationDemarrage = sequenceOperations->getOperationDemarrage();
	bool result;
	do
	{
		result = operationDemarrage->effectuerOperation(dechet);
		operationDemarrage = operationDemarrage->getOperationSuivante(result);

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
