#include <iostream>
 
int main() {
std::cout << "Enter a number: ";
int num;
std::cin >> num;

for(int i = num; i >= 0; i--)
   std::cout << "i: " << i;
}