#pragma once
#include <iostream>
#include "Pos.h"
class Squ :
    public virtual Pos
{
protected:
    double len;
    double pl;
public:
    Squ();
    Squ(double a);
    Squ(double l, double a, double b);
    double Perimeter();
    double Area();
    void printS();
};


