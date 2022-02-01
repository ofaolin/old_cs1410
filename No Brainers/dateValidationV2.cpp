#include <iostream>
using namespace std;

enum monthName {Null, January, February, March, April, May, June, July, August, September, October, November, December};

string Months[13] = {"Null","January","February","March","April","May","June","July","August","September","October","November","December"};

int getWeekDay(int y, int m, int d) {
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= m < 3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

class Date {
    private:
    int Day;
    int Month;
    int Year;
    string dayOfWeek;
    bool leapYear;
    string wasLeap;

    public:
    bool setYear(int year) {
        if (year <= 9999 && year >= 1700) {
            Year = year;
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                leapYear = true;
            else 
                leapYear = false;
            return true;
        } else {
            cout << "Please enter a valid year." << endl;
            return false;
        }
    }

    int getYear() {
        return Year;
    }

    bool setMonth(int month) {
        if (month >= 0 && month <= 12) {
            Month = month;
            return true;
        }
        else {
            cout << "Please enter a valid month." << endl;
            return false;
        }
    }

    int getMonth() {
        return Month;
    }

    bool setDay(int day) {
            if (Month == January || Month == March || Month == May || Month == July || Month == August || Month == October || Month == December && day <= 31) {
                Day = day;
                return true;
            }
            else if (Month == February) {
                if (day <= 28) {
                    Day = day;
                    return true;
                }
                else if (leapYear == true && day <= 29) {
                    Day = day;
                    return true;
                }
                else {
                    cout << "Please enter a valid day." << endl;
                    return false;
                }
            } 
            else if ((Month == April || Month == June || Month == September || Month == November) && (day <= 30)) {
                Day = day;
                return true;
            }
            else {
                cout << "Please enter a valid day." << endl;
                return false;
            }
    }
    
    int getDay() {
        return Day;
    }

    void setWeekDay(int weekday) {
        switch(weekday){
        case 0: dayOfWeek = "Sunday";
        break;
        case 1: dayOfWeek = "Monday";
        break;
        case 2: dayOfWeek = "Tuesday";
        break;
        case 3: dayOfWeek = "Wednesday";
        break;
        case 4: dayOfWeek = "Thursday";
        break;
        case 5: dayOfWeek = "Friday";
        break;
        case 6: dayOfWeek = "Saturday";
        break;
    }
    }

    string getWeekDay() {
        return dayOfWeek;
    }

    void printDate (){
        if (leapYear == true)
            wasLeap = ", a Leap Year!";
        cout << "The date entered is: " << dayOfWeek << ", " << Months[Month] << " " << Day << ", " << Year << wasLeap << endl;
    }
};

int main() {
    bool inputValidity = false;
    int input = 0;
    Date date;

    while (inputValidity != true) {
        cout << "Please enter year (yyyy): ";
        cin >> input;
        inputValidity = date.setYear(input);
    }

    inputValidity = false;

    while (inputValidity != true) {
        cout << "Please enter month (mm): ";
        cin >> input;
        inputValidity = date.setMonth(input);
    }

    inputValidity = false;

    while (inputValidity != true) {
        cout << "Please enter day (dd): ";
        cin >> input;
        inputValidity = date.setDay(input);
    }

    date.setWeekDay(getWeekDay(date.getYear(), date.getMonth(), date.getDay()));

    date.printDate();
}