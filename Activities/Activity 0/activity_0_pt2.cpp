#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  float fah, cel;		    	//Declare Variables
 
 cout << "Enter Fahrenheit: ";
 cin >> fah;		   	//Get the Input
 
 cel = (fah - 32) * 5/9; 	//Do the Math
 
 cout <<fixed << setprecision(3) << "Celsius: " << cel; //Display the output
 
 return 0;
}
