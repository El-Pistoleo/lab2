#include "UQAC.h"



UQAC::UQAC()
{
	Compteur::ajouterConstructeur();
}


UQAC::~UQAC()
{
	Compteur::ajouterDestructeur();
}

ChargementDechet * UQAC::getChargementDechets()
{
	std::list<Dechet*> listeDechet;
	for (int i = 0; i < 10; i++)
	{
		Dechet* dechet1 = new Dechet(20, "Quelques choses", 0, "inconnu", Dechet::Materiel::INCONNU, 10, false, false);
		Dechet* dechet2 = new Dechet(79, "Une Boite de Carton", 0, "brun", Dechet::Materiel::CARTON, 70, false, false);
		Dechet* dechet3 = new Dechet(15, "Une chaise", 2, "vert", Dechet::Materiel::BOIS, 80, false, true);
		Dechet* dechet4 = new Dechet(70, "Dechet mal consu", 0, "Inconnu", Dechet::Materiel::INCONNU, 10, false, true);
		Dechet* dechet5 = new Dechet(23, "styromoaf", 0, "vert", Dechet::Materiel::STYROMOAF, 88, true, false);


		listeDechet.push_back(dechet1);
		listeDechet.push_back(dechet2);
		listeDechet.push_back(dechet3);
		listeDechet.push_back(dechet4);
		listeDechet.push_back(dechet5);
	}

	ChargementDechet* chargementDechet = new ChargementDechet(&listeDechet);

	return chargementDechet;
}