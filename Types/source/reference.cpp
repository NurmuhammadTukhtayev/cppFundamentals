// References
// A reference is an alias for an existing variable. It can be created using the & operator.

// Once created, the reference can be used instead of the actual variable. Altering the value 
// of the reference is equivalent to altering the referenced variable.

#include <iostream>

int main() {
  int i = 20;
  int& iRef = i;
  std::cout << "i: " << i << std::endl;
  std::cout << "iRef: " << iRef << std::endl;
  
  std::cout << std::endl;

  iRef = 30; // Altering the reference

  std::cout << "i: " << i << std::endl;
  std::cout << "iRef: " << iRef << std::endl;
}

// References vs. pointers#
// There is a lot of overlap between pointers and references but the two have some stark differences as well.

// A reference is never NULL. Therefore, it must always be initialized by having an existing variable assigned to it. 
// The following lines would not work:

// int& intRef;
// int& intRef = NULL;

// References behave like constant pointers. A reference always refers to its initial variable. 
// The value of the variable can change but the reference cannot be assigned to another variable.

// Like pointers, a reference can only be initialized by a variable of the same type.