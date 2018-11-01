#include "Operation1.h"



bool Operation1::effectuerOperation(Dechet* dechet)
{
	if(dechet->estRigide() || dechet->estEnStyromousse())
		return true;
	return false;
}
