#include "CamionBrun.h"


bool CamionBrun::ajouterDechet(DechetTraiteCompostable * dechetTraite)
{
	if (Camion::ajouterDechet(dechetTraite))
		return true;
	return false;
}
