#include "Heure.h"
#include<iostream>
#include<assert.h>
using namespace Horaire;
using namespace std;
Heure::Heure(int h, int m, int s)
{
	assert((h > 0) && (h < 24));
	assert((m > 0 && m < 60));
	assert((s > 0 && s < 60));

	this->heure = h;
	this->munite = m;
	this->seconde = s;
}

Horaire::Heure::Heure(const Heure& H)
{
	this->heure = H.heure;
	this->munite = H.munite;
	this->seconde = H.seconde;
}

void Horaire::Heure::printHeure() const
{
	cout << this->heure << " : " << this->munite << " : " << this->seconde << endl;
}

Heure& Horaire::Heure::operator=(const Heure& H)
{
	if (this != &H)
	{
		this->heure = H.heure;
		this->munite = H.munite;
		this->seconde = H.seconde;
	}
	return *this;
}

bool Horaire::Heure::operator>(const Heure& H) const
{
	if (this->heure > H.heure)return true;
	if (this->heure == H.heure)
	{
		if (this->munite > H.munite)return true;
		if (this->seconde >= H.seconde)return true;
		//return false;
	}
	//if (this->heure < H.heure) return false;
	return false;
}
