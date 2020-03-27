#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "DeckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards()
{

    for (int i = 0; i < 13; i++){
        for (int j = 0; j < 4; j++){
            deck.push_back(Card::toString(Card::sface[i], Card::ssuit[j]));
        }
    }

    currentCard = 0;
}

void DeckOfCards::shuffle()
{
    for (int i = 0; i <10000; i++){
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

string DeckOfCards::dealCard()
{
    string temp = deck[currentCard];
    currentCard++;
    return temp;
}

bool DeckOfCards::moreCards()
{
    return (currentCard < 52);
}
