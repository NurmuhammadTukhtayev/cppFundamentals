#include <iostream>
#include <vector>

int func(int){ return 2011;}

int main(){

  auto i = 5;
  auto& intRef = i;             // int&
  auto* intPoint = &i;         // int*
  const auto constInt = i;     // const int
  static auto staticInt = 10;  // static int

  std::vector<int> myVec;
  auto vec = myVec;           // std::vector<int>
  auto& vecRef = vec;         // std::vector<int>&

  int myData[10];
  auto v1 = myData;           // int*
  auto& v2 = myData;          // int (&)[10]

  auto myFunc = func;          // (int)(*)(int)
  auto& myFuncRef = func;      // (int)(&)(int)

  // define a function pointer
  int (*myAdd1)(int, int) = [](int a, int b){return a + b;};

  // use type inference of the C++11 compiler
  auto myAdd2 = [](int a, int b){return a + b;};

  std::cout << "\n";

  // use the function pointer
  std::cout << "myAdd1(1, 2) = " << myAdd1(1, 2) << std::endl;

  // use the auto variable
  std::cout << "myAdd2(1, 2) = " << myAdd2(1, 2) << std::endl;

  std::cout << "\n";

}

// Explanation#
// In the example above, the types are automatically deduced by the compiler, based on the value stored in the variable. The corresponding types of variables are mentioned in the in-line comments.

// In line 8, we have defined a variable, i, and its type is deduced to be int because of the value 5 stored in it.

// In lines 9-12, we have copied the values into different variables and their type is deduced auto-matically based on the value stored in it.

// Similarly, in lines 15-16, we are copying a vector and the reference to it using the assignment operator, =. The auto keyword takes care of vec and vecRef types.

// In lines 22-23, auto determines the type of myFunc to be a function pointer and myFuncRef as a reference to the function.

// In line 29, we have defined a lambda expression whose return type is inferred by the C++ compiler since we have used the auto keyword.