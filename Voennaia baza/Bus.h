#pragma once
#include <iostream>
#include "Vecihle.h"
using namespace std;
class Bus :public Vecihle
{
	int people = 0;
	int max_people = 0;
	double petrol = 0.0;
	double max_petrol = 0.0;
public:
	int getPeopleCount();
	int getMaxPeople();
	void arrive();
	bool leave();
};

