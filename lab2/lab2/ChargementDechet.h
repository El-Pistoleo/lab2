#pragma once
class ChargementDechet
{
public:
	ChargementDechet();
	ChargementDechet(list<Dechet*>* listeDechets);
	~ChargementDechet();
	Dechet* getDechet();

private:
	Dechet* listeDechets;
};


