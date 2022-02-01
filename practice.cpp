#include <iostream>
using namespace std;

int fib (int n )
{
     if(n <= 1)


          return n;


     return fib(n--) + fib(n-2);
}

int main() {
   int sum = 1;
while ( sum <= 10 ){
   std::cout << "Sum: " << sum << " ";
    sum++;
}

 return 0;
}