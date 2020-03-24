#include <iostream>
#include <cstdlib>
#include "Hare.h"

using namespace std;

int getNumber()
{
    return 1 + rand() % 10;
}

Hare::Hare(int site)
{
    pos = (site < 1) ? 1 : site;
}

void Hare::sleep()
{
    pos += 0;
}

void Hare::bigLeap()
{
    pos += 9;
}

void Hare::severeSlip()
{
    pos -= 12;
    if(pos < 1){
        pos = 1;
    }
}

void Hare::smallJump()
{
    ++pos;
}

void Hare::slightSlip()
{
    pos -= 2;
    if(pos < 1){
        pos = 1;
    }
}

void Hare::race()
{
    int n = getNumber();
    if (n == 1 || n == 2){
        sleep();
    }
    else if (n == 3 || n == 4){
        bigLeap();
    }
    else if (n == 5){
        severeSlip();
    }
    else if (n > 5 && n <=8){
        smallJump();
    }
    else{
        slightSlip();
    }
}

int Hare::getPosition()
{
    return pos;
}
