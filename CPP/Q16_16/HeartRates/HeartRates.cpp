#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "HeartRates.h"

using namespace std;

void getDate(int &yy, int &mm, int &dd)
{
    time_t timeP;
    struct tm *p;
    time(&timeP);
    p = localtime(&timeP);

    yy = p->tm_year + 1900;
    mm = p->tm_mon + 1;
    dd = p->tm_mday;
}

HeartRates::HeartRates(const string & familyName, const string & givenName, int birthYear, int birthMonth, int birthDay)
                        :lastname(familyName), firstname(givenName), year(birthYear), month(birthMonth), day(birthDay)
{

}

void HeartRates::setLastname(string &familyName)
{
    lastname = familyName;
}

string HeartRates::getLastname() const
{
    return lastname;
}

void HeartRates::setFirstname(string &givenName)
{
    firstname = givenName;
}

string HeartRates::getFirstname() const
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
}

int HeartRates::getAge()
{
    int theYear, theMonth, today, age;
    getDate(theYear, theMonth, today);

    if (month < theMonth){
        age = theYear - year;
    }
    else if (month > theMonth){
        age = theYear - year - 1;
    }
    else{
        age = (day <= today) ? (theYear - year) : (theYear - year - 1);
    }

    return age;

}

int HeartRates::getMaxHeartRates()
{
    return 220 - getAge();
}

void HeartRates::print()
{
    int lower = getMaxHeartRates() * 0.5;
    int upper = getMaxHeartRates() * 0.8;

    cout << "The client: " << firstname << " " << lastname << ";" << endl;
    cout << "Birthday: " << year << "-" << setfill('0') << setw(2) << month
            << "-" << setfill('0') << setw(2) << day << ";" << endl;
    cout <<"Age: "<< getAge() << ";" << endl;
    cout << "The suggested maximum heart rates is in the range of " << lower << " and " << upper << "." << endl;

}

