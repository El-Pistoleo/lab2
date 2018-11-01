#include "CreationDechetTraiteRecyclable.h"



bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet * dechet)
{
	creerDechetTraiteNonRecyclable(dechet);
	return true;
}