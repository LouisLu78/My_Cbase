#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards()
{
    Card temp;
    for (int i = 0; i < 13; i++){
        for (int j = 0; j < 4; j++){
            string sf = temp.sface[i];
            string ss = temp.ssuit[j];
            deck.push_back(temp.toString(sf, ss));
        }
    }

    currentCard = 0;
}

void DeckOfCards::shuffle()
{
    for (int i = 0; i <1000; i++){
        int m = rand() % 52;
        int n = rand() % 52;
        string temp;
        if (m != n){
            temp = deck[m];
            deck[m] = deck[n];
            deck[n] = temp;
        }
    }
}

string &DeckOfCards::dealCard()
{
    return deck[currentCard++];
}

bool DeckOfCards::moreCards()
{
    return (currentCard < 52);
}
