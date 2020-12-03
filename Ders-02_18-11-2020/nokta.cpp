#include "nokta.h"

nokta::nokta()
{
}

nokta::nokta(int x, int y)
{
	if (0 < x && x < 100)
	{
		this->x = x;
	}
	setY(y);
}

nokta::~nokta()
{
}

int nokta::getX() const
{
	return x;
}

void nokta::setX(int x)
{
	if (0 < x && x < 100)
	{
		this->x = x;
	}
}

int nokta::getY() const
{
	return y;
}

void nokta::setY(int y)
{
	if (0 < y && y < 200)
	{
		this->y = y;
	}
}
