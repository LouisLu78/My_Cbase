# include <iostream>

using namespace std;

int isLeapYear(int year);

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
    year = (formalYear <= 0)? 1 : formalYear;
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
    day = (formalDay < 1 || formalDay > 31) ? 1 : formalDay;
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
    int day0, month0;
	day0 = getDay();
    month0 = getMonth();


    setDay(day0++);

    if (month0 == 1 || month0 == 3 || month0 == 5 || month0 == 7 || month0 == 8
    || month0 == 10 || month0 == 12){
        if (day0 > 31){
            setMonth(month0++);
            setDay(day0 - 31);
        }
    }

    else if (month0 == 4 || month0 == 6 || month0 == 9 || month0 == 11){
        if (day0 > 30){
            setMonth(month0++);
            setDay(day0 - 30);
        }
    }

    else{
        if (isLeapYear(getYear()) && day0 > 29){
            setMonth(month0++);
            setDay(day0 - 29);
        }
        else if (day0 > 28){
            setMonth(month0++);
            setDay(day0 - 28);
        }
    }

}
};

int main()
{
    Date date1(2020, 1, 31);
    
    while (date1.getMonth() <= 2 && date1.getDay() <= 10){     	
    	date1.nextDay();
    	date1.displayDate();
	}
	 
    Date date2(2018, 12, 9);
    date2.displayDate();



    return 0;
}

int isLeapYear(int year)
{
    int flag=0;
    if (year % 100 == 0){
        if (year % 400 == 0){
           flag = 1;
       }
    }
    else if (year % 4 == 0){
         flag = 1;
    }
    return flag;
}
