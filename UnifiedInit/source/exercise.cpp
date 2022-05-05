// Initialize the following containers:

// std::array
// std::vector
// std::set
// std::unordered_multiset
// with the {-10, 5, 1, 4, 5} initializer list.


#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <array>

template <typename T>
void print(T lst ){
  for(auto& x : lst) std::cout << x << " ";
  std::cout<<'\n';
}

int main() {
  // your code goes here
  std::vector<int> vec = {-10, 5, 1, 4, 5};
  print(vec);

  std::set<int> st = {-10, 5, 1, 4, 5};
  print(st);

  std::unordered_multiset<int> ust = {-10, 5, 1, 4, 5};
  print(ust);

  std::array<int, 5> arr = {-10, 5, 1, 4, 5};
  print(arr);
}