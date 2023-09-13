// make a function definition coffe machine 
#include <iostream>
#include <string>

// make a function definition here 
void coffe_machine (bool milk, bool sugar){
    std::string your_coffe = "This is your coffe ";

    if (milk==1 && sugar==1){
        your_coffe += "milk and sugar";
    } else if (milk==1){
        your_coffe += "milk";
    } else if (sugar==1){
        your_coffe += "sugar";
    } else {
        your_coffe += "black";
    }
}