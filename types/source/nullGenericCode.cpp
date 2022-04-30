// Generic code#
// The literal 0 and NULL show their true nature in generic code. Thanks to template argument deduction, both literals are integral types in the function template. There is no hint that both literals were null pointer constants.

// The code below will give an error:

#include <cstddef>
#include <iostream>
 
template<class P >
void functionTemplate(P p){
  int* a= p;
}
 
int main(){
  int* a= 0;           
  int* b= NULL;              
  int* c= nullptr;
 
  functionTemplate(0);   
  functionTemplate(NULL);
  functionTemplate(nullptr);  
}

// We can use 0 and NULL to initialize the int pointer in line 10 and 11, but if we use the values 0 and NULL as arguments of the function template, the compiler will loudly complain.

// The compiler deduces 0 in the function template to type int; it deduces NULL to the type long int. But these observations will not hold true for nullptr. The nullptr in lines 12 and 16 is of the type std::nullptr_t.