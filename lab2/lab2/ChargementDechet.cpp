#include "ChargementDechet.h"



ChargementDechet::ChargementDechet()
{
}


ChargementDechet::~ChargementDechet()
{
}

Dechet * ChargementDechet::getDechet()
{
	Dechet(1, "un paquet de chips", 0, "rouge",Dechet::Materiel (7), 20, 0,0);
}
