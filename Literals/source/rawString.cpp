#include<iostream>
#include<string>

int main(){

// includes \n and \t
    std::string nat = "C:\temp\newFile.txt";

    std::string raw = R"(C:\temp\newFile.txt)";

    std::string raw2 = R"TRENNER(C:\temp\newFile.txt)TRENNER";

    std::cout << nat << "\n" << raw << "\n" << raw2 << "\n";
}