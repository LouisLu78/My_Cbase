#ifndef ERATOSTHENES_H_INCLUDED
#define ERATOSTHENES_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int);

class Eratosthenes
{
private:
    vector<int>ivec;
    int N;

public:
    Eratosthenes(int = 1000);
    void sieve();
    void printArray();
};

#endif // ERATOSTHENES_H_INCLUDED
