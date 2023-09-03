/*
C++ Codecademy Dogyears project (convert dogyears into human years)
description project : 
1. one years old dog = 10.5 years human years
2. calculate dog_years age in human years, of any dog older than 2
*/
#include <iostream>

int main (){
    // 1. declare and initialize variable dog_age
    int dog_age = 6;

    // 2. declare more 3 int variable 
    int early_years, later_years, human_years;

    // 3. initialize early_years variable
    early_years = 21;

    // 4. declare formula of later years
    later_years = (dog_age - 2) * 4;

    // 5. formula of human years 
    human_years = early_years + later_years;

    // 6.preview of result 
    std::cout << "My name is Caca! Ruff ruff, I am " << human_years << " years old in human years. \n";
    return 0;
}