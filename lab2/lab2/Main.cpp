#include <iostream>
#include "UQAC.h"
#include "GenerateurSequenceOperations.h"

using namespace std;

int Dechet::idCourant = 0;
int Dechet::memoire = 0;

void afficherInformation()
{
	cout << endl << endl;
	cout << endl << "-------------------------------" << endl
		<< " NB constructeurs : " << Compteur::getNbConstructeurs() << endl
		<< " NB destructeurs  : " << Compteur::getNbDestructeurs() << endl;
	cin.get();
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
int main()
{
	int i;
	laboratoire2();
	afficherInformation();
	return 0;
}