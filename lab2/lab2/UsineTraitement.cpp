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
	Log::i("PR�OPERATION");
}

void UsineTraitement::postOperation()
{
	Log::i("POSTOPERATION");
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
