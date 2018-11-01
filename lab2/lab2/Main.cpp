#pragma once
#include <iostream>
#include <ostream>
#include <string>
#include "ChargementDechet.h"
#include "UQAC.h"
#include "UsineTraitement.h"
#include "GenerateurSequenceOperations.h"
#include "Compteur.h"

void afficherInformation();
void laboratoire2();

int main()
{
	laboratoire2();
	afficherInformation();

	return 0;
}


void laboratoire2()
{
	ChargementDechet* chargement = UQAC::getChargementDechets();
	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperations gso;

	usineTraitement->chargerOperations(gso.genererSequence(0, usineTraitement));
	usineTraitement->demarrerTraitements(chargement);

	delete usineTraitement;
}

void afficherInformation()
{
	cout << endl << endl;
	cout << endl << "-------------------------------" << endl
		<< " NB constructeurs : " << Compteur::getNbConstructeurs() << endl
		<< " NB destructeurs  : " << Compteur::getNbDestructeurs() << endl;
	cin.get();
}