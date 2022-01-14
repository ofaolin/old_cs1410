#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cout << "Type a number: ";
    cin >> x;
    if (x > 10){
        cout << "This is a good number!";
    } 
    else{
        cout << "This is not a good number!";
    }
    return 0;
}