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

    cout << docA.dealCard() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
