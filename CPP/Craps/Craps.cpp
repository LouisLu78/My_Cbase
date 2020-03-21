#include <iomanip>
#include <cstdlib>
#include "Craps.h"

using namespace std;

int doubleDice()
{
    int n = 1 + rand() % 6;
    int m = 1 + rand() % 6;
    return n + m;
}

Craps::Craps(int balance, int wagerOfPlay)
{
    bankBalance = balance;
    wager = wagerOfPlay;
}

bool Craps::isWin()
{
    int sum = doubleDice();
    if (sum == 7 || sum == 11){
        return true;
    }
    else if (sum == 2 || sum == 3 || sum == 12){
        return false;
    }
    else{
        int myPoint = sum;
        sum = doubleDice();
        while (myPoint != sum){
            if (sum == 7){
                return false;
            }
            sum = doubleDice();
        }
        return true;
    }
}

void Craps::gamble()
{
    if(isWin()){
        bankBalance += wager;
    }
    if(!isWin()){
        bankBalance -= wager;
    }
}

int Craps::getBalance() const
{
    return bankBalance;
}

bool Craps::isZero()
{
    return bankBalance <= 0;
}
