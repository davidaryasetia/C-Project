// make a default argument with a function 
#include <iostream>
#include <string>

// make a function declaration
void intro (std::string name, std::string learn="C++");

// make a function definition 
void intro (std::string name, std::string learn){
    // make a print text output 
    std::cout << "My name is : " << name << ", and I love learn a :" << learn << "\n";
}

// make a main program 
int main (){
    // call the function 
    intro ("John");
    intro ("Steven", "Phyton");
    return 0;
}