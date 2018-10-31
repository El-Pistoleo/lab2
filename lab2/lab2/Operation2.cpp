#include "Operation2.h"



Operation2::Operation2()
{
}


Operation2::~Operation2()
{
}

bool Operation2::effectuerOperation(Dechet * dechet)
{
	if(dechet->getMateriel()== Dechet::Materiel::PLASTIQUE)
		return true;
	return false;
}
