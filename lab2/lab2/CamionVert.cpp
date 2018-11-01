#include "CamionVert.h"


bool CamionVert::ajouterDechet(DechetTraiteNonRecyclable * dechetTraite)
{
	if (Camion::ajouterDechet(dechetTraite))
		return true;
	return false;
}
