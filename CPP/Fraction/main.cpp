#include <iostream>
#include <iomanip>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction fraA(1, 2);
    cout <<"The fraction of fraA is " << fraA << "." << endl;

    Fraction frsum = fraA + 2;
    cout <<"The fraction of frsum is " << frsum << "." << endl;

    Fraction frdiv = fraA / 2;
    cout <<"The fraction of frdiv is " << frdiv << "." << endl;
    frdiv = 1 / frdiv;
    cout <<"The fraction of reciprocal of frdiv is " << frdiv << "." << endl;

    Fraction fraB(4, 10);
    cout <<"The fraction of fraB is " << fraB << "." << endl;
    Fraction fraBB = 3 + fraB;
    cout <<"The fraction of fraBB is " << fraBB << "." << endl;

    Fraction fraC = fraB - fraA;
    cout << "The fraction of fraC is " << fraC << endl;

    cout << boolalpha << (fraC >= fraA) << endl;
    cout << boolalpha << (fraA >= fraB) << endl;

    Fraction fraD(2, 3);

    Fraction fraE = fraA / fraD;
    cout <<"The fraction of fraE is " << fraE << "." << endl;

    Fraction fraF = fraB;
    cout <<"The fraction of fraF is " << fraF << "." << endl;

    return 0;
}
