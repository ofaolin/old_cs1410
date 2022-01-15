#include <iostream>
#include <string>
using namespace std;

int main() {
    float mean = 0; //initialize calculation variables
    float median = 0;
    float mode = 0;
    float input = 0; //declare input variable
    int a, b, c, temp; //declare variables for sorting
    int arr [10]; //declare array

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
    }

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        mean += arr[i];
    } //get sum of array
    mean = mean / 10; //find mean

    cout << mean << endl;

    //sorting - ASCENDING ORDER
	for (b = 0; b < a; b++) {		
		for (c = b + 1; c < a; c++) {
			if(arr[b] > arr[c]) {
				temp = arr[b];
				arr[b] = arr[c];
				arr[c] = temp;
			}
		}
	}

    //print sorted array elements
	cout << "Sorted (Ascending Order) Array elements:" << endl;
	for ( b = 0; b < a; b++)
		cout << arr[b] << "\t";
	cout<<endl;


}