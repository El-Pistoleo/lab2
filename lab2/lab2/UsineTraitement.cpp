#include "UsineTraitement.h"



UsineTraitement::UsineTraitement()
{
}


UsineTraitement::~UsineTraitement()
{
}

void UsineTraitement::demarrerTraitements(ChargementDechet * chargement)
{
	while (chargement != 0)
	{
		Log::i(*Dechet dechet);
		traiterDechet(*dechet);
	}
	delete chargement;
}

void UsineTraitement::preOperation()
{
	Log::i("PRÉOPERATION");
}

void UsineTraitement::postOperation()
{
	Log::i("POSTOPERATION");
}

void UsineTraitement::traiterDechet(Dechet * dechet)
{
	EXÉCUTER
		préopération
		Effectuer l’opération de l’opération courante
		postoperation
		Récupérer l’opération suivante
	TANT QUE l’opération courant est nulle
}
