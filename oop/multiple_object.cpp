/*
C++ Multiple Object -> Create an multiple object in one class
*/

#include <iostream>
#include <string>

using namespace std;

// Create a car class with some attributes
class Car
{
public:
    string brand;
    string model;
    int year;
};

// Make a main program
int main()
{
    // Create a object car 1
    Car myCar1;

    // Fill out atribute in object myCar1
    myCar1.brand = "Toyota";
    myCar1.model = "Avanza";
    myCar1.year = 2015;

    // Create a object car 2
    Car myCar2;

    // Fill out attribute in myCar2
    myCar2.brand = "Suzuki";
    myCar2.model = "XL7";
    myCar2.year = 2020;

    // Print attribute value
    cout << "Daftar Mobil : "
         << "\n";
    cout << "Object 1 : " << myCar1.brand << ", " << myCar1.model << ", " << myCar1.year << "\n";
    cout << "Object 2 : " << myCar2.brand << ", " << myCar2.model << ", " << myCar2.year << "\n";
    return 0;
}