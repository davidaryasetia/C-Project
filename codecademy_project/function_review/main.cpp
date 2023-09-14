/*
C++ Description of Program Function : 
1. make a program with : 
   - parameter function 
   - default parameter function
   - template parameter function
   - input output in function 
*/

#include <iostream>
#include <string>
#include "fns.cpp"

int main() {
    // call the 3 function here : 
    parameter_function(3, 4, 5);

    parameter_default_function();
    std::cout << "\n";
    parameter_default_function("David", "C++", "Tokyo University");

    parameter_function (4, 5, 6);

    input_output_function();

return 0;  
}