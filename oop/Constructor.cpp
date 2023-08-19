/*
C++ Constructor -> Constructor in C++ is a special method that is
automatically called when an object class is created
*/

// Example create a constructor, use the same name as class, followed by parantheses()

#include <iostream>
using namespace std;

// Declare a class 

class myClass {
    public : // Access Specifiers
    myClass (){ // Declare method function with constructor
    cout << "This text automated call when created object ";
    }
};

// Make a main program 
int main (){
    // the method function is automated call when object is created
    myClass myObj;
    return 0;
}