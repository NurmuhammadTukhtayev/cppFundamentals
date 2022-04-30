//Pointer arithmetic#

#include <iostream>

int main(){

  int intArray[] = {1, 2, 3, 4, 5};
  if (intArray[3] == *(intArray + 3)) std::cout << "Pointer arithmetic works" << std::endl;
}

// Explanation#
// As we discussed earlier, arrays use pointer arithmetic.
// This can be seen in line 6 where both syntaxes return the same value.
