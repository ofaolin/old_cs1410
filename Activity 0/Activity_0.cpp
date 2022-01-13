#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {

    int resultInt = 11 / 4;
    int resultMod = 11 % 4;
    float result = 11.0f / 4;
    const double PI = 3.14159265359;
    
    
    cout << setw(7) << "Type";
    cout << setw(9) << "Result" << endl;
    cout << setw(7) << "Int";
    cout << setw(9) << resultInt << endl;
    cout << setw(7) << "Mod";
    cout << setw(9) << resultMod << endl;
    cout << setw(7) << "Regular";
    cout << setw(9) << result << endl;
    cout << setw(7) << "PI";
    cout << setw(9) << PI << endl;

return 0;
}
