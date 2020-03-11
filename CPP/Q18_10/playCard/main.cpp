#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
    srand(time(NULL));

    DeckOfCards docA;
    docA.shuffle();

    while (docA.moreCards())
    {
        cout << docA.dealCard() << endl;
    }

    cout << "I solved the question!" << endl;
    return 0;
}
