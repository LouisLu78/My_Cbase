#include <iostream>
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial( )
{
    setSize(20);
    for (int i = 0; i < SIZE; i++){
        param[i] = 0;
    }
}

Polynomial::Polynomial(int *d, int length)
{
    for (int i = 0; i < SIZE; i++){
        param[i] = 0;
    }

    for (int i = 0; i < length; i++){
        param[i] = *(d + i);
    }
}

 const Polynomial &Polynomial::operator=(const Polynomial &right)
{
    if (this != &right){

        for (int i = 0; i < SIZE; i++){
            param[i] = right.param[i];
        }
    }
    return *this;
}

void Polynomial::setSize(int length)
{
    SIZE = length;
}

int Polynomial::getParam() const
{
    return param[SIZE];
}

bool Polynomial::isZero()
{
    for (int i = 0; i < SIZE; i++){
        if (param[i] != 0){
            return false;
        }
    }
    return true;
}

Polynomial Polynomial::operator+(Polynomial &right)
{
    Polynomial temp;
    for (int i = 0; i < SIZE; i++){
        temp.param[i] = param[i] + right.param[i];
    }

    return temp;
}

Polynomial Polynomial::operator-(Polynomial &right)
{
    Polynomial temp;

    for (int i = 0; i < SIZE; i++){
        temp.param[i] = param[i] - right.param[i];
    }

    return temp;
}

Polynomial Polynomial::operator*(Polynomial &right)
{
    Polynomial temp;
    temp.setSize(40);
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++)
        temp.param[i+j] += param[i] * right.param[j];
    }

    return temp;
}

Polynomial &Polynomial::operator+=(Polynomial &right)
{
    for (int i = 0; i < SIZE; i++){
        param[i] += right.param[i];
    }

    return *this;
}

Polynomial &Polynomial::operator-=(Polynomial &right)
{
    for (int i = 0; i < SIZE; i++){
        param[i] -= right.param[i];
    }

    return *this;
}

istream& operator>>(istream& input, Polynomial& right)
{
    int i, count = 0;
    while(input >> i){
        right.param[count] = i;
        count++;
    }
    return input;
}

ostream& operator<<(ostream& output, Polynomial& right)
{
    int N;
    if(right.isZero()){
        output << "0";
    }
    else{
        for (int i = right.SIZE - 1; i > 0; i--){
            if(right.param[i] != 0){
                N = i;
                output << right.param[i] << "x^" << i << " ";
                break;
            }
        }
        for (int i = N - 1; i > 0; i--){
            if (right.param[i] < 0){
                output << right.param[i] << "x^" << i << " ";
            }
            else if(right.param[i] < 0){
                output << " + " << right.param[i] << "x^" << i;
            }
        }
        if (right.param[0] != 0)
        output << " + " << right.param[0] << endl;

    }

    return output;
}






