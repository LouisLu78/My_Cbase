#ifndef HARE_H_INCLUDED
#define HARE_H_INCLUDED

#include <iostream>

using namespace std;

int getNumber();

class Hare
{
private:
    int pos;

public:
    Hare(int = 1);
    void sleep();
    void bigLeap();
    void severeSlip();
    void smallJump();
    void slightSlip();
    void race();
    int getPosition();

};

#endif // HARE_H_INCLUDED
