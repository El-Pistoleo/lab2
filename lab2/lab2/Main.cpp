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
	GenerateurSequenceOperation gso;

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