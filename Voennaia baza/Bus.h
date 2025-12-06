#pragma once
#include <iostream>
#include "Vecihle.h"
using namespace std;
class Bus :public Vecihle
{
	int people;
	int max_people;
	double petrol;
	double max_petrol;
public:
	int getPeopleCount();
	int getMaxPeople();
	void arrive();
	bool leave();
};

