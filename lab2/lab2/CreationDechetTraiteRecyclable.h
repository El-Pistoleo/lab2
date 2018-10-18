#pragma once
#include "UsineTraitement.h"

class CreationDechetTraiteRecyclable
{
public:
	CreationDechetTraiteRecyclable();
	CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteRecyclable();
	bool effectuerOperation(Dechet* dechet);
};