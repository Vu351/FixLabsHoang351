#pragma once
#include "Cir.h"
#include "Squ.h"

class CinS :
    public Cir, public Squ
{
private:
    double mx;
    double my;
public:
    CinS();
    CinS(double r, double l);
    void size(double r, double l);
    void move(double a, double b);
    void move(double a, double b, double ma, double mb);
    double gmx();
    double gmy();
    void print();
};

