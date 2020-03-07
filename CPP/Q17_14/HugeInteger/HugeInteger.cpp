#include <iostream>
#include <string>
#include "HugeInteger.h"

using namespace std;

HugeInteger::HugeInteger()
{
    for (int i = 0; i < size; i++)
    {
        data[i] = 0;
    }
}

HugeInteger::HugeInteger(long int value)
{
    for (int i = 0; i < size; i++)
    {
        data[i] = 0;
    }

    for (int j = 0; j < size; j++)
    {
        if (value != 0)
        {
            data[j] = value % 10;
            value /= 10;
        }
    }
}

HugeInteger::HugeInteger(const HugeInteger &hi)
{
    for (int i = 0; i < size; i++)
    {
        data[i] = hi.data[i];
    }
}

HugeInteger::HugeInteger(const string &st)
{
    for (int i = 0; i < size; i++)
    {
        data[i] = 0;
    }

    for(int i = (st.length() - 1), j = 0; i >= 0; i--, j++)
    {
        data[j] = st[i] - '0';
    }
}

HugeInteger &HugeInteger::operator=(const HugeInteger &right)
{
    if (this != &right)
    {
        for (int i = 0; i < size; i++)
        {
            data[i] = right.data[i];
        }
    }
    return *this;
}

HugeInteger HugeInteger::operator-(const HugeInteger &right)
{
    HugeInteger temp;
    int carry = 0;

    if (*this == right)
    {
        return 0;
    }
    else if (*this > right)
    {

        for (int i = 0; i < size; i++)
        {
            temp.data[i] = data[i] - (right.data[i] + carry);

            if (temp.data[i] < 0 )
            {
                temp.data[i] += 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
        }
    }
    else
    {
        carry = 0;
        for (int i = 0; i < size; i++)
        {
            temp.data[i] = right.data[i] - (data[i] + carry);
            if (temp.data[i] < 0 )
            {
                temp.data[i] += 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
        }

        for (int i = size - 1; i >= 0; i--)
        {
            if (temp.data[i] != 0)
            {
                temp.data[i] *= -1;
                break;
            }
        }
    }
    return temp;
}

bool HugeInteger::operator==(const HugeInteger &right) const
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] != right.data[i])
            return false;
    }
    return true;
}

bool HugeInteger::operator>(const HugeInteger &right) const
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (data[i] > right.data[i])
        {
            return true;
        }
        else if (data[i] < right.data[i])
        {
            return false;
        }
    }

    return false;
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

void HugeInteger::printArray() const
{
    for (int i = size - 1; i >= 0; i--){
        cout << data[i] << " ";
    }
    cout << endl;
}

istream &operator>>(istream &input, HugeInteger &right)
{
    string s;
    input >> s;

    right = HugeInteger(s);

    return input;
}

ostream &operator<<(ostream &output, const HugeInteger &right)
{
    int N;

    if (right == HugeInteger(0))
    {
        output << "0";
    }
    else
    {
        for (int i = (right.size - 1); i > 0; i--)
        {
            if (right.data[i] != 0)
            {
                N = i;
                break;
            }
        }

        for(int i = N; i >= 0; i--)
        {
            output << right.data[i];
        }
    }

    return output;
}






