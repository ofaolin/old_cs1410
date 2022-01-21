#include <iostream>
#include <iomanip>
using namespace std;

float median, mode, sum; //declare calculation variables
int mean; //declare mean, floored
float input = 0; //declare input variable
float arr [10]; //declare array

int main() {

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        arr[i] = -1; //initialize array
    }

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);) {
        if (input != -1) {
        cout << "Enter a number between 0 and 100 (-1 to terminate): ";
        cin >> input;
            if (input >= 0 && input <= 100) {
            arr[i] = input;
            i++;
            } else if (input != -1) {
                cout << "Please enter a valid number; Must be between 0 and 100." << endl;
            }
        } else {
            cout << "Input terminated, continiuing with input numbers.";
            break;
            }
    } //get values input into array

    sort(arr, arr + 9); //sort array, I cheated.

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        sum += arr[i];
    } //get sum of array
    mean = sum / 10; //find mean, floored it

    median = ((arr[4] + arr[5]) / 2); //calculate median

    float a, count = arr[0], countMode; //declare temp variables for mode counting

    for (int i=1; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] == a) { // count occurrences of the current number
            ++count;
        } else {
                if (count > countMode) {
                    countMode = count; // mode is the biggest ocurrence
                    mode = a;
                }
            count = 1; // reset count for the new number
            a = arr[i];
        }
    }   

    //print the results
    cout << endl;
    cout << setw(5) << "Mean(f)" << setw(9) << "Median" << setw(7) << "Mode" << endl;
    cout << setw(5) << mean << setw(9) << median << setw(7) << mode << endl << endl;

}