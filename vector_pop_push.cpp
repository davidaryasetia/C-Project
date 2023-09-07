/*
C++ Vector push_back() and pop_back() function 
description :
1. push_back() -> is function to used add element of vector in the end or back element
2. pop_back() -> is function to used delete element of vector in the end or back element
*/
#include <iostream>
#include <vector>
#include <string>

int main (){
    // declaare a vector with string
    std::vector<std::string> name_people = {"David", "Aryasetia"};

    // declare and make push_back() function 
    name_people.push_back("Febrian");
    name_people.push_back("Susanto");

    // access vector index 0
    std::cout << name_people[0] << "\n";
    std::cout << name_people[1] << "\n";
    std::cout << name_people[2] << "\n";
    std::cout << name_people[3] << "\n";
    std::cout << "\n";
    // Priview Number element after push_back();
    std::cout << "After pusback : " << name_people.size() << "\n";

    name_people.pop_back();
    std::cout << "After popback : " << name_people.size() << "\n"; 

    
    return 0;
}