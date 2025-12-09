#include "Vecihle.h"
#include <iostream>
using namespace std;

Vecihle::Vecihle(double p, double t)
{
    petrol_amount = p;
    tank_volume = t;
}

void Vecihle::Init()
{
    cout << "eeeeee";
}

void Vecihle::Print()
{
    cout << "fgfggfgfgfgfg" << endl;
}

double Vecihle::getTankVolume()
{
    return tank_volume;
}

double Vecihle::getPetrolAmount()
{
    return petrol_amount;
}
