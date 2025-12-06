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
    people += 10;
}




