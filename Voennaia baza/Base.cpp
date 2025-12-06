#include "Base.h"
#include <iostream>
using namespace std;

void Base::Print()
{
	cout << "people on base: " << people_on_base << endl;
	cout << "vehicles on base: " << vehicles_on_base << endl;
	cout << "petrol on base: " << petrol_on_base << endl;
	cout << "goods on base: " << goods_on_base << endl;
}

void Base::Init()
{
	cout << "Enter a people on base: ";
	cin >> people_on_base;
	cout << "Vehicles on base: ";
	cin >> vehicles_on_base;
	cout << "Enter a petrol on base: ";
	cin >> petrol_on_base;
	cout << "Enter a goods on base: ";
	cin >> goods_on_base;
}
