#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class PhoneNumber
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

private:
	string areaCode;
	string exchangeCode;
	string line;

public:
	PhoneNumber(const string & = "321", const string & = "456", const string & = "7890");


};



#endif // PHONENUMBER_H_INCLUDED
