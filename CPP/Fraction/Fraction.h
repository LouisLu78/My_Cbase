#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include <iostream>

using namespace std;

void gcd(int, int);

class Fraction
{
    friend ostream& operator<<(ostream&, Fraction&);
private:
    int numerator;
	int denominator;

public:
    Fraction(int = 1, int = 2);
    Fraction(const Fraction&);
    Fraction &operator=(const Fraction&);

    const Fraction operator+(const Fraction&);
    const Fraction operator-(const Fraction&);
    const Fraction operator*(const Fraction&);
    const Fraction operator/(const Fraction&);

    bool operator>(const Fraction& ) const;
    bool operator>=(const Fraction& ) const;
    bool operator==(const Fraction& ) const;
    bool operator!=(const Fraction& ) const;
    bool operator<(const Fraction& ) const;
    bool operator<=(const Fraction& ) const;
};
ostream& operator<<(ostream&, Fraction&);

#endif // FRACTION_H_INCLUDED
//I will rewrite this class laster.
