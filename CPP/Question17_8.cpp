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
    int day0, month0, year0;
    
	day0 = getDay();
    month0 = getMonth();
    year0 = getYear();

	day0++;
    

    if (month0 == 1 || month0 == 3 || month0 == 5 || month0 == 7 || month0 == 8
    || month0 == 10){
        if (day0 > 31){
        	month0++;            
            day0 = 1;
            
        }
    }
    
    else if (month0 == 12){
    	if (day0 > 31){
    		year0++;
			month0 = 1;            
            day0 = 1;
		}	
	}

    else if (month0 == 4 || month0 == 6 || month0 == 9 || month0 == 11){
        if (day0 > 30){
            month0++;            
            day0 = 1;            
        }
    }

    else if (month0 == 2) {
        if (isLeapYear(getYear()) && day0 > 29){
            month0++;
            day0 = 1;            
        }
        else if (!isLeapYear(getYear()) &&day0 > 28){
            month0++;            
            day0 = 1;            
        }
    }
    
    setDay(day0);
    setMonth(month0);
    setYear(year0);

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
	 
    Date date2(2018, 12, 31);
    date2.displayDate();
    date2.nextDay();
    date2.displayDate();



    return 0;
}//I have aleady solved this question successfully!

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
