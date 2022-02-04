#include <iostream>
using namespace std;
 
enum DayOfWeek{Null, SUN, MON, TUE, WED, THU, FRI, SAT};
 
string nameDayOfWeek(int);
 
int main()
{
   int d;
   cout << "Enter a day number (between 1 and 7): " << endl;
   cin >> d;
   day = static_cast<DayOfWeek>(d);
 
   cout << "Day of the week is " << nameDayOfWeek(d) << endl;
   return 0;
}
 
string nameDayOfWeek(DayofWeek day){
     string d = "null";
     switch (day){
     case 1: d = "Sunday";
          break;
     case 2: d = "Monday";
          break;
     case 3: d = "Tuesday";
          break;
     case 4: d = "Wednesday";
          break;
     case 5: d = "Thursday";
          break;
     case 6: d = "Friday";
          break;
     case 7: d = "Saturday";
          break;
     default:
          break;
     }
 return d;
}
