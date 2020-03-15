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
    pnB.print();

    cout << pnB << endl;
    Polynomial pnC;
    cout << pnC << endl;
    pnC.print();

    pnC = pnA + pnB;
    cout << pnC << endl;
    pnC.print();

    Polynomial pnD = pnA - pnB;
    cout << pnD << endl;

    Polynomial pnE = pnA * pnB;
    cout << pnE << endl;

    Polynomial pnF = pnE;
    cout << pnF << endl;

    pnF += pnA;
    cout << pnF << endl;

    cout << "I solved this question! Perfect!!" << endl;
    return 0;
}
