# include <iostream>

using namespace std;

int isLeapYear(int year)
{
    int flag = 0;
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            flag = 1;
        }
    }
    else if (year % 4 == 0) {
        flag = 1;
    }
    return flag;
}

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
        year = (formalYear <= 0) ? 1 : formalYear;
    }

    int getYear()
    {
        return year;
    }

    void setMonth(int formalMonth)
    {
        if (formalMonth < 1 || formalMonth >12) {
            month = 1;
        }
        else {
            month = formalMonth;
        }
    }

    int getMonth()
    {
        return month;
    }

    void setDay(int formalDay)
    {
        day = (formalDay < 0) ? 1 : formalDay;
    }

    int getDay()
    {
        return day;
    }

    void displayDate()
    {
        cout << "\nThe date is: " << getYear() << "/" << getMonth()
            << "/" << getDay() << "." << endl;
    }

    void nextDay()
    {
        int date[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

        day = getDay();
        month = getMonth();
        year = getYear();

        day++;

        if (month == 2) {
            if (isLeapYear(getYear()) && day > 29) {
                month++;
                day = 1;
            }
            else if (!isLeapYear(getYear()) && day > 28) {
                month++;
                day = 1;
            }
        }        

        else if (day > date[month]) {            

            if (month == 12) {
                year++;
            }
            month++;
            day = 1;
        }

        month = (month % 12 == 0) ? 12 : month % 12;

        setDay(day);
        setMonth(month);
        setYear(year);
    }
};


int main()
{
    Date date_a(2020, 1, 27);
    date_a.displayDate();

    while (date_a.getMonth() <= 2) {
        date_a.nextDay();
        date_a.displayDate();
    }

    Date date2(2018, 12, 31);
    date2.displayDate();
    date2.nextDay();
    date2.displayDate();

    return 0;
}

