#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std; 

class PhoneNumber
{
private:
	string areaCode;
	string exchangeCode;
	string line;

public:
	PhoneNumber(const string & = "321", const string & = "456", const string & = "7890");

friend ostream& operator<<(ostream&, const PhoneNumber&);
friend istream& operator>>(istream&, PhoneNumber&);
};

#endif // !PHONENUMBER_H


