#pragma once
#ifndef DECHETTRAITERECYCLABLE_H
#define DECHETTRAITERECYCLABLE_H

#include "DechetTraite.h"
#include "Compteur.h"

class DechetTraiteRecyclable :
	public DechetTraite
{
public:
	DechetTraiteRecyclable(Dechet* _dechet);
	~DechetTraiteRecyclable();
};

#endif