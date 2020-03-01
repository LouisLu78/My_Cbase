#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int a = 345678;
    string sa, stb;
    ostringstream output;
    output << a;

    istringstream input(output.str());
    input >> sa;

    cout << sa << endl;

    double b = 3.1415926;
    stringstream ssb;
    ssb << b;
    ssb >> stb;

    cout << stb << endl;

    return 0;

}
