#pragma once
#include "Dechet.h"
class DechetTraite
{
public:
	DechetTraite(Dechet* dechet);
	DechetTraite();
	~DechetTraite();
	Dechet*  getDechet()  const;

protected:
	Dechet* dechet;
};