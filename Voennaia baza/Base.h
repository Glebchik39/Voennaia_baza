#pragma once
#include "Vecihle.h"
#include <iostream>
using namespace std;
class Base : public Vecihle
{
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	void Init();
	void Print();
	virtual void arrive() { cout << "Base"; };
	virtual bool leave() { cout << "Leave Base"; };
};

