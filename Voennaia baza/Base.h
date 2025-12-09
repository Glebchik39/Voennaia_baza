#pragma once
#include "Vecihle.h"
#include "Truck.h"
#include <iostream>
using namespace std;
class Base : public Vecihle
{
public:
	 void Init();
	 void Print();
	void arrive();
    bool leave();
};

static int people_on_base = 50;
static int vehicles_on_base = 0;
static double petrol_on_base = 0.0;
static double goods_on_base = 0.0;

