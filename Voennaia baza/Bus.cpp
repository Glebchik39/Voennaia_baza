#include "Bus.h"

int Bus::getPeopleCount()
{
    return people;
}

int Bus::getMaxPeople()
{
    return max_people;
}

void Bus::arrive()
{
    cout << "Bus pribul" << endl;
    people += 120;
    cout << "Pribulo na bazu people: " << people << endl;
}

bool Bus::leave()
{
    cout << "leave base NATO" << endl;
    people -= 120;
    cout << "Pokinulo bazu people: " << people << endl;
    return false;
}




