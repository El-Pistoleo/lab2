#pragma once
#include "UsineTraitement.h"
class OperationTraitement
{
public:
	OperationTraitement();
	OperationTraitement(UsineTraitement* usineTraitement);
	~OperationTraitement();
	bool effectuerOperation(Dechet* dechet);

protected:
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);

private:
	UsineTraitement* usineTraitement;
};

