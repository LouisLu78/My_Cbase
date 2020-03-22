#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Craps.h"

using namespace std;

int main()
{
    srand(time(NULL));

    int counter = 0;
    Craps Donald;
    while(!Donald.isZero())
    {
        Donald.gamble();

        cout << "Your bank of balance is updated. You have " << Donald.getBalance()
             << "USD now." << endl;
        counter++;
        if (counter == 100)
        {
            cout << "You have played too much and you need to take a rest now." << endl;
            break;
        }
    }
    if(Donald.isZero())
    {
        cout << "You have been bankrupted and you have to quit the gamble.\
            \nWe wish you to have a better luck next time!" << endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
