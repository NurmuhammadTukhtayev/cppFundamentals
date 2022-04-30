// References as parameters#
// References allow functions to modify the value of a variable.
//  When a normal variable is passed to a function, a copy of its value is made and the variable itself remains untouched. 
// However, if a reference is passed, the actual value of the variable is used and can therefore be modified.

#include <iostream>

void xchg(int& x, int& y){ // Reference parameters
  int t = x;
  x = y;
  y = t;
}

int main() {
  int a = 10;
  int b = 20;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  xchg(a, b);
  std::cout << std::endl;

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
}

// This functionality is also very useful when dealing with a large argument. 
// Passing it by value would mean that a copy has to be made in the function. This is memory-intensive.

// A reference to the argument would prevent unnecessary copying.