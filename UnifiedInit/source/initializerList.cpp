#include <initializer_list>
#include <iostream>
#include <string>

class MyData{
  public:

    MyData(std::string, int){       // classical constructor
      std::cout << "MyData(std::string, int)" << std::endl;
    }

    MyData(int, int){       // classical constructor
      std::cout << "MyData(int, int)" << std::endl;
    }

    MyData(std::initializer_list<int>){         // sequence constructor
      std::cout << "MyData(std::initializer_list<int>)" << std::endl;
    }
};

template<typename T>
void printInitializerList(std::initializer_list<T> inList){
  for (auto& e: inList) std::cout << e << " ";
}

int main(){

  std::cout << std::endl;

  // sequence constructor has a higher priority
  MyData{1, 2};

  // invoke the classical constructor explicitly
  MyData(1, 2);

  // use the classical constructor
  MyData{"dummy", 2};

  std::cout << std::endl;

  // print the initializer list of ints
  printInitializerList({1, 2, 3, 4, 5, 6, 7, 8, 9});

  std::cout << std::endl;

  // print the initializer list of strings
  printInitializerList({"Only", "for", "testing", "purpose."});

  std::cout << "\n\n";

}

// Explanation#
// When we invoke the constructor with curly braces such as in line 31, the sequence constructor from line 16 is used first.

// The classical constructor in line 12 serves as a fallback. This fallback does not work the other way around. When we invoke the constructor with round braces, as seen in line 34, the sequence constructor is not a fallback for the classical constructor in line 12.

// The sequence constructor is a constructor that takes an std::initalizer_list.