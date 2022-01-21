#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

float sum; //declare calculation variables
float input = 0; //declare input variable
vector <int> inputList; //declare vector for inputs
int varChecker = 1; //declare temp check variable
vector <int> divList; //declare a vector for the divisors


int main() {

    for (int i = 0; i < 10; i++) {
        if (input != -1) {
        cout << "Enter a number (-1 to terminate): ";
        cin >> input;
        inputList.push_back(input);
        } else if (input == -1) {
            cout << "Input terminated, continiuing with input numbers." << endl;
            inputList.pop_back();
            break;
            }
    } //get values input into input vector

    cout << endl;
    
    for (int i = 0; i < inputList.size(); i++) {
        divList.clear();
        varChecker = inputList[i];
        for (int i = varChecker-1; i >= 1; i--) {
            if (varChecker % i == 0 && i != 0) {
                divList.push_back(i);
            } //check if the iterator is a divisor of the varChecker and input into divlist if it is
        }// iterate from varchecker value to 1 and check each

        for (int i = 0; i < divList.size(); i++) {
            sum += divList[i];
        } //get sum of vector

        if (sum == varChecker)
        cout << varChecker << " is a perfect number." << endl;
        else if (sum > varChecker)
        cout << varChecker << " is an abundant number." << endl;
        else if (sum < varChecker)
        cout << varChecker << " is a deficient number." << endl;
        sum = 0;
    }
}   

