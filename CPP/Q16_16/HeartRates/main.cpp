#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

int main()
{
    HeartRates Louis("Lu", "Louis", 1978, 4, 19);
    Louis.print();
    cout << endl;

    Louis.setMonth(3);
    Louis.setDay(13);
    Louis.print();
    cout << endl;

    HeartRates Amy("Gao", "Amy", 2003, 4, 13);
    Amy.print();

    return 0;
}
