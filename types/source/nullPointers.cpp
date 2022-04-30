// Properties
// We can assign nullptr to arbitrary pointers.

// The pointer becomes a null pointer and points to no data.

// We cannot dereference a nullptr.

// A nullptr pointer can be compared with all other pointers.

// A nullptr can be converted to all pointers. This also holds true for pointers to class members.

// We cannot compare or convert a nullptr to an integral type. There is one exception to this rule. We can implicitly compare and convert a bool value with a nullptr. Therefore, we can use a nullptr in a logical expression.

#include <iostream>
#include <string>

std::string overloadTest(char*){
  return "char*";
}

std::string overloadTest(long int){
  return "long int";
}

int main(){

  std::cout << std::endl;

  long int* pi = nullptr;       
  // long int i= nullptr;       // ERROR
  auto nullp= nullptr;          // type std::nullptr_t
  
  bool b(nullptr);           
  std::cout << std::boolalpha << "b: "  << b << std::endl;
  auto val= 5;
  if ( nullptr < &val ){ std::cout << "nullptr < &val" << std::endl; }  

  // calls char*
  std::cout << "overloadTest(nullptr)= " <<  overloadTest(nullptr)<< std::endl;

  std::cout << std::endl;

}