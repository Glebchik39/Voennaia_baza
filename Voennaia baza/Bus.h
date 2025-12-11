#pragma once
#include <iostream>
#include "Vecihle.h"
using namespace std;
class Bus :public Vecihle
{
	int people;
	int max_people = 65;
	double petrol;
	double max_petrol = 80.0;
public:
	int getPeopleCount();
	int getMaxPeople();
	void arrive();
	bool leave();
};

