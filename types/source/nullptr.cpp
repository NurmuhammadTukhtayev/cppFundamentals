// nullptr

#include <iostream>
using namespace std;

int main() {
  int* pi = nullptr;       // OK
  std::cout << pi << std::endl;

  // int i = nullptr;      // ERROR

  bool b{nullptr};         // OK
  std::cout << b << std::endl;
}

// Explanation#
// The nullptr can be assigned to any arbitrary pointer, as seen in line 5.

// The nullptr cannot be assigned to any arbitrary variable except a bool. This will only work when creating a bool through uniform initialization, as seen in line 10.

