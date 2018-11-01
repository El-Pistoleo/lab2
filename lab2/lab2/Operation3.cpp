#include "Operation3.h"



bool Operation3::effectuerOperation(Dechet * dechet)
{
	if (dechet->getMateriel() == Dechet::Materiel::PAPIER || dechet->getMateriel() == Dechet::Materiel::CARTON)
		return true;
	return false;
}
