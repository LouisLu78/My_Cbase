#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

HeartRates::HeartRates(const string & familyName, const string & givenName, int birthYear, int birthMonth, int birthDay)
                        :lastname(familyName), firstname(givenName), year(birthYear), month(birthMonth), day(birthDay)
{

}

void HeartRates::setLastname(string &familyName)
{
    lastname = familyName;
}

string &HeartRates::getLastname() const
{
    return lastname;
}

void HeartRates::setFirstname(string &givenName)
{
    firstname = givenName;
}

string &HeartRates::getFirstname() const
{
    return firstname;
}

void HeartRates::setYear(int birthYear)
{
    year = birthYear;
}

int HeartRates::getYear() const
{
    return year;
}

void HeartRates::setMonth(int birthMonth)
{
    month = birthMonth;
}

int HeartRates::getMonth() const
{
    return month;
}

void HeartRates::setDay(int birthDay)
{
    day = birthDay;
}

int HeartRates::getDay() const
{
    return day;
}//to be finished laster



