#pragma once
#include "Vecihle.h"
#include <iostream>
using namespace std;
class Truck: public Vecihle
{
	double load;
	double max_load;
	double petrol;
	double max_petrol;
public:
	Truck(double l, double mxl, double p, double mxp);
	double getCurrentLoad();
	double getMaxLoad();
	void arrive();
	bool leave();
};

