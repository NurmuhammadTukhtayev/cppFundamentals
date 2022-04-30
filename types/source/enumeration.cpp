// enumClassic.cpp
// Drawbacks of enumerations in classical C++

#include <iostream>

int main(){
	
  std::cout << std::endl;
	
  enum Colour{red= 0,green= 5,blue};
  
  std::cout << "red: " << red << std::endl;  // red: 0
  std::cout << "green: " << green << std::endl; // green: 5
  std::cout << "blue: " << blue << std::endl; // blue: 6
  
  int red2= red;
  
  std::cout << "red2: " << red2 << std::endl;
  
  // int red= 5;  ERROR
  
}