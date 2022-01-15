#include <iostream>
#include <string>
using namespace std;



int main() {
    float mean, median, mode, sum; //initialize calculation variables
    float input = 0; //declare input variable
    float arr [10]; //declare array

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
            cout << "Terminated";
            break;
            }
    } //get values input into array

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        sum += arr[i];
    } //get sum of array
    mean = sum / 10; //find mean

    cout << mean << endl;

    sort(arr, arr + 9); //sort array
    median = ((arr[4] + arr[5]) / 2); //calculate median

    cout << median << endl;
/*    
for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    } //print array
*/

}