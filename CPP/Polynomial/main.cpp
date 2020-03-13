#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{
    int dataA[] = {3,-2,5};
    Polynomial pnA(dataA, 3);
    cout << pnA << endl;

    int dataB[] = {6,0,-1,3};
    Polynomial pnB(dataB, 4);
    cout << pnB << endl;

    cout << "Hello world!" << endl;
    return 0;
}//to be finished later
