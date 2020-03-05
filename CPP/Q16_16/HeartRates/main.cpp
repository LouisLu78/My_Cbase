#include <iostream>
#include <iomanip>
#include <string>
#include "HeartRates.h"

using namespace std;

int main()
{
    int theYear, theMonth, today;
    getDate(theYear, theMonth, today);
    cout << "Today is: " << theYear << "-" << setfill('0') << setw(2) << theMonth
            << "-" << setfill('0') << setw(2) << today << ".\n" << endl;

    HeartRates Louis("Lu", "Louis", 1978, 4, 19);
    Louis.print();
    cout << endl;

    Louis.setMonth(3);
    Louis.setDay(13);
    Louis.print();
    cout << endl;

    HeartRates Jasmin("Hu", "Jasmin", 1991, 11, 15);
    Jasmin.print();

    return 0;
}
