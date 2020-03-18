#include <iostream>
#include <string>
#include <cmath>
#include "Parking.h"

using namespace std;

Parking::Parking(const string &numberOfCar, double tOfParking)
{
    carNumber = numberOfCar;
    parkingTime = tOfParking;
}

double Parking::calculateCharges()
{
    double charge;

    if (parkingTime <= 3 && parkingTime > 0)
    {
        charge = 2.00;
    }
    else
    {
        charge = 2.00 + ceil((parkingTime - 3)) * 0.5;
    }

    if(parkingTime <= 24 && charge > 10)
    {
        charge = 10.0;
    }

    return charge;
}

void Parking::print()
{
    cout << "The car number is: " << carNumber << endl;
    cout << "The parking time is: " << parkingTime << endl;
    cout << "The charge is: " << calculateCharges() << " USD." << endl;
    cout << endl;
}
