#include <iostream>
#include "Vecihle.h"
#include "Truck.h"
#include "Bus.h"
#include "Base.h"
using namespace std;

int main()
{
	Vecihle* vecihle = nullptr;
	int choice = 0;

	cout << "Welcome to BASE NATO!!!!!!" << endl;
	cout << "Please make your choice about your transport: " << endl;
	cout << "1. Bus" << endl;
	cout << "1. Truck" << endl;
	cout << "3. Check Base" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		vecihle = new Bus;
		vecihle->arrive();
	case 2:
		vecihle = new Truck;
		vecihle->arrive();
	case 3:
		vecihle = new Base;
		vecihle->arrive();
		vecihle->leave();
		//vecihle->Init();
		//vecihle->Print();
	}
}