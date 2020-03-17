#include <iostream>
#include <string>
#include "Parking.h"

using namespace std;

Parking::Parking(string &numberOfCar, int tOfParking, double fee)
{
    carNumber = numberOfCar;
    parkingTime = tOfParking;
    charge = fee;
}

double Parking::calculateCharges()
{
    if (parkingTime <= 3 && parkingTime > 0){
        charge = 2.00;
    }
    else{
        charge = 2.00 + (parkingTime - 3) * 0.5;
    }

    if(parkingTime <= 24 && charge > 10){
        charge = 10.0;
    }

    return charge;
}

void Parking::print()
{
    cout << fixed() << setprecision(2);
    cout << "The car number is: " << carNumber << endl;
    cout << "The parking time is: " << parkingTime << endl;
    cout << "The charge is: " << charge << " USD." << endl;
}
