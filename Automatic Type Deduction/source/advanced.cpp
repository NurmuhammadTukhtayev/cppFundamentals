#include <chrono>
#include <future>
#include <map>
#include <string>
#include <tuple>

int main(){

  auto myInts = {1, 2, 3};
  auto myIntBegin = myInts.begin();

  std::map<int, std::string> myMap = {{1, std::string("one")}, {2, std::string("two")}};
  auto myMapBegin = myMap.begin();

  auto func = [](const std::string& a){ return a;};

  auto futureLambda= std::async([](const std::string& s ) {return std::string("Hello ") + s;}, std::string("lambda function."));

  auto begin = std::chrono::system_clock::now();

  auto pa = std::make_pair(1, std::string("second"));

  auto tup = std::make_tuple(std::string("first"), 4, 1.1, true, 'a');
}

// Explanation#
// In this example, we can see how auto is used with different libraries and data structures.

// The compiler automatically infers the correct type for the given value.

// This makes auto a very useful feature since determining or declaring the types for different libraries can be a cumbersome task.

