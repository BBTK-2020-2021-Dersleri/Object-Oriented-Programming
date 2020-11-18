#pragma once
#include"nokta.h"
class dikdortgen
{
public:
	dikdortgen();
	dikdortgen(nokta, nokta);
	~dikdortgen();
	nokta getP1() const;
	void setP1(nokta);
	nokta getP2() const;
	void setP2(nokta);
	void boyutlandirma(int, int);
	bool kapsama(nokta);
private:
	nokta P1;
	nokta P2;
};



