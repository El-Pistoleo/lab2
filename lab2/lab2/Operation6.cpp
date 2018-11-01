#include "Operation6.h"

bool Operation6::effectuerOperation(Dechet * dechet)
{
	if (dechet->getType() == 0 || dechet->getType() == 6)
		return true;
	return false;
}
