#ifndef TORTOISE_H_INCLUDED
#define TORTOISE_H_INCLUDED
#include <iostream>

using namespace std;

int getNumber();

class Tortoise
{
private:
    int pos;

public:
    Tortoise(int = 1);
    void fastCrawl();
    void slip();
    void slowCrawl();
    void race();
    int getPosition();
};


#endif // TORTOISE_H_INCLUDED
