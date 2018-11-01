#include "Operation4.h"



bool Operation4::effectuerOperation(Dechet * dechet)
{
	if (dechet->getMateriel() == Dechet::Materiel::NOURRITURE)
		return true;
	return false;
}
