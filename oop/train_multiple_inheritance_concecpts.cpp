// C++ Multiple inheritance is (Derived class (child) -> class also inherit in few inherit class)
#include <iostream>
using namespace std;

// make a Base Class 1 (parent class)
class myFunction {
    public : 
    void myMethod (){
        cout << "This function method from base class parent 1 \n";
    }
// Dont forget to make a semicolon 
};

// make a Base Class 2 (parent class)
class myOtherFunction {
    public : 
    void myOtherMethod (){
        cout << "This function method from base class parent 2 \n";
    }
};


// Make a child class -> can inherit from another or 2 base class
class myChild : public myFunction, public myOtherFunction {
};

// Make a main program to preview output method function 
int main (){
    // make an object 
    myChild myObject;

    // And Then we can call the method function from base class parent 1 and 2
    myObject.myMethod();
    myObject.myOtherMethod();
    return 0;
}