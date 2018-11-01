#include "CamionBleu.h"



bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* dechetTraite)
{
	if (Camion::ajouterDechet(dechetTraite)) 
		return true;
	return false;
}
