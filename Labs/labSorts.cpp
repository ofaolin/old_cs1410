#include <iostream>

using namespace std;

bool validInput = true; //boolean value to check validity of input
int counter = 0; //counter that affects number of input vals
int numList[6]; //master int list, input by user
int tempArr[6]; //temporary array to hold vals for sorting so master is not affected
int tempSlotA, tempSlotB; //temporary int variables for holding val while swapping

void tempInitArray(int arr[],int len){ //funtion to print the input array
    int a = 9;
    for (int i = 0; i <= len; i++){
        arr[i] = a;
        a--;
    }
    cout << endl << endl;
}

void mathSwap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}

bool validityChecker(int input){ //checks if input is -1
    if (input >= 0 || input <= -2)
        return true;
    else {
        cout << "Please input valid number";
        return false;
    }
}

void getInput() { //function to take 6 ints and puts them into numList, input of -1 will stop
    while (validInput != false && counter <= 5){
        int input;
        cout << "Input a number (-1 to stop): ";
        cin >> input;
        validInput = validityChecker(input);
        if (validInput == true) {
            numList[counter] = input;
            counter++;
        }
    }
    cout << endl;
}

void printArray(int arr[],int len){ //funtion to print the input array
    for (int i = 0; i <= len; i++){
        cout << arr[i];
        if (i < len)
            cout << ", ";
    }
    cout << endl << endl;
}

void arraySwap(int arr[],int len){ //swap master numList into temp array for sorting without affecting original
    for (int i = 0; i <= len; i++){
        tempArr[i] = arr[i];
    }
}

void bubbleSort(int arr[],int len){ //takes array and sorts ints in ascending order using bubble sort algorithm
    cout << "Initiating Bubble Sort..." << endl << endl;
    int i = len;
    int lastRun = 6;
    bool swapCheck = false;
    do {
        if (arr[i] < arr[i-1]){
            mathSwap(arr[i],arr[i-1]);
            swapCheck = true;
            lastRun++;
        }else if (arr[i-1] <= arr[i]) {
            swapCheck = false;
            lastRun--;
        }
        i--;
        if (i == 0)
            i = len;
    } while ((swapCheck == true) || (lastRun != 0));
}

int partition(int arr[],int low, int high) {
    int pivot = arr[high];
    
}

void quickSort(int arr[],int low, int high) { //takes array and sorts ints in ascending order using quick sort algorithm
    if (low > high)
}

int main() {
    
    //getInput();

    tempInitArray(numList,5);

    arraySwap(numList,5);

    //printArray(tempArr,5);

    //bubbleSort(tempArr,5);

    //printArray(tempArr,5);

    //arraySwap(numList,5);

    //cout << "Unsorting..." << endl << endl;

    printArray(tempArr,5);

    cout << "Initiating Quick Sort..." << endl << endl;

    quickSort(tempArr,5);

    printArray(tempArr,5);
}