// Pointers don’t always have to point to an existing value. 
//They can be used to create values and arrays in dynamic memory, which is really helpful during runtime.
//To create dynamic data using pointers, we must use the new keyword. The type of the pointer and the value must be the same.

To create dynamic data using pointers, we must use the new keyword. The type of the pointer and the value must be the same.

#include <iostream>

int main(){
  float* fltPtr = new float(50.505); // A float has been created in dynamic memory
  std::cout << *fltPtr << std::endl;
  
  int* intArray = new int[10]; // A dynamic array of size 10 has been created
  intArray[0] = 20;
  std::cout << intArray[0] << std::endl;
}