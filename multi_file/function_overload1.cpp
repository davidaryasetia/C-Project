// make a program to function overload 
#include <iostream>
#include "function_overload2.cpp"

// make a main program 
int main (){
    // print and call the function 
    std::cout << "The Total funcy number (integer) : " << fancy_number(3, 4) << "\n";
    std::cout << "The Total funcy number (double) : " << fancy_number (1.43, 2.34) << "\n";
    return 0;
}