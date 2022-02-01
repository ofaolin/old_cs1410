#include <iostream>
using namespace std;

struct Date {
    int Day;
    int Month;
    int Year;
    string dayOfWeek;
    bool leapYear;
};

bool leapChecker;

enum monthName {Null, January, February, March, April, May, June, July, August, September, October, November, December};

string Months[13] = {"Null","January","February","March","April","May","June","July","August","September","October","November","December"};

int getWeekDay(int y, int m, int d) {
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= m < 3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

bool validateYear(int year) {
        if (year <= 9999 && year >= 1700) {
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                leapChecker = true;
            else 
                leapChecker = false;
            return true;
        } else {
            cout << "Please enter a valid year." << endl;
            return false;
        }
    }

bool validateMonth(int month) {
    if (month >= 0 && month <= 12) {
        return true;
    }
    else {
        cout << "Please enter a valid month." << endl;
        return false;
    }
}

bool validateDay(int day, int month, int year, bool leap) {
    if (month == January || month == March || month == May || month == July || month == August || month == October || month == December && day <= 31) {
        return true;
    }
    else if (month == February) {
        if (day <= 28) {
            return true;
        }
        else if (leap == true && day <= 29) {
            return true;
        }
        else {
            cout << "Please enter a valid day." << endl;
            return false;
        }
    } 
    else if ((month == April || month == June || month == September || month == November) && (day <= 30)) {
        return true;
    }
    else {
        cout << "Please enter a valid day." << endl;
        return false;
    }
}
    
string getWeekDayWord(int weekday) {
    switch(weekday){
    case 0: return "Sunday";
    break;
    case 1: return "Monday";
    break;
    case 2: return "Tuesday";
    break;
    case 3: return "Wednesday";
    break;
    case 4: return "Thursday";
    break;
    case 5: return "Friday";
    break;
    case 6: return "Saturday";
    break;
    default: return "Null";
    break;
    }
}

void printDate (string weekday, int day, int month, int year, bool leapYear){
    if (leapYear == true)
        cout << "The date entered is: " << weekday << ", " << Months[month] << " " << day << ", " << year << ", a Leap Year!" << endl;
    else
        cout << "The date entered is: " << weekday << ", " << Months[month] << " " << day << ", " << year << endl;
}

int main() {
    bool inputValidity = false;
    int input = 0;
    Date date;

    while (inputValidity != true) {
        cout << "Please enter year (yyyy): ";
        cin >> input;
        inputValidity = validateYear(input);
        if (inputValidity == true)
            date.Year = input;
            date.leapYear = leapChecker;
    }

    inputValidity = false;

    while (inputValidity != true) {
        cout << "Please enter month (mm): ";
        cin >> input;
        inputValidity = validateMonth(input);
        if (inputValidity == true)
            date.Month = input;
    }

    inputValidity = false;

    while (inputValidity != true) {
        cout << "Please enter day (dd): ";
        cin >> input;
        inputValidity = validateDay(input, date.Month, date.Year, leapChecker);
        if (inputValidity == true)
            date.Day = input;
    }

    date.dayOfWeek = getWeekDayWord(getWeekDay(date.Year, date.Month, date.Day));

    printDate(date.dayOfWeek, date.Day, date.Month, date.Year, date.leapYear);
}