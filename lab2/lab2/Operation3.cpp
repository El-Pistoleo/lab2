#include "Operation3.h"



Operation3::Operation3()
{
}


Operation3::~Operation3()
{
}

bool Operation3::effectuerOperation(Dechet * dechet)
{
	if (dechet->getMateriel() == Dechet::Materiel::PAPIER || dechet->getMateriel() == Dechet::Materiel::CARTON)
		return true;
}
