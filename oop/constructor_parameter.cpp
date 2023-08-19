/*
C++ Constructor Parameter -> Constructor can take a parameter
*/

// Example Constructor to declare outside class 
#include <iostream>
#include <string>

using namespace std;

// Declare class Car
class Car {
    public : // Declare access specifiers
    string brand;
    string model;
    int years;

    // Declare a constructor 
    Car (string x, string y, int z);
};

// Declare other class otherCar
class otherCar {
    public : 
    string brand;
    string model;
    int years;
};

// Declare function constructor outside class 
Car::Car (string x, string y, int z){
    brand = x;
    model = y;
    years = z;
}

// Make a main program 
int main (){
    // Make a object 1 with constructor 
    Car myCar1 ("Toyota", "Land Cruiser", 2020);

    // Make a Object 2 with constructor 
    Car myCar2 ("Suzuki", "XL7", 2021      );

    // Make object 3 with otherCar classes 
    otherCar myCar3;

    // Print out a Constructor Value 
    cout << "MyCar 1 : " << myCar1.brand << ", " << myCar1.model << ", " << myCar1.years << "\n";
    cout << "MyCar 2 : " << myCar2.brand << ", " << myCar2.model << ", " << myCar2.years << "\n";

    myCar3.brand = "Mercedez Benz";
    myCar3.model = "x7";
    myCar3.years = 2021;

    cout << "MyCar 3 : " << myCar3.brand << ", " << myCar3.model << ", " << myCar3.years << "\n"; 
    return 0;

}