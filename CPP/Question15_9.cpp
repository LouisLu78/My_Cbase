# include <iostream>
using namespace std;

template <class T>
T maxed(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b;

    cout << "Please enter two integers: ";
    cin >> a >> b;

    cout << "The greater value of the two numbers is " 
	<< maxed(a, b) << ".\n" ;

    char c, d;

    cout << "\nPlease enter two characters: ";
    cin >> c >> d;

    cout << "The greater value of the two characters is "
	<< maxed(c, d) << "." << endl;

    return 0;
}
