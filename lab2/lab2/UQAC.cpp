#include "UQAC.h"

UQAC::UQAC()
{
}


UQAC::~UQAC()
{
}

ChargementDechet * UQAC::getChargementDechets()
{
	list<Dechet*>* listeDechets = new list<Dechet*>();

	for (int x = 0; x < 5; x++)
	{
		listeDechets->push_back(new PlanteVerte());
		listeDechets->push_back(new SacChips());
		listeDechets->push_back(new RestantNourriture());
		listeDechets->push_back(new QuelqueChose());
		listeDechets->push_back(new VerreCafe());
		listeDechets->push_back(new FeuillePapier());
		listeDechets->push_back(new BoiteCarton());
		listeDechets->push_back(new BouteilleBiere());
		listeDechets->push_back(new Chaise());
		listeDechets->push_back(new DechetMalConcu());
	}

}
