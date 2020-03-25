#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "RandomSentence.h"

using namespace std;

int main()
{
    srand(time(NULL));
    RandomSentence rsA;
    rsA.connection();
    rsA.print();

    cout << "Hello world!" << endl;
    return 0;
}
