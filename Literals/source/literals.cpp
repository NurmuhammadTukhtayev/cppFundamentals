// Literals are explicit values in the program.
#include<iostream>

int main(){
    int unsigned_int = u'U'; // unsigned integer
    int hex = 0x2a;  // Hexadecimal integer
    std::string raw = R"(Raw string
    It's fun
    Is it not?)";

    std::cout << unsigned_int << ", " << hex << ", " << raw << "\n";

}