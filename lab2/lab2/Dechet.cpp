#include "Dechet.h"



Dechet::Dechet()
{
}


Dechet::~Dechet()
{
}

ostream& operator<< (ostream& out, const Dechet& dechet)
{
	out << "--------------------------------" << endl
		<< "id             :" << dechet.id << endl <<
		"poids          :" << dechet.poids << endl <<
		"description    :" << dechet.description << endl <<
		"type           :" << dechet.type << endl <<
		"couleur        :" << dechet.couleur << endl <<
		"materiel       :" << dechet.materiel << endl <<
		"purete         :" << dechet.purete << endl <<
		"styromousse    :" << dechet.styromousse << endl <<
		"rigide         :" << dechet.rigide << endl;
}