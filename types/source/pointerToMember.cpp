// Pointer to member#

#include <iostream>

struct X{
  int data;
};

int main(){

  std::cout << std::endl;

  int X:: * p = &X::data;
  X object;
  object.data = 2011;
  X* objptr = new X;
  objptr->data = 2014;


  int k = object.*p;
  int l = objptr->*p;

  std::cout << "k: " << k << std::endl;
  std::cout << "l: " << l << std::endl;

  std::cout << std::endl;
}

// Explanation#
// This code is an example of how we can make pointers to the members of a struct or class.

// The pointer for the data member is made in line 11 using the following syntax:
// pointerType structName :: *pointerName = &structName :: dataMember

// The pointerType must match the type of the dataMember.

// The pointer is then dereferenced in lines 18 and 19.