#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

class DeckOfCards
{
private:
    vector<string>deck;
    int currentCard;

public:
    DeckOfCards();
    void shuffle();
    string dealCard();
    bool moreCards();
};

#endif // DECKOFCARDS_H_INCLUDED
