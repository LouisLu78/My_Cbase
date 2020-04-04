#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include <iostream>

using namespace std;

int gcd(int, int);

struct Fraction
{
    friend ostream& operator<<(ostream&, Fraction&);
    friend const Fraction operator+(const Fraction&, const Fraction&);
    friend const Fraction operator-(const Fraction&, const Fraction&);
    friend const Fraction operator*(const Fraction&, const Fraction&);
    friend const Fraction operator/(const Fraction&, const Fraction&);

private:
    int numerator;
    int denominator;

public:
    Fraction(int = 1, int = 1);
    Fraction(const Fraction&);
    const Fraction &operator=(const Fraction&);
    ~Fraction();

    Fraction &operator+=(const Fraction&);
    Fraction &operator-=(const Fraction&);
    Fraction &operator*=(const Fraction&);
    Fraction &operator/=(const Fraction&);

    bool operator>(const Fraction& ) const;
    bool operator==(const Fraction& ) const;
    bool operator>=(const Fraction& ) const;
    bool operator!=(const Fraction& ) const;
    bool operator<(const Fraction& ) const;
    bool operator<=(const Fraction& ) const;
};

#endif // FRACTION_H_INCLUDED

