#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Card
{
friend class DeckOfCards;

private:
    const int face;
    const int suit;
    static string sface[];
    static string ssuit[];
public:
    Card(int =13 , int = 4);

    static string toString(string&, string&);

};

#endif // CARD_H_INCLUDED