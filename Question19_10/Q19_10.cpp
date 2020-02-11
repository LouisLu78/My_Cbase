#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int gcd(int x, int y)
{
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

class RationalNumber
{
	friend ostream& operator<<(ostream& output, RationalNumber& right);

public:
	RationalNumber(int nu = 1, int de = 2)
	{
		if (de == 0) {
			cout << "The denominator cannot be zero!" << endl;
			exit(1);
		}
		else {
			int g = gcd(nu, de);

			numerator = nu / g;
			denominator = de / g;
		}
	}
	
	const RationalNumber operator+(const RationalNumber& right)
	{
		if (denominator == right.denominator) {
			return RationalNumber(numerator + right.numerator, denominator);
		}
		else {
			int new_de = denominator * right.denominator;
			int new_nu = numerator * right.denominator + right.numerator * denominator;
			return RationalNumber(new_nu, new_de);
		}
	}

	const RationalNumber operator-(const RationalNumber& right)
	{
		if (denominator == right.denominator) {
			return RationalNumber(numerator - right.numerator, denominator);
		}
		else {
			int new_de = denominator * right.denominator;
			int new_nu = numerator * right.denominator - right.numerator * denominator;
			return RationalNumber(new_nu, new_de);
		}
	}

	const RationalNumber operator*(const RationalNumber& right)
	{
		int new_de = denominator * right.denominator;
		int new_nu = numerator * right.numerator;
		return RationalNumber(new_nu, new_de);
	}

	const RationalNumber operator/(const RationalNumber& right)
	{
		int new_de = denominator * right.numerator;
		int new_nu = numerator * right.denominator;
		return RationalNumber(new_nu, new_de);
	}

	bool operator>(const RationalNumber& right) const
	{
		int new_de = denominator * right.denominator;
		int new_nu = numerator * right.denominator - right.numerator * denominator;

		return (new_de * new_nu > 0);
	}

	bool operator<(const RationalNumber& right) const
	{
		int new_de = denominator * right.denominator;
		int new_nu = numerator * right.denominator - right.numerator * denominator;

		return (new_de * new_nu < 0);
	}

	bool operator==(const RationalNumber& right) const
	{
		int new_nu = numerator * right.denominator - right.numerator * denominator;

		return (new_nu == 0);
	}

private:
	int numerator;
	int denominator;
};

ostream& operator<<(ostream& output, RationalNumber& right)
{
	if (right.denominator == 1 || right.numerator == 0) {
		output << right.numerator;
	}

	else if (right.numerator * right.denominator < 0) {
		output << "-" << abs(right.numerator) << "/" << abs(right.denominator);
	}

	else if(right.numerator * right.denominator > 0) {
		output << abs(right.numerator) << "/" << abs(right.denominator);
	}
	return output;
}

int main()
{
	RationalNumber rn1;
	cout << "The rational number of rn1 is " << rn1 << endl;

	RationalNumber rn2(2, 3);
	cout << "The rational number of rn2 is " << rn2 << endl;

	if (rn1 > rn2) {
		cout << "rn1 is greater." << endl;
	}
	else if (rn1 < rn2) {
		cout << "rn2 is greater." << endl;
	}
	else {
		cout << "The rational numbers are equal." << endl;
	}

	RationalNumber rn3 = rn1 - rn2;
	cout << "The rational number of rn3 is " << rn3 << endl;

	RationalNumber rn4 = rn1 + rn2;
	cout << "The rational number of rn4 is " << rn4 << endl;

	RationalNumber rn5 = rn1 * rn2;
	cout << "The rational number of rn5 is " << rn5 << endl;

	RationalNumber rn6 = rn1 / rn2;
	cout << "The rational number of rn6 is " << rn6 << endl;

	return 0;
}