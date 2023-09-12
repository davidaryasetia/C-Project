/*
Description program :
1. make main program can contain file1.cpp 
2. get the function declaration
*/

#include <iostream> 
#include <string>
#include "file1.cpp"

// make declaration function 
void file1(std::string text_input);
int file2(int number1, int number2);

int main (){
    file1("Hello World, multi file program");
    std::cout << file2(3, 4);
    return 0;
}
