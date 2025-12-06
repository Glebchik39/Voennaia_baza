#pragma once
class Base
{
protected:
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	Base() {};
	static void Print();
	static void Init();
};

