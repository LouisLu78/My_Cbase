#include <iostream>
#include <stdlib.h>
#include "Fraction.h"

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

ostream& operator<<(ostream& output, Fraction& rhs)
{
	if (rhs.denominator == 1 || rhs.numerator == 0) {
		output << rhs.numerator;
	}

	else if (rhs.numerator * rhs.denominator < 0) {
		output << "-" << abs(rhs.numerator) << "/" << abs(rhs.denominator);
	}

	else{
		output << abs(rhs.numerator) << "/" << abs(rhs.denominator);
	}
	return output;
}

const Fraction operator+(const Fraction&lhs, const Fraction&rhs)
{
    if (lhs.denominator == rhs.denominator) {
			return Fraction(lhs.numerator + rhs.numerator, lhs.denominator);
		}
		else {
			int new_de = lhs.denominator * rhs.denominator;
			int new_nu = lhs.numerator * rhs.denominator + rhs.numerator * lhs.denominator;

			return Fraction(new_nu, new_de);
		}
}

const Fraction operator-(const Fraction&lhs, const Fraction&rhs)
{
    if (lhs.denominator == rhs.denominator) {
			return Fraction(lhs.numerator - rhs.numerator, lhs.denominator);
		}
		else {
			int new_de = lhs.denominator * rhs.denominator;
			int new_nu = lhs.numerator * rhs.denominator - rhs.numerator * lhs.denominator;

			return Fraction(new_nu, new_de);
		}
}

const Fraction operator*(const Fraction&lhs, const Fraction&rhs)
{
    int new_de = lhs.denominator * rhs.denominator;
    int new_nu = lhs.numerator * rhs.numerator;

    return Fraction(new_nu, new_de);
}

const Fraction operator/(const Fraction&lhs, const Fraction&rhs)
{
    int new_de = lhs.denominator * rhs.numerator;
    int new_nu = lhs.numerator * rhs.denominator;

    return Fraction(new_nu, new_de);
}

Fraction::Fraction(int nu, int de)
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

Fraction::Fraction(const Fraction&rhs)
        :numerator(rhs.numerator), denominator(rhs.denominator)
        {

        }

const Fraction &Fraction::operator=(const Fraction&rhs)
{
    if (this != &rhs){
        numerator = rhs.numerator;
        denominator = rhs.denominator;
    }
    return *this;
}

Fraction &Fraction::operator+=(const Fraction&rhs)
{
    *this = *this + rhs;

    return *this;
}

Fraction &Fraction::operator-=(const Fraction&rhs)
{
    *this = *this - rhs;

    return *this;
}

Fraction &Fraction::operator*=(const Fraction&rhs)
{
    *this = *this * rhs;

    return *this;
}

Fraction &Fraction::operator/=(const Fraction&rhs)
{
    *this = *this / rhs;

    return *this;
}

bool Fraction::operator>(const Fraction&rhs ) const
{
    int new_de = denominator * rhs.denominator;
    int new_nu = numerator * rhs.denominator - rhs.numerator * denominator;

    return (new_de * new_nu > 0);
}

bool Fraction::operator==(const Fraction&rhs ) const
{
    int new_nu = numerator * rhs.denominator - rhs.numerator * denominator;

    return (new_nu == 0);
}

bool Fraction::operator>=(const Fraction& rhs) const
{
    return (*this > rhs) || (*this == rhs);
}

bool Fraction::operator!=(const Fraction&rhs) const
{
    return !(*this == rhs);
}

bool Fraction::operator<(const Fraction&rhs) const
{
    return !(*this >= rhs);
}

bool Fraction::operator<=(const Fraction&rhs) const
{
    return !(*this > rhs);
}












