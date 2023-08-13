// Example to make declaration and definition function concepts
#include <iostream>
using namespace std;

// Declare of function 
void myFunction();
void function();
void otherFunction();


// The main function 
int main(){
    myFunction();
    function();
    otherFunction();
    return 0;
}

// Define the myFunction()
void myFunction (){
    cout << "Hello World myFunction \n";
}

// Define the function()
void function (){
    cout << "Hello World function \n";
}

// Define the otherFunction
void otherFunction(){
    cout << "Hello World otherFunction \n";
}
