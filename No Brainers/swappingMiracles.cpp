#include <iostream>
using namespace std;

void varSwap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;   
} 

void mathSwap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}

void swapBack(int &x, int &y){
    cout << "Swapping back..." << endl;
    swap(x, y);
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;
}


int main() {
    int x = 3;
    int y = 4;
    
    cout << "Before swapping x = " << x << " y = " << y << endl;

    swap(x, y);

    cout << "After Built in Swap x = " << x << " y = " << y << endl;
    cout << endl;
    
    swapBack(x, y);

    cout << "Now using a third variable to swap..." << endl;
    varSwap(x, y);
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;

    swapBack(x, y);

    cout << "Now using only math to swap..." << endl;
    mathSwap(x, y);
    cout << "x = " << x << " y = " << y << endl;
}