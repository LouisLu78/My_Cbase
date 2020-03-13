#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED

#include <iostream>

using namespace std;

class Polynomial
{
friend istream& operator>>(istream& input, Polynomial& right);
friend ostream& operator<<(ostream& output, Polynomial& right);

private:
   int param[];
   int SIZE;

public:
    Polynomial(int*, int = 20);
    Polynomial();
    void setSize(int);
    int getParam() const;
    const Polynomial &operator=(const Polynomial &right);
    bool isZero();
    Polynomial operator+(Polynomial &right);
    Polynomial operator-(Polynomial &right);
    Polynomial operator*(Polynomial &right);
    Polynomial &operator+=(Polynomial &right);
    Polynomial &operator-=(Polynomial &right);
    Polynomial &operator*=(Polynomial &right);
};


#endif // POLYNOMIAL_H_INCLUDED
