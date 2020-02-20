#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	cout << "before the input operation:"
		<< "\ncin.rdstate() is: " << cin.rdstate() << endl << endl;	
	
	Point p1(3, 5);
	cout << "The coordinates of p1 is: " << p1 << endl <<endl;

	Point p2;
	cout << "Please enter the coordinates of p2:" << endl;
	cin >> p2;
	cout << "The coordinates of p2 entered is: " << p2 << endl;

	cout << "\nAfter the input operation:"
		<< "\ncin.rdstate() is: " << cin.rdstate() << endl;

	return 0;
}