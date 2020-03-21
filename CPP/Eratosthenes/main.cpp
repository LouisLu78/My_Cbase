#include <iostream>
#include "Eratosthenes.h"

using namespace std;

int main()
{
    Eratosthenes eraA;
    eraA.printArray();
    cout << endl;

    Eratosthenes eraB(5000);
    eraB.printArray();
    cout << endl;

    cout << "Hello world!" << endl;
    return 0;
}
