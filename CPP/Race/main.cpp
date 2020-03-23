#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include "Hare.h"
#include "Tortoise.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Hare rabbit;
    Tortoise tort;
    vector<int> ivecRabbit;
    vector<int> ivecTort;
    int racingTime = 0;

    while(rabbit.getPosition() < 70 && tort.getPosition() <70)
    {
        rabbit.race();
        ivecRabbit.push_back(rabbit.getPosition());

        tort.race();
        ivecTort.push_back(tort.getPosition());

        racingTime++;
    }
    cout << endl;
    cout << "The match costs " << racingTime << " seconds." << endl;

    cout << "Congratulations! ";
    if (rabbit.getPosition() > tort.getPosition())
    {
        cout << "Rabbit is the winner!" << endl;
        for (size_t i = 0; i < ivecRabbit.size(); i++)
        {
            cout << ivecRabbit[i] << " ";
        }
        cout << endl;
    }
    else if (rabbit.getPosition() < tort.getPosition())
    {
        cout << "Tortoise is the winner!" << endl;
        for (size_t i = 0; i < ivecTort.size(); i++)
        {
            cout << ivecTort[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "They both reached the endpoint at the same time!" << endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
