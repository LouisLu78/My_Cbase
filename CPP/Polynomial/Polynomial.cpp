#include <iostream>
#include <cmath>
#include <cstdarg>
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial( )
{
    ivec.assign(20, 0);
}

Polynomial::Polynomial(int *d, int len)
{

    ivec.assign(d, d + len);
}

Polynomial::Polynomial(int count, ...)
{
    va_list argPtr;
    va_start (argPtr, count);
    for (int i = 0; i < count; i++){
        ivec.push_back(va_arg(argPtr, int));
    }
    va_end(argPtr);
}

Polynomial::~Polynomial()
{
    ivec.clear();
}
 const Polynomial &Polynomial::operator=(const Polynomial &right)
{
    if (this != &right){

        ivec.assign(right.ivec.begin(), right.ivec.end());
    }
    return *this;
}

void Polynomial::setSize(int length)
{
    ivec.assign(length, 0);
}

vector<int> &Polynomial::getIvec()
{
    return ivec;
}

bool Polynomial::isZero()
{
    for (size_t i = 0; i < ivec.size(); i++){
        if (ivec[i] != 0){
            return false;
        }
    }
    return true;
}

Polynomial Polynomial::operator+(Polynomial &right)
{
    if (ivec.size() > right.ivec.size()){
        for (int i = right.ivec.size(); i < ivec.size(); i++){
            right.ivec.push_back(0);
        }
    }
    else{
        for(int i = ivec.size(); i < right.ivec.size(); i++){
            ivec.push_back(0);
        }
    }
    Polynomial temp;
    temp.ivec.clear();
    for (size_t i = 0; i < ivec.size(); i++){
        temp.ivec.push_back(ivec[i] + right.ivec[i]);
    }

    return temp;
}

Polynomial Polynomial::operator-(Polynomial &right)
{
    if (ivec.size() > right.ivec.size()){
        for (int i = right.ivec.size(); i < ivec.size(); i++){
            right.ivec.push_back(0);
        }
    }
    else{
        for(int i = ivec.size(); i < right.ivec.size(); i++){
            ivec.push_back(0);
        }
    }

    Polynomial temp;
    temp.ivec.clear();
    for (size_t i = 0; i < ivec.size(); i++){
        temp.ivec.push_back(ivec[i] - right.ivec[i]);
    }

    return temp;
}

Polynomial Polynomial::operator*(Polynomial &right)
{
    Polynomial temp;
    int s = ivec.size() + right.ivec.size();
    temp.ivec.assign(s, 0);
    for (size_t i = 0; i < ivec.size(); i++){
        for (size_t j = 0; j < right.ivec.size(); j++)
        temp.ivec[i+j] += ivec[i] * right.ivec[j];
    }

    return temp;
}

Polynomial &Polynomial::operator+=(Polynomial &right)
{
    *this = *this + right;
    return *this;
}

Polynomial &Polynomial::operator-=(Polynomial &right)
{
    *this = *this - right;
    return *this;
}

Polynomial &Polynomial::operator*=(Polynomial &right)
{
    *this = (*this) * right;
    return *this;
}
Polynomial Polynomial::operator^(int N)
{
    Polynomial temp;
    temp = *this;
    if (N == 1){
        ;
    }
    else{
        for (int i = 1; i < N; i++){
            temp = temp * (*this);
        }

    }
    return temp;
}


void Polynomial::print() const
{
    for (int i = 0; i < ivec.size(); i++){
        cout << ivec[i] << " ";
    }
    cout << endl;
}

istream& operator>>(istream& input, Polynomial& right)
{
    int i;
    right.ivec.clear();
    while(input >> i){
        right.ivec.push_back(i);
    }
    return input;
}

ostream& operator<<(ostream& output, Polynomial& right)
{
    int N = 1;
    if(right.isZero()){
        output << "0";
    }
    else{
        for (int i = right.ivec.size() - 1; i > 1; i--){
            if(right.ivec[i] != 0 && i > 1){
                N = i;
                (right.ivec[N] == 1) ? (output << "") : (output << right.ivec[N]);
                output << "x^" << N;
                break;
            }
        }
        for (int i = N - 1; i > 1; i--){
            if (right.ivec[i] < 0){
                output << " - ";
                (right.ivec[i] == -1) ? (output << "") : (output << abs(right.ivec[i]));
                output << "x^" << i;
            }
            else if(right.ivec[i] > 0){
                output << " + ";
                (right.ivec[i] == 1) ? (output << "") : (output << right.ivec[i]);
                output << "x^" << i;
            }
        }

        if (right.ivec[1] > 0){
            (N >= 2) ? (output << " + ") : (output << "");
            (right.ivec[1] == 1) ? (output << "") : (output << right.ivec[1]);
            output << "x";
        }
        else if((right.ivec[1] < 0)){
            output << " - ";
            (right.ivec[1] == -1) ? (output << "") : (output << abs(right.ivec[1]));
            output << "x";
        }

        if (right.ivec[0] > 0){
            output << " + " << right.ivec[0] << endl;
        }
        else if((right.ivec[0] < 0)){
            output << " - " << abs(right.ivec[0]) << endl;
        }
    }

    return output;
}






