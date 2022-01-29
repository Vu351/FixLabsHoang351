
#include "Cir.h"

Cir::Cir()
{
	this->rad = 1;
}

Cir::Cir(double r)
{
	this->rad = r;
}

Cir::Cir(double r, double a, double b)
{
	Pos::x = a;
	Pos::y = b;
	this->rad = r;
}

double Cir::Perimeter()
{
	return 2 * 3.14 * rad;
}

double Cir::Area()
{
	return 3.14 * rad * rad;
}

void Cir::printC(double a, double b)
{
	std::cout << "Circle radius:\t" << this->rad << "\tposition:\t" << Pos::x + a << " " << Pos::y + b << std::endl;
	return;
}

