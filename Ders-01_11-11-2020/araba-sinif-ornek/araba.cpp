#include "araba.h"

araba::araba(string marka, string renk, int hiz, bool sunRoof)
{
	this->marka = marka;
	this->renk = renk;
	this->hiz = hiz;
	this->sunRoof = sunRoof;
}

araba::araba(string marka, string renk, int hiz)
{
	this->marka = marka;
	this->renk = renk;
	this->hiz = hiz;
}

string araba::getMarka()
{
	return this->marka;
}

string araba::getRenk() const
{
	return renk;
}

void araba::setRenk(string renk)
{
	this->renk = renk;
}

int araba::getHiz() const
{
	return hiz;
}

bool araba::getSunRoof()
{
	return sunRoof;
}

void araba::setSunRoof(bool sunRoof)
{
	this->sunRoof = sunRoof;
}

void araba::fren()
{
	if (hiz - 10 > 0) {
		hiz -= 10;
	}
	else if (hiz <= 10)
	{
		hiz = 0;
	}
}

void araba::gaz()
{
	if (hiz + 10 < hizKilitSiniri) {
		hiz += 10;
	}
	else
	{
		hiz = hiz;
	}
}
