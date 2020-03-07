#ifndef HUGEINTEGER_H_INCLUDED
#define HUGEINTEGER_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class HugeInteger
{
    friend istream &operator>>(istream&, HugeInteger& );
    friend ostream &operator<<(ostream&, const HugeInteger& );

private:
    const static int size = 40;
    int data[size];

public:

    HugeInteger();
    HugeInteger(long int);
    HugeInteger(const string &);
    HugeInteger(const HugeInteger &);

    HugeInteger &operator=(const HugeInteger &);

    HugeInteger operator-(const HugeInteger &);

    bool operator==(const HugeInteger &) const;
    bool operator!=(const HugeInteger &right) const
    {
        return !(*this == right);
    }
    bool operator>(const HugeInteger &) const;
    bool operator>=(const HugeInteger &) const;
    bool operator<(const HugeInteger &) const;
    bool operator<=(const HugeInteger &) const;

    void printArray() const;
};

#endif // HUGEINTEGER_H_INCLUDED
