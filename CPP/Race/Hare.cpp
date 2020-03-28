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

    pos = pos < 1 ? 1 : pos;
}

void Hare::smallJump()
{
    ++pos;
}

void Hare::slightSlip()
{
    pos -= 2;

    pos = pos < 1 ? 1 : pos;
}

void Hare::race()
{
    int n = getNumber();
    switch(n){
        case 1: case 2:
            sleep();
            break;

        case 3: case 4:
            bigLeap();
            break;

        case 5:
            severeSlip();
            break;

        case 6: case 7: case 8:
            smallJump();
            break;

        default:
            slightSlip();
            break;
            }
}

int Hare::getPosition()
{
    return pos;
}
