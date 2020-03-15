#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

class Polynomial
{
friend istream& operator>>(istream& input, Polynomial& right);
friend ostream& operator<<(ostream& output, Polynomial& right);

private:
   vector<int> ivec;

public:

    Polynomial();
    Polynomial(int *, int = 20);
    ~Polynomial();
    void setSize(int);
    vector<int> &getIvec();
    bool isZero();

    const Polynomial &operator=(const Polynomial &right);
    Polynomial operator+(Polynomial &right);
    Polynomial operator-(Polynomial &right);
    Polynomial operator*(Polynomial &right);
    Polynomial &operator+=(Polynomial &right);
    Polynomial &operator-=(Polynomial &right);
    Polynomial &operator*=(Polynomial &right);
    void print() const;
};


#endif // POLYNOMIAL_H_INCLUDED
