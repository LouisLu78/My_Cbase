# include <iostream>

using namespace std;

class Date
{
private:

    int year;
    int month;
    int day;

public:

Date(int formalYear, int formalMonth, int formalDay)
{
    setYear(formalYear);
    setMonth(formalMonth);
    setDay(formalDay);
}

void setYear(int formalYear)
{
    year = formalYear;
}

int getYear()
{
    return year;
}

void setMonth(int formalMonth)
{
    if (formalMonth < 1 || formalMonth >12){
        month = 1;
    }
    else{
        month = formalMonth;
    }
}

int getMonth()
{
    return month;
}

void setDay(int formalDay)
{
    day = formalDay;
}

int getDay()
{
    return day;
}

void displayDate()
{
    cout << "\nThe date is: " << getYear() << "/" << getMonth() << "/" << getDay() << "." << endl;
}
};

int main()
{
    Date date1(2020, 1, 31);
    date1.displayDate();

    Date date2(2018, 12, 9);
    date2.displayDate();

    Date date3(1950, 13, 04);
    date3.displayDate();

    return 0;
}
