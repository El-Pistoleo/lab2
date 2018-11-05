#pragma once
#ifndef OPERATION4_H
#define OPERATION4_H

#include "Operation.h"
#include "Compteur.h"

class Operation4 :
	public Operation
{
public:
	Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation4();
	virtual bool effectuerOperation(Dechet* dechet);
};

#endif