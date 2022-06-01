// Pointers#
// Both the pointer and the data being pointed to can be const.

// type const* / const type*#
// This declaration implies that the value being pointed to is const. It should not be altered. However, the pointer itself is not const:

// int i = 2011;
// int const* ip = &i;
// *ip = 2012; // ERROR

// int j = 2012;
// ip = &j; 
// type* const#
// In this case, the pointer is constant. It cannot point to a different pointer throughout its lifetime.

// int i = 2011;
// int j = 2012;
// int* const p = &i;
// p = &j; // ERROR

// *p = 2015; 
// const type* const#
// Now, both the pointer and the value are constant.

// int i = 100, int j = 200; 
// const int* const p = &i;
// *p = i; // ERROR 
// p = &j; // ERROR
// The line, const int* const p, should be read from right to left. p is a constant pointer, * const points to an int that is const. We can modify i directly, but we can’t modify it through p.

#include <iostream>
using namespace std;

int main() {
int i = 100, j = 200; 

const int* ip = &i;
cout << *ip << ' ' << ip << '\n';
ip = &j;
cout << *ip << ' ' << ip << '\n';
j = 500;
cout << *ip << ' ' << ip << '\n';
ip = &i;
cout << *ip << ' ' << ip << '\n';

// const int* const p = &i;
// *p = i; // ERROR 
// p = &j; // ERROR
}