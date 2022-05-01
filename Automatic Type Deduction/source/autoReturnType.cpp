// Rules#
// The syntax above follows a few rules:

// auto: introduces the syntax for the delayed return type.

// decltype: declares the return type.

// The alternative function syntax is obligatory.

// Using this strategy, the return type of the function can be deduced from the types of its arguments.

// C++14#
// C++14 makes things even simpler. We don’t need to use decltype to deduce the function’s return type anymore. auto handles everything:


#include <iostream>
#include <typeinfo>

template<typename T1, typename T2>
auto add(T1 first, T2 second) -> decltype(first + second){
    return first + second;
}

int main(){

  std::cout << std::endl;

  std::cout << "add(1, 1)= " << add(1, 1) << std::endl;
  std::cout << "typeid(add(1, 1)).name()= " << typeid(add(1, 1)).name() << std::endl;

  std::cout << std::endl;

  std::cout << "add(1, 2.1)= " << add(1, 2.1) << std::endl;
  std::cout << "typeid(add(1, 2.1)).name()= " << typeid(add(1, 2.1)).name() << std::endl;

  std::cout << std::endl;

  std::cout << "add(1000LL, 5)= " << add(1000LL, 5) << std::endl;
  std::cout << "typeid(add(1000LL, 5)).name()= " << typeid(add(1000LL, 5)).name() << std::endl;

  std::cout << std::endl;

}