#ifndef PARKING_H_INCLUDED
#define PARKING_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Parking
{
private:
    string carNumber;
    double parkingTime;

public:
    Parking(const string &, double);
    double calculateCharges();
    void print();
};


#endif // PARKING_H_INCLUDED
