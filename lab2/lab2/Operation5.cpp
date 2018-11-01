#include "Operation5.h"


bool Operation5::effectuerOperation(Dechet * dechet)
{
	if (dechet->getMateriel() == Dechet::Materiel::VEGETAL)
		return true;
	return false;
}
