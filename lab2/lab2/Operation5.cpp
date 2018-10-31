#include "Operation5.h"



Operation5::Operation5()
{
}


Operation5::~Operation5()
{
}

bool Operation5::effectuerOperation(Dechet * dechet)
{
	if (dechet->getMateriel() == Dechet::Materiel::VEGETAL)
		return true;
	return false;
}
