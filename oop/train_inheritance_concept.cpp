// C++ Inheritance concept (inherit derived class (child) -> from base class (parent))
// Example Car class (child) and Vehicle Class (parent)
#include <iostream>
#include <string>
using namespace std;

// make and inheritance Vehicle (parent), and Car (child)
class Vehicle {
    public : 
    // make and attribute merk Car Vehicle 
    string merk = "Toyota";

    // make a function method Vehicle 
    void klakson (){
        cout << "Tin tin tin tin \n";
    }

// Dont forget to add semicolon
};


// Make a derive class Car (Child) -> to inherited from parent 
class Car : public Vehicle {
    public : 
    string model = "Land Cruiser";
};

// Make a main program 
int main (){
    // make a object 
    Car myVehicle;

    // preview the output 
    myVehicle.klakson();

    // Display my car 
    cout << "My Car is : " << myVehicle.merk << " " << myVehicle.model << "\n";
    return 0;
}
