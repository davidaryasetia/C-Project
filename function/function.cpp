/*
C++ Function -> Block Code is only run when its called
Syntax : 
void myFunction(){ // declaration
    // The body of the function definition
}
*/

#include <iostream>
using namespace std;

// Create a Function 
void myFunction(){ 
    cout << "Hello World Function \n";
}


int main(){
    // A function can be called in multiple line
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    return 0;
}
