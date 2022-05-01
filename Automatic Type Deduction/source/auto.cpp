// auto-matically initialized#

// initAuto.cpp

#include <iostream>
#include <string>
 
struct T1 {};
 
struct T2{
    int mem = 0;  // auto mem= 0 is an error
 public:
    T2() {}
};
 
auto n = 0;
 
int main(){
  
  std::cout << std::endl;
  
  using namespace std::string_literals;
  
  auto n = 0;
  auto s = ""s;      
  auto t1= T1();               
  auto t2= T2();
    
  std::cout << "::n " << ::n << std::endl;
  std::cout << "n: " << n << std::endl;
  std::cout << "s: " << s << std::endl;
  std::cout << "T2().mem: " << T2().mem << std::endl;
  
  std::cout << std::endl;
                      
}

// auto determines its type from an initializer. That simply means that; without an initializer, there is no type and therefore, no variable. In simpler terms, the compiler ensures that each type is initialized. This is a nice side effect of auto which is rarely mentioned.

// It makes no difference whether we forget to initialize a variable or didn’t initialize it because of a misunderstanding of the language. The result is the same: undefined behaviour. With auto, we can overcome these nasty errors.

// Do we know all the rules for the variable initialization? If yes, congratulations. If not, read the article default initialization and all referenced articles in the given link.

// The article contains the following statement: “objects with automatic storage duration (and their sub-objects) are initialized to indeterminate values”. This optimization causes more harm than good. Local variables that are not user-defined will not be default initialized.

// I modified the second program to default initialization to make the undefined behavior more obvious.