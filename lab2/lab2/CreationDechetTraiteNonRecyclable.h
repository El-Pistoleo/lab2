#pragma once
#include "UsineTraitement.h"

class CreationDechetTraiteNonRecyclable
{
public:
	CreationDechetTraiteNonRecyclable();
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteNonRecyclable();
	bool effectuerOperation(Dechet* dechet);
};