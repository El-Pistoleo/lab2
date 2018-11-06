#include "UsineTraitement.h"

UsineTraitement::UsineTraitement()
{
	Compteur::ajouterConstructeur();

	camionVert = new CamionVert(40);
	camionBleu = new CamionBleu(20);
	camionBrun = new CamionBrun(50);
}


UsineTraitement::~UsineTraitement()
{
	Compteur::ajouterDestructeur();
}

void UsineTraitement::chargerOperations(SequenceOperations* _sequenceOperations)
{
	sequenceOperations = _sequenceOperations;
}

void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	Dechet* dechet;
	while ((dechet = chargement->getDechet()) != NULL)
	{
		traiterDechet(dechet);
	}
	this->camionBleu->viderCamion();
	this->camionBrun->viderCamion();
	this->camionVert->viderCamion();

	delete chargement;
}

void UsineTraitement::preOperation()
{
	Log log;
	log.i("PREOPERATION");
}
void UsineTraitement::postOperation()
{
	Log log;
	log.i("POSTOPERATION");
}
void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	Log log;
	int poids;
	if (camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet))
	{
		log.i("AJOUT DTR " + std::to_string(dechet->getId()));
	}
	else
	{
		poids = camionBleu->viderCamion();
		camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet);
		log.i("AJOUT DTR" + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	Log log;
	int poids;
	if (camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet))
	{
		log.i("AJOUT DTNR " + std::to_string(dechet->getId()));
	}
	else
	{
		poids = camionVert->viderCamion();
		camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet);
		log.i("AJOUT DTNR " + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	Log log;
	int poids;
	if (camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet))
	{
		log.i("AJOUT DTC" + std::to_string(dechet->getId()));
	}
	else
	{
		poids = camionBrun->viderCamion();
		log.i("Camion brun vide de " + std::to_string(poids) + "kg");
		camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet);
		log.i("AJOUT DTC " + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::traiterDechet(Dechet* dechet)
{
	Operation* operation = sequenceOperations->getOperationDemarage();
	bool resultat;
	std::cout << "ID Dechet " << dechet->getId() << std::endl;
	preOperation();
	do
	{
		resultat = operation->effectuerOperation(dechet);
		operation = operation->getOperationSuivante(resultat);
	} while (operation != NULL);
	postOperation();
	std::cout << std::endl;
}

UsineTraitement::Log::Log()
{
	Compteur::ajouterConstructeur();
}

UsineTraitement::Log::~Log()
{
	Compteur::ajouterDestructeur();
}
