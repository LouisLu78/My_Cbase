#include <iostream>
#include <iomanip>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction fraA;
    cout <<"The fraction of fraA is " << fraA << "." << endl;

    Fraction fraB(4, 10);
    cout <<"The fraction of fraB is " << fraB << "." << endl;

    Fraction fraC = fraB - fraA;
    cout << fraC << endl;

    cout << boolalpha << (fraC >= fraA) << endl;
    cout << boolalpha << (fraA >= fraB) << endl;

    Fraction fraD(2, 3);

    Fraction fraE = fraA / fraD;
    cout <<"The fraction of fraE is " << fraE << "." << endl;

    return 0;
}
