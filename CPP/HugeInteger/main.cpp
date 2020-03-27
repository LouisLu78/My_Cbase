#include <iostream>
#include <string>
#include "HugeInteger.h"

using namespace std;

int main()
{
    HugeInteger hiA;
    cout << hiA << endl;

    HugeInteger hiB(12345671);
    cout << hiB << endl;

    HugeInteger hiC("961218041502317");
    cout << hiC << endl;

    cout << (hiC - hiB) << endl;

    HugeInteger hiD(12436589);
    cout << hiD << endl;

    cout << (hiD > hiB) << endl;

    cout << (hiD <= hiB) << endl;

    cout << (hiB - hiD) << endl;

    hiA = hiD;
    cout << hiA << endl;

    HugeInteger hiF(-35625);
    hiF.printArray();
    cout << hiF << endl;

    HugeInteger hiE(hiC);
    cout << hiE << endl;

    cout << (hiD <= hiA) << endl;

    cout << (hiD > hiA) << endl;

    cin >> hiA;
    cout << hiA << endl;

    return 0;
}
