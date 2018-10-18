#pragma once
#include "UsineTraitement.h"

class CreationDechetTraiteCompostable
{
public:
	CreationDechetTraiteCompostable();
	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteCompostable();
	bool effectuerOperation(Dechet* dechet);
};

