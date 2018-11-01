#include "Operation.h"



Operation::Operation()
{
}

Operation::Operation(Operation * operationSuivanteTrue, Operation * operationSuivanteFalse)
{
	this->operationSuivanteTrue = operationSuivanteTrue;
	this->operationSuivanteFalse = operationSuivanteFalse;
}


Operation::~Operation()
{
}

bool Operation::effectuerOperation(Dechet* dechet)
{
	return true;
}

Operation * Operation::getOperationSuivante(bool choix)
{
	if (choix)

		return this->operationSuivanteTrue;

	return this->operationSuivanteFalse;


}
