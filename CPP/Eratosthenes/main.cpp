#include <iostream>
#include "Eratosthenes.h"

using namespace std;

int main()
{
    Eratosthenes eraA;
    eraA.sieve();
    eraA.printArray();

    cout << "Hello world!" << endl;
    return 0;
}
