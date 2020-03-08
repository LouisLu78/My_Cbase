#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class DeckOfCard
{
private:
    vector<string>deck;
    int currentCard;

public:
    DeckOfCard(vector<string>, int);
    void shuffle();
    string & dealCard();
    bool moreCards();
};



#endif // DECKOFCARDS_H_INCLUDED
