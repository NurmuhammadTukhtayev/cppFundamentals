// user definded literals
// 10101010_b // Natural numbers 
// 123.45_km // Floating point numbers
// "hello"_i18n // C-string literals
// '1'_character // Character literals

#include<iostream>

namespace Distance{
    class MyDistance{
        public:
            MyDistance(double i):m(i){}

// overloading operators
            // for operator +
            friend MyDistance operator + (const MyDistance& a, const MyDistance& b){
                return MyDistance(a.m + b.m);
            }
            
            // for operator -
            friend MyDistance operator - (const MyDistance& a, const MyDistance& b){
                return MyDistance(a.m - b.m);
            }

            // for operator <<
            friend std::ostream& operator << (std::ostream& out, const MyDistance myDist){
                out << myDist.m <<" m";
                return out;
            }

            private:
                double m;
    };

    namespace Unit{
        // literal _km
        MyDistance operator "" _km (long double d ){
            return MyDistance(1000*d);
        }

        // literal _m
        MyDistance operator "" _m (long double m){
            return MyDistance(m);
        }

        // literal _dm
        MyDistance operator "" _dm (long double dm){
            return MyDistance(dm/10);
        }

        // literal _sm
        MyDistance operator "" _sm (long double sm){
            return MyDistance(sm/100);
        }
    }
}

using namespace Distance::Unit;

int main(){

    std::cout << "1.0_km: " << 1.0_km << std::endl;
    std::cout << "1.0_m: " << 1.0_m << std::endl;
    std::cout << "1.0_dm: " << 1.0_dm << std::endl;
    std::cout << "1.0_sm: " << 1.0_sm << std::endl;


    std::cout << "1.0_km + 1.0_m + 1.0_dm + 1.0_sm = " << 1.0_km + 1.0_m + 1.0_dm + 1.0_sm << std::endl;
}