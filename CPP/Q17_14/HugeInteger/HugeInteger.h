#ifndef HUGEINTEGER_H_INCLUDED
#define HUGEINTEGER_H_INCLUDED

#include <iostream>
using namespace std;

class HugeInteger
{
    friend istream &operator>>(istream& input, HugeInteger& right);
    friend ostream &operator<<(ostream& output, HugeInteger& right);

private:
    const int size = 40;
    int data[size];

public:
    HugeInteger(int);

    int subtract();
    bool operator==(const HugeInteger &right) const;
    bool operator!=(const HugeInteger &right) const;
    bool operator>(const HugeInteger &right) const;
    bool operator>=(const HugeInteger &right) const;
    bool operator<(const HugeInteger &right) const;
    bool operator<=(const HugeInteger &right) const;

};


#endif // HUGEINTEGER_H_INCLUDED
