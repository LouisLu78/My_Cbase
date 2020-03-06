#include <iostream>
#include <string>
#include "HugeInteger.h"

using namespace std;

HugeInteger::HugeInteger(long value)
{
    for (int i = 0; i < size; i++){
        data[i] = 0;
    }

    for (int j = 0; j < size; j++){
        if (value != 0){
            data[j] = value % 10;
            value / = 10;
        }
    }
}

HugeInteger HugeInteger::operator-(const HugeInteger &right)
{
    HugeInteger temp;
    int carry = 0;

    if (*this == right){
        return 0;
    }
    else if (*this > right){

        for (int i = 0; i < size; i++){
            temp[i] = data[i] - (right.data[i] + carry);

            if (temp[i] < 0 ){
                temp[i] += 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
        }
    }
    else{
        carry = 0;
        for (int i = 0; i < size; i++){
            temp[i] = right.data[i] - (data[i] + carry);
            if (temp[i] < 0 ){
                temp[i] += 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
        }

        for (int i = size - 1; i >= 0; i--){
            if (temp[i] != 0){
                temp[i] *= -1;
                break;
            }
        }

    }
    return temp;
}

bool HugeInteger::operator==(const HugeInteger &right) const
{
    for (int i = 0; i < size; i++){
        if (data[i] != right.data[i])
            return false;
    }
    return true;
}
bool HugeInteger::operator>(const HugeInteger &right) const
{
    if (*this != right){
        for (int i = size - 1; i >= 0; i--){
            if (data[i] > right.data[i]){
                return true;
            }
            else if (data[i] < right.data[i]){
                return false;
            }
            else{
                continue;
            }
        }
    }
}

bool HugeInteger::operator>=(const HugeInteger &right) const
{
    return (*this == right) || (*this > right);
}

bool HugeInteger::operator<(const HugeInteger &right) const
{
    return !(*this >= right);
}

bool HugeInteger::operator<=(const HugeInteger &right) const
{
    return !(*this > right);
}

istream &operator>>(istream& input, HugeInteger& right)
{
    string s;
    input >> s;
    int j = 0;
    for(size_t i = s.size()-1; i >= 0; i--, j++){
        right.data[j] = 57 - s[i];
    }
    return input;
}

ostream &operator<<(ostream& output, const HugeInteger& right)
{
    int N;
    if (right == HugeInteger(0)){
        output << "0";
    }
    else{
        for (int i = size - 1; i > 0; i--){
            if (right.data[i] != 0){
                N = i;
                break;

            }
            output << "";
        }
        for(int i = N; i >= 0; i--){
            output << right.data[i];
        }
    }
    return output;
}// to-be finished later






