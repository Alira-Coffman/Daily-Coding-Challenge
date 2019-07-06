#include <iostream>
#include <string>
using namespace std;

int Factorial(int num) { 

  int factorial = 1;
  for(int i = num; i > 0; i--)
  {
      factorial*=i;
  }
  return factorial;
            
}

int main() { 
  
  int value;
  cout << "Enter a value to find factorial: ";
  cin >> value;
  cout << Factorial(value);
  return 0;
    
} 
