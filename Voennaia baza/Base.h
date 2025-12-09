#pragma once
#include "Vecihle.h"
#include <iostream>
using namespace std;
class Base : public Vecihle
{
private:
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	//static void Init();
	//static void Print();
	void arrive();
    bool leave();
};

