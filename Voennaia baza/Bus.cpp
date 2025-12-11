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
    //cout << "Bus pribul" << endl;
    //people -= 120;
    //petrol -= 20.0;
    //max_petrol -= 20.0;
    //cout << "Pribulo na bazu people: " << people << endl;

    int resultPeople;
    int resultPetrol;
    cout << "arrive base NATO" << endl;
    cout << "Enter a count people in bus: " << endl;
    cin >> people;
    cout << "Enter a count petrol: " << endl;
    cin >> petrol;
    resultPeople = max_people - people;
    resultPetrol = max_petrol - petrol;

    if (petrol > max_petrol || people > max_people)
    {
        cout << "error";
    }

    cout << "Arrive to base NATO people: " << people << endl;
    cout << "how many seats are left on the bus: " << resultPeople << endl;
    cout << "how much did you fill up: " << petrol << endl;
    cout << "that's how much you have left: " << resultPetrol << endl;

}

bool Bus::leave()
{
    int resultPeople;
    int resultPetrol;
    cout << "leave base NATO" << endl;
    cout << "Enter a count people in bus: " << endl;
    cin >> people;
    cout << "Enter a count petrol: " << endl;
    cin >> petrol;
    resultPeople = max_people - people;
    resultPetrol = max_petrol - petrol;

    if (petrol > max_petrol || people > max_people)
    {
        cout << "error";
        return 0;
    }

    cout << "Pokinulo bazu people: " << people << endl;
    cout << "how many seats are left on the bus: " << resultPeople << endl;
    cout << "how much did you fill up: " << petrol << endl;
    cout << "that's how much you have left: " << resultPetrol << endl;


    return false;
}




