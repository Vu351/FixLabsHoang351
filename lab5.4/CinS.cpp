#include "CinS.h"
using std::cout;
using std::cin;
using std::endl;

CinS::CinS()
{
	this->mx = 0;
	this->my = 0;
}

CinS::CinS(double r, double l)
{
	rad = r;
	len = l;
	pl = l / 2;
}

void CinS::size(double r, double l)
{
	if (x + mx + r > x + l / 2 || x - mx - r<x - l / 2 || y + my + r>y + l / 2 || y - my - r < y - l / 2) {
		cout << "false\n";
	}
	else {
		rad = r;
		len = l;
		pl = l / 2;
	}
	return;
}

void CinS::move(double a, double b)
{
	x = a;
	y = b;
}

void CinS::move(double a, double b, double ma, double mb)
{
	if (a + ma + rad > a + pl || a - ma - rad<a - pl || b + mb + rad>b + pl || b - mb - rad < b - pl) {
		cout << "false\n";
	}
	else {
		mx = ma;
		my = mb;
		x = a;
		y = b;
	}
	return;
}

double CinS::gmx()
{
	return mx;
}

double CinS::gmy()
{
	return my;
}

void CinS::print()
{
	cout << endl;
	printC(mx, my);
	printS();
	cout << endl;
	return;
}



