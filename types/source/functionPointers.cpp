// Function pointers#

#include <iostream>

void addOne(int& x){
  x += 1;
}

int main(){

  void (*inc1)(int&)= addOne;
  auto inc2 = addOne;

  int a{10};

  addOne(a);
  std::cout << "after addOne(a): " << a << std::endl;
  inc1(a);
  std::cout << "after inc1(a): "  << a << std::endl;
  inc2(a);
  std::cout << "after inc2(a): "  << a << std::endl;

  std::cout << std::endl;
}

// Explanation#
// In addOne, an integer is passed by reference. Hence, calling the function will change the actual value of the integer.

// inc1 points to the addOne function. Hence, it will have the same functionality.

// We do not need to explicitly define the type of the inc2 function pointer. This is because we use the auto keyword. We’ll study this in more detail in the near future.

