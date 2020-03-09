#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

Card::Card(int cardSort, int cardFlower)
        :face(cardSort), suit(cardFlower)
{
    string sface[face] = {"A", "2", "3", "4", "5",
                        "6", "7", "8", "9", "10", "J", "Q", "K"};
    string ssuit[suit] = {"Heart", "Diamond", "Club", "Spade"};
}

string Card::toString(string&a, string&b) const
{
    string s;

    s = a + " of " + b;
    return s;
}
