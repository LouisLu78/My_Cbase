#ifndef HEARTRATES_H_INCLUDED
#define HEARTRATES_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class HeartRates
{
Private:
    string lastname;
    string firstname;
    int year;
    int month;
    int day;


public:
    HeartRates(const string &, const string &, int = 2000, int = 1, int = 1);
    void setLastname(string&);
    string &getLastname() const;
    void setFirstname(string&);
    string &getFirstname() const;
    void setYear(int);
    int getYear() const;
    void setMonth(int);
    int getMonth() const;
    void setDay(int);
    int getDay() const;
    int getAge();
    int getMaxHeartRates();
};

#endif // HEARTRATES_H_INCLUDED
