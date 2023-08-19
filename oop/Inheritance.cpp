/*
C++ Inheritance -> In C++, it is posible to inherit attributes and method
from one class to another.

2 Categories of Inheritance 
derived class (child) -> The class that inherit from another class
base class (parent) -> the class being inherited from 
*/

// In the example below Car class (child), inherits attribute and method from vehicle class (parent)
#include <iostream>
using namespace std;

// Declare Base Class (parent) 
class Vehicle {
    public : 
    string brand = "Ford";
    void honk (){
        cout << "Tut tut tututu t";
    }
};

// Declare Derived Class (child)
class Car : public Vehicle {
    public : 
    string model = "Mustang";
};

// Make a main program 
int main (){
    // Declare a object from child 
    Car myObj;
    myObj.honk();
    cout << "\n";
    // Print value in child and parent class 
    cout << "Brand : " << myObj.brand << "\n";
    cout << "Model : " << myObj.model << "\n";
    cout << myObj.brand + " " + myObj.model;
    return 0;
}