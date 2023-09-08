// testing cpp function 
#include <iostream>
#include <string>

// declare global variable 
bool variable = true;

// declare a function 
std::string breakfast(){
    std::string sandwich = "";

    sandwich =+ "chese ";

    // make a logical conditional 
    if (variable == true){
        sandwich += "tomato ";
    } else {
        sandwich += " - ";
    }

    sandwich += " ketchup ";
    sandwich += " sausage ";

    return sandwich;
}

// make a main function 
int main (){
    std::cout << breakfast();
    return 0;
}
