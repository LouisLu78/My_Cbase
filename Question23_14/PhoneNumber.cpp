#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneNumber.h"

using namespace std;

PhoneNumber::PhoneNumber(const string &aCode, const string &exCode, const string &lineNumber)
{
	areaCode = aCode;
	exchangeCode = exCode;
	line = lineNumber;
}

ostream& operator<<(ostream& output, const PhoneNumber& number)
{
	output << "(" << number.areaCode << ") " << number.exchangeCode << "-" << number.line;

	return output;
}

istream& operator>>(istream& input, PhoneNumber& number)
{
	string aCode;
	string exCode;
	string lineNumber;
	
	input.ignore();
	input >> setw(3) >> aCode;
	input.ignore(2);
	input >> setw(3) >> exCode;
	input.ignore();
	input >> setw(4) >> lineNumber;	
	
	if ((aCode.size() + exCode.size() + lineNumber.size())!= 10) {
		input.clear(ios::failbit);
		return input;
	}
	if (aCode[0] == '0' || aCode[0] == '1'
		|| exCode[0] == '0' || exCode[0] == '1') {
		input.clear(ios::failbit);
		return input;
	}
	else if (aCode[1] != '0' && aCode[1] != '1') {
		input.clear(ios::failbit);
		return input;
	}
	
	number.areaCode = aCode;
	number.exchangeCode = exCode;
	number.line = lineNumber;

	return input;		
		
}// to-be-finished-tomorrow