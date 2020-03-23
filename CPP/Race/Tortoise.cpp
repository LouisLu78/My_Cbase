#include <iostream>
#include <cstdlib>
#include "Tortoise.h"

using namespace std;



Tortoise::Tortoise(int site)
{
    pos = (site < 1) ? 1 : site;
}

void Tortoise::fastCrawl()
{
    pos += 3;
}

void Tortoise::slip()
{
    pos -= 6;
}

void Tortoise::slowCrawl()
{
    ++pos;
}

void Tortoise::race()
{
    int n = getNumber();

    if (n >= 1 && n <=5){
        fastCrawl();
    }
    else if (n == 6 || n == 7){
        slip();
    }
    else{
        slowCrawl();
    }
}

int Tortoise::getPosition()
{
    return pos;
}
