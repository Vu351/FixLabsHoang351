#include "Pos.h"

Pos::Pos()
{
	this->x = 0;
	this->y = 0;
}

Pos::Pos(double a, double b)
{
	this->x = a;
	this->y = b;
}

void Pos::move(double a, double b)
{
	this->x += a;
	this->y += b;
	return;
}
