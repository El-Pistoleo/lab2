#include "Operation2.h"


bool Operation2::effectuerOperation(Dechet * dechet)
{
	if(dechet->getMateriel()== Dechet::Materiel::PLASTIQUE)
		return true;
	return false;
}
