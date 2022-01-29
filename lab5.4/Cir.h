#pragma once
#include <iostream>
#include "Pos.h"

class Cir :
    public virtual  Pos
{
public:
    double rad;
    Cir();
    Cir(double r);
    Cir(double r, double a, double b);
    double Perimeter();
    double Area();
    void printC(double a, double b);
};

