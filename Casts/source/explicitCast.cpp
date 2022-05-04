// The compiler performs implicit casts during operations. However, C++ allows us to apply explicit casts as well.

// There are 4 different named cast operators:

// dynamic_cast
// static_cast
// const_cast
// reinterpret_cast

#include <iostream>

int main(){

  double d = 2;
  auto p = (long*)&d;
  auto q = (long long*)&d;
  std::cout << d << ' ' << *p << ' ' << *q << '\n';
  
}

// We should avoid using C-casts since they present a number of problems.

// What is bad about the C-cast? We don’t see which cast is actually used. If we perform a C-cast, a combination of casts will be applied, if necessary. Roughly speaking, a C-cast starts with a static_cast, continues with a const_cast, and finally performs a reinterpret_cast.

// The output doesn’t look too promising. A conversion like this could cause serious problems in a program. Hence, it is always better and safer to use named casts instead of C-casts.