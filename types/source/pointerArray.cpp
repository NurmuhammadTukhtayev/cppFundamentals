// intArray itself holds the address for the zeroth index of the array. 
//Hence, intArray + i gives us the pointer to the i-th index. Then, the pointer is 
//simply dereferenced to obtain the value. All of this happens when we use the [] brackets for indexing.

#include <iostream>

int main() {
  int intArray[] = {15, 30, 45, 60};
  std::cout << intArray[2] << std::endl;
  std::cout << *(intArray + 2) << std::endl;
}   