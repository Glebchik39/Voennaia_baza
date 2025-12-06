#include "Vecihle.h"
#include <iostream>
using namespace std;

Vecihle::Vecihle(double p, double t)
{
    petrol_amount = p;
    tank_volume = t;
}

//Vecihle::Print()
//{
//    cout << "Petrol amount: " << petrol_amount << endl;
//    cout << "Tank volume: " <
//}

double Vecihle::getTankVolume()
{
    return tank_volume;
}

double Vecihle::getPetrolAmount()
{
    return petrol_amount;
}
