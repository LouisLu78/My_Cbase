#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneNumber.h"

using namespace std;

PhoneNumber::PhoneNumber(string &aCode, string &exCode, string &lineNumber)
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
	input.ignore();
	input >> setw(3) >> number.areaCode;
	input.ignore(2);
	input >> setw(3) >> number.exchangeCode;
	input.ignore();
	input >> setw(4) >> number.line;
	
	if (input.gcount() != 14) {
		input.clear(ios::failbit);
	}
	else if (number.areaCode[0] == '0' || number.areaCode[0] == '1'
		|| number.exchangeCode[0] == '0' || number.exchangeCode[0] == '1') {
		input.clear(ios::failbit);
	}
	else if (number.areaCode[1] == '0' || number.areaCode[1] == '1') {
		input.clear(ios::failbit);
	}
	
	return input;
}// to-be-finished-tomorrow