#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED

#include <iostream>
#inlcude <vector>

using namespace std;

class Polynomial
{
friend istream& operator>>(istream& input, Polynomial& right);
friend ostream& operator<<(ostream& output, Polynomial& right);

private:
    vector<int>param;

public:
    Polynomial(int);
    ~Polynomial();
    void setParam(int);
    int getParam() const;
    const Polynomial &operator=(Polynomial &right);
    Polynomial &operator+(Polynomial &right);
    Polynomial &operator-(Polynomial &right);
    Polynomial &operator*(Polynomial &right);
    Polynomial &operator/(Polynomial &right);
    Polynomial &operator+=(Polynomial &right);
    Polynomial &operator-=(Polynomial &right);
};


#endif // POLYNOMIAL_H_INCLUDED
