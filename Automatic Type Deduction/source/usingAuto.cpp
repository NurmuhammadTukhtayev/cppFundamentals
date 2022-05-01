// Using auto#
// The danger seen above is not present when using auto. Everything happens auto-matically. Let us see an example of this:#include <typeinfo>
#include <iostream>

int main(){
  
  std::cout << std::endl;

  auto a = 5;
  auto b = 10;
  auto sum =  a * b * 3;
  auto res = sum + 10; 
  std::cout << "typeid(res).name(): " << typeid(res).name() << std::endl;
  
  auto a2 = 5;
  auto b2 = 10.5;
  auto sum2 = a2 * b2 * 3;
  auto res2 = sum2 * 10;  
  std::cout << "typeid(res2).name(): " << typeid(res2).name() << std::endl;
  
  auto a3 = 5;
  auto b3 = 10;
  auto sum3 = a3 * b3 * 3.1f;
  auto res3 = sum3 * 10;  
  std::cout << "typeid(res3).name(): " << typeid(res3).name() << std::endl;
  
  std::cout << std::endl;
   
}

// The small variations in the code snippet always determine the right type of res, res2, or res3.
//  That’s the job of the compiler. The variable b2 in line 15 is a double and, therefore, res2 is also a double.

// The variable sum3 in line 22 becomes a floating point number because it’s being multiplied by the 
// float literal, 3.1f. Therefore the final result, res3, is also a float point number. 
// To get the data type from the compiler, we have used the typeid operator that is defined in the header typeinfo.