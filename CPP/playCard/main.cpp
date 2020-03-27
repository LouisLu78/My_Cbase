#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
    srand(time(NULL));

    int counter = 0;
    DeckOfCards docA;
    docA.shuffle();

    while (docA.moreCards())
    {
        cout << left << setw(20) << docA.dealCard();
        counter++;
        if (counter % 5 == 0){
            cout << endl;
        }
    }

    cout << "I solved the question!" << endl;
    return 0;
}
