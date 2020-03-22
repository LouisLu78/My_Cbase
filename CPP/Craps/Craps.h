#ifndef CRAPS_H_INCLUDED
#define CRAPS_H_INCLUDED

#include <iostream>

using namespace std;

int doubleDice();

class Craps
{
private:
    int bankBalance;
    int wager;
    bool isWin();

public:
    Craps(int = 1000, int = 150);

    void gamble();
    int getBalance() const;
    bool isZero();

};

#endif // CRAPS_H_INCLUDED
