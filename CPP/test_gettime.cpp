#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    time_t timeP;
    struct tm *p;
    time(&timeP);
    p = localtime(&timeP);

    cout << p->tm_year + 1900 << "-" << setfill('0') << setw(2) << p->tm_mon + 1
            << "-" << setfill('0') << setw(2) << p->tm_mday << endl;
}
