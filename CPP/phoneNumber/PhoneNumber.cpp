#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "PhoneNumber.h"

using namespace std;

PhoneNumber::PhoneNumber(const string &aCode, const string &exCode, const string &lineNumber)
{
	areaCode = aCode;
	exchangeCode = exCode;
	line = lineNumber;
}

ostream &operator<<(ostream& output, const PhoneNumber& number)
{
	output << "(" << number.areaCode << ") " << number.exchangeCode << "-" << number.line;

	return output;
}

istream& operator>>(istream& input, PhoneNumber& number)
{
	string aCode;
	string exCode;
	string lineNumber;
	string temp;

	getline(input, temp);
	istringstream stream(temp);

	stream.ignore();
	stream >> setw(3) >> aCode;
	stream.ignore(2);
	stream >> setw(3) >> exCode;
	stream.ignore();
	stream >> setw(4) >> lineNumber;

	if (temp.size()!= 14) {
		input.clear(ios::failbit);
		return input;
	}
	else if (aCode[0] == '0' || aCode[0] == '1'
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

}
