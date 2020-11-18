#include "dikdortgen.h"

dikdortgen::dikdortgen()
{
	P1.setX(0);
	P1.setY(0);
	P2.setX(0);
	P2.setY(0);
}

dikdortgen::dikdortgen(nokta P1, nokta P2)
{
	this->P1 = P1;
	// this->P1.setX(P1.getX());
	// this->P1.setY(P1.getY());
	this->P2 = P2;
}

dikdortgen::~dikdortgen()
{
}

nokta dikdortgen::getP1() const
{
	return P1;
}

void dikdortgen::setP1(nokta P1)
{
	this->P1 = P1;
}

nokta dikdortgen::getP2() const
{
	return P2;
}

void dikdortgen::setP2(nokta)
{
	this->P2 = P2;
}

void dikdortgen::boyutlandirma(int x, int y)
{
	P2.setX(P1.getX() + x);
	P2.setY(P1.getY() + y);
}

bool dikdortgen::kapsama(nokta P)
{
	bool kucukXMi = (P.getX() < P1.getX() && P.getX() < P2.getX());
	bool buyukXMi = (P.getX() > P1.getX() && P.getX() > P2.getX());
	bool kucukYMi = (P.getY() < P1.getY() && P.getY() < P2.getY());
	bool buyukYMi = (P.getY() > P1.getY() && P.getY() > P2.getY());
	if (kucukXMi || kucukYMi || buyukXMi || buyukYMi)
		return false;
	return true;
}
