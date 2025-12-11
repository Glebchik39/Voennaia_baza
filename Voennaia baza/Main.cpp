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
	cout << "2. Truck" << endl;
	cout << "3. Check Base" << endl;
	cout << "4. Exit" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		vecihle = new Bus;
		int choiceBus;
		cout << "Enter you leaving or arrive?: 1-leaving, 2- arrive";
		cin >> choiceBus;
		if (choiceBus == 1)
		{
			vecihle->leave();
		}
		if (choiceBus == 2)
		{
			vecihle->arrive();
		}
		//vecihle->arrive();
		break;
	case 2:
		vecihle = new Truck;
		vecihle->arrive();
		break;
	case 3:
	
		vecihle = new Base;
		int baseChoice;
		cout << "Enter your vechiles leave or arrive to base?: 1- arrive, 2- leave" << endl;
		cin >> baseChoice;
		if (baseChoice == 1)
		{
			vecihle->arrive();
		}
		else if (baseChoice == 2)
		{
			vecihle->leave();
		}

		/*vecihle->arrive();*/
		//vecihle->leave();
		vecihle->Print();
		break;
	
	case 4:
		cout << "Exit";
		break;

	}
}