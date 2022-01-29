#include "Squ.h"

Squ::Squ() :Pos()
{
	this->len = 1;
}

Squ::Squ(double l)
{
	this->len = l;
	this->pl = len / 2;
}

Squ::Squ(double l, double a, double b) : Pos(a, b)
{
	this->len = l;
	pl = len / 2;
	x = a;
	y = b;
}

double Squ::Perimeter()
{
	return 4 * len;
}

double Squ::Area()
{
	return len * len;
}

void Squ::printS()
{
	std::cout << "Square radius:\t" << this->len << "\tposition:\t" << Pos::x << " " << Pos::y << std::endl;
	return;
}

