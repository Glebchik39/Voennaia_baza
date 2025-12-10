#include "Base.h"
#include <iostream>
using namespace std;

void Base::Print()
{
	cout << "Initially based on: \n";
	cout << "people on base: " << people_on_base << endl;
	cout << "vehicles on base: " << vehicles_on_base << endl;
	cout << "petrol on base: " << petrol_on_base << endl;
	cout << "goods on base: " << goods_on_base << endl;
}



void Base::arrive()
{
	int choice;
	cout << "please enter what arrived at the base: \n";
	cout << "1. Bus" << endl;
	cout << "2. Truck" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Reinforcements have arrived" << endl;
		people_on_base += 120;
		vehicles_on_base += 1.0;
	}
	else if (choice == 2)
	{
		cout << "Cargo and gasoline arrived at the base" << endl;
		vehicles_on_base += 1;
		goods_on_base += 15.0;
		petrol_on_base += 60.0;
	}
	else
	{
		cout << "Ok" << endl;
	}
}

bool Base::leave()
{
	int choice = 0;
	cout << "Which transport is leaving the base?: 1-Bus 2 - Truck";
	if (choice == 1)
	{
		cout << "Bus leaving" << endl;
		vehicles_on_base -= 1;
		people_on_base -= 60;

		return true;
	}
	if (choice == 2)
	{
		cout << "Truck leaving" << endl;
		vehicles_on_base -= 1;
		goods_on_base -= 15.0;
		petrol_on_base -= 60.0;
		return true;
	}
	else
	{
		return false;
	}
}






