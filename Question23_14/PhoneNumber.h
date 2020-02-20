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
	PhoneNumber(string&, string&, string&);

friend ostream& operator<<(ostream&, const PhoneNumber&);
friend istream& operator>>(istream&, PhoneNumber&);
};

#endif // !PHONENUMBER_H


