#include "Truck.h"

Truck::Truck(double l, double mxl, double p, double mxp)
{
	load = l;
	max_load = mxl;
	petrol = p;
	max_petrol = mxp;
}

double Truck::getCurrentLoad()
{
	return load;
}

double Truck::getMaxLoad()
{
	return max_load;
}

void Truck::arrive()
{
	double resultlLoad;
	double resultPetrol;
	cout << "Arrive to base NATO TRUCK" << endl;
	cout << "Enter how much cargo did you carry: " << endl;
	cin >> load;
	cout << "Enter a count petrol: " << endl;
	cin >> petrol;
	resultlLoad = max_load - load;
	resultPetrol = max_petrol - petrol;
	if (petrol > max_petrol || load > max_load)
	{
		cout << "error";
	}

	cout << "Arrive	to load base: " << load << endl;
	cout << "That's how much cargo space is left: " << resultlLoad;
	cout << "how much did you fill up: " << petrol << endl;
	cout << "that's how much you have left: " << resultPetrol << endl;
}


bool Truck::leave()
{

	double resultlLoad;
	double resultPetrol;
	cout << "Leave to base NATO TRUCK" << endl;
	cout << "Enter how much cargo did you carry: " << endl;
	cin >> load;
	cout << "Enter a count petrol: " << endl;
	cin >> petrol;
	resultlLoad = max_load - load;
	resultPetrol = max_petrol - petrol;

	if (petrol > max_petrol || load > max_load)
	{
		cout << "error";
	}

	cout << "Leave	to load base: " << load << endl;
	cout << "That's how much cargo space is left: " << resultlLoad;
	cout << "how much did you fill up: " << petrol << endl;
	cout << "that's how much you have left: " << resultPetrol << endl;
		
	return false;
}
