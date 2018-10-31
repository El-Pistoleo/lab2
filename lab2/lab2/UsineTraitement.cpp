#include "UsineTraitement.h"



UsineTraitement::UsineTraitement()
{
}


UsineTraitement::~UsineTraitement()
{
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
	Log::i("PR�OPERATION");
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
	EX�CUTER
		pr�op�ration
		Effectuer l�op�ration de l�op�ration courante
		postoperation
		R�cup�rer l�op�ration suivante
	TANT QUE l�op�ration courant est nulle

}
