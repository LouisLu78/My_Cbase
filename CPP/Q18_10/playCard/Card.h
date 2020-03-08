#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
    int face;
    int suit;

public:
    Card(int, int);
    string sface[];
    string ssuit[];
    string &toString() const;

};



#endif // CARD_H_INCLUDED
