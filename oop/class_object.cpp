/*
C++ Class and Object -> C++ is an object oriented programming

Create a Class : 

class MyClass { // The class
    public :  // Access Specifier
    int myNum; // Attribute (int variable)
    string myString; // Attribute (string variable)
};
*/

// Create an Object called myObj and access attribute 
#include <iostream>
#include <string>

using namespace std;

// Create a class 
class myClass {
    public : 
    int myNum;
    string myString;
};

// Make a main program 
int main(){
    // Create an object 
    myClass myObj;

    // Fill of variable attributes 
    myObj.myNum = 15;
    myObj.myString = "Some Text";

    // Print text value 
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
    
}