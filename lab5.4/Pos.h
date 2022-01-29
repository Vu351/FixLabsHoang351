#pragma once
class Pos
{
protected:
	double x;
	double y;
public:
	Pos();
	Pos(double a, double b);
	void move(double a, double b);
};

