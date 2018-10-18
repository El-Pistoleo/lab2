#pragma once
#include "Dechet.h"
class DechetTraite
{
public:
	DechetTraite();
	~DechetTraite();
	Dechet*  getDechet()  const;

protected:
	Dechet* : dechet;
};