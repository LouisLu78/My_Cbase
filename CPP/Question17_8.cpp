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
    day = (formalDay < 0 ) ? 1 : formalDay;
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
	day = getDay();
    month = getMonth();
    year = getYear();

	day++;    

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
        || month == 10){
        if (day > 31){
        	month++;            
            day = 1;            
        }
    }
    
    else if (month == 12){
    	if (day > 31){
    		year++;
			month = 1;            
            day = 1;
		}	
	}

    else if (month == 4 || month == 6 || month == 9 || month == 11){
        if (day > 30){
            month++;            
            day = 1;            
        }
    }

    else if (month == 2) {
        if (isLeapYear(getYear()) && day > 29){
            month++;
            day = 1;            
        }
        else if (!isLeapYear(getYear()) && day > 28){
            month++;            
            day = 1;            
        }
    }
    
    setDay(day);
    setMonth(month);
    setYear(year);
}
};

int main()
{
    Date date1(2020, 1, 28);
    date1.displayDate();
    
    while (date1.getMonth() <= 2){
    	date1.nextDay();
    	date1.displayDate();
	}
	 
    Date date2(2019, 12, 31);
    date2.displayDate();
    date2.nextDay();
    date2.displayDate();

    return 0;
}//I have already solved this question successfully!

int isLeapYear(int year)
{
    int flag = 0;
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
