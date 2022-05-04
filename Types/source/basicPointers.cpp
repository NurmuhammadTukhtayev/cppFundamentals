//Basic pointers

#include <iostream>

int main(){

  std::cout << std::endl;

  int i{2011};
  int* iptr= &i;

  std::cout << i << std::endl;

  std::cout << "iptr: " << iptr << std::endl;
  std::cout << "*iptr: " << *iptr << std::endl;

  std::cout << std::endl;

  int * jptr = iptr;
  *jptr = 2014;

  std::cout << "iptr: " << iptr << std::endl;
  std::cout << "*iptr: " << *iptr << std::endl;

  std::cout << "jptr: " << jptr << std::endl;
  std::cout << "*jptr: " << *jptr << std::endl;

}

// output be like

//2011
// iptr: 0x7ffe2f1b2f84
// *iptr: 2011

// iptr: 0x7ffe2f1b2f84
// *iptr: 2014
// jptr: 0x7ffe2f1b2f84
// *jptr: 2014



// Explanation#
// This example shows an instance of two pointers pointing to the same object.

// Since both iptr and jptr point to i, changing the dereferenced value of jptr in line 18 changes the values of i and iptr as well.

