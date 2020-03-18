#include <iostream>
#include <string>
#include "Parking.h"

using namespace std;

int main()
{
    Parking carA("WA001", 4.5);
    carA.print();

    Parking carB("SC021", 25.1);
    carB.print();

    Parking carC("HB033", 23.5);
    carC.print();

    cout << "Hello world!" << endl;

    return 0;
}
