#include <iostream>
#include <string>
#include "PhoneNumber.h"

using namespace std;

int main()
{
	PhoneNumber pn1("820", "555", "1912");
	cout << "The telephone number of pn1 is: " << pn1 << endl;

	PhoneNumber pn2;
	cout << "Before the input, the telephone number of pn2 is: " << pn2 << endl;	
	
	cout << "\ncin.rdstate() is: " << cin.rdstate() 
		<< "\n   cin.fail() is: "<< cin.fail() << endl << endl;
	
	cout << "Please enter a new phone number for pn2:" << endl;
	cin >> pn2;	

	cout << "After the input operation:"
		<< "\ncin.rdstate() is: " << cin.rdstate()
		<< "\n   cin.fail() is: " << cin.fail() << endl << endl;
	
	if (cin.fail()) {
		cout << "A bad input! Please enter a phone number in correct format." << endl;			
	}
	else {
		cout << "the telephone number of pn2 is changed to: " << pn2 << endl;		
	}
	return 0;
}