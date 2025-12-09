#include "Truck.h"

Truck::Truck(double l, double mxl, double p, double mxp)
{
	load = l;
	max_load = mxl;
	petrol = p;
	max_petrol = mxp;
}

double Truck::getCurrentLoad()
{
	return load;
}

double Truck::getMaxLoad()
{
	return max_load;
}

void Truck::arrive()
{
	cout << "Pribul na bazu NATO TRUCK" << endl;
	petrol += 50.0;
	cout << "Na bazu pribulo petrol: " << petrol << endl;
}


bool Truck::leave()
{
	cout << "Leave BASE NATO";
	return false;
}
