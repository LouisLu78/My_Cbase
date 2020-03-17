#ifndef PARKING_H_INCLUDED
#define PARKING_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Parking
{
private:
    string carNumber;
    int parkingTime;
    double charge;

public:
    Parking(string &, int, double = 0.0);
    double calculateCharges();
    void print();
};


#endif // PARKING_H_INCLUDED
