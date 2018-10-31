#include "Operation4.h"



Operation4::Operation4()
{
}


Operation4::~Operation4()
{
}

bool Operation4::effectuerOperation(Dechet * dechet)
{
	if (dechet->getMateriel() == Dechet::Materiel::NOURRITURE)
		return true;
	return false;
}
