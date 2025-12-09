#pragma once
#include "Vecihle.h"
#include <iostream>
using namespace std;
class Truck: public Vecihle
{
	double load;
	double max_load;
	double petrol = 0;
	double max_petrol;
public:
	Truck(double l, double mxl, double p, double mxp);
	Truck() = default;
	double getCurrentLoad();
	double getMaxLoad();
	void arrive();
	bool leave();
};

