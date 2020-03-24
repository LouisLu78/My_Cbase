#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include "Hare.h"
#include "Tortoise.h"

using namespace std;

int main()
{
    const int LEN = 70;
    srand(time(NULL));
    Hare rabbit;
    Tortoise turtle;
    vector<string> ivec(LEN, " ");

    int racingTime = 0;
    cout << "BANG !!!!!" << endl;
    cout << "AND THEY ARE OFF !!!!!" << endl << endl;

    while(rabbit.getPosition() < LEN && turtle.getPosition() < LEN)
    {
        rabbit.race();
        turtle.race();
        if (rabbit.getPosition() != turtle.getPosition()){
            ivec[turtle.getPosition()] = "T";
            ivec[rabbit.getPosition()] = "H";
        }
        else{
            ivec[rabbit.getPosition()] = "OUCH!!!";
        }

        for (size_t i = 0; i < ivec.size(); i++){
            cout << ivec[i];
        }
        cout << endl;
        ivec.assign(LEN, " ");
        racingTime++;
    }
    cout << endl;
    cout << "The match costs " << racingTime << " seconds." << endl;

    cout << "Congratulations! ";
    if (rabbit.getPosition() > turtle.getPosition())
    {
        cout << "Rabbit is the winner!" << endl;
    }
    else if (rabbit.getPosition() < turtle.getPosition())
    {
        cout << "Tortoise is the winner!" << endl;
    }
    else
    {
        cout << "They both reached the endpoint at the same time!" << endl;
    }

    return 0;
}
