#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "HeapSort.h"

#define SIZEC 10000

using namespace std;

int main()
{
    int dataA[] = {5, 3, 7, 6, 4, 1, 0, 2, 9, 10, 8};
    HeapSort hsA(dataA, 11);
    cout << hsA << endl;

    int dataB[] = {2, 6, 4, 8, 100, 12, 89, 68, 314, 45, 37, 43, 456, 84};
    HeapSort hsB(dataB, 14);
    cout << hsB << endl;

     srand(time(NULL));
    int dataC[SIZEC];
    for (int i = 0; i < SIZEC; i++){
        dataC[i] = rand() % SIZEC +1;
    }
    HeapSort hsC(dataC, SIZEC);
    cout << hsC << endl;

    return 0;
}
