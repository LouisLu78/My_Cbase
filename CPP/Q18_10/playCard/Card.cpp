#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

string Card::sface[] = {"A", "2", "3", "4", "5",
                        "6", "7", "8", "9", "10", "J", "Q", "K"};

string Card::ssuit[] = {"Heart", "Diamond", "Club", "Spade"};

Card::Card(int cardSort, int cardFlower)
        :face(cardSort), suit(cardFlower)
{

}

string Card::toString(string&a, string&b)
{
    string s;

    s = a + " of " + b;
    return s;
}
