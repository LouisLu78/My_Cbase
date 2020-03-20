#include <iostream>
#include <vector>
#include "Eratosthenes.h"

using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    else if (number == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }

    return true;
}

Eratosthenes::Eratosthenes(int num)
{
    N = num;
    ivec.assign(N, 1);
}

void Eratosthenes::sieve()
{
    for (size_t i = 0; i < N; i++)
    {
        if(isPrime(i) && ivec[i])
        {
            for (size_t j = i + 1; j < N; j++)
            {
                if(j % i == 0)
                {
                    ivec[j] = 0;
                }
            }
        }
    }
}

void Eratosthenes::printArray()
{
    int t = 0;
    for (size_t i = 2; i < N; i++)
    {
        if (ivec[i])
        {
            cout << i << " ";
            t++;
        }
        if(t % 10 == 0)
        {
            cout << endl;
        }
    }
}
