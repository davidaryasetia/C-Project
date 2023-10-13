/*
C++ Encapsulation -> The meaning of encapsulation is to make sure 
that sensitive data hidden from users

*/

// Example to access private attribute, to use public "get" and "set" method
// This code is train encapsulation with use case of motorcycle 
#include <iostream>
#include <string>
using namespace std;

// make a class of motorcycle with attribute of merk, type, color, price
class Motorcycle {
private : 
string merk;
string type;
string color;
double price;
int supply;

public : 
void setMotorcycle(string merk_motor, string type_motor, string color_motor, double price_motor, int supply){
    merk = merk_motor;
    type = type_motor;
    color = color_motor;
    price = price_motor;
    supply = supply_motor;
};

void getMotorcycle(){
    cout << "Description Of Motorcycle : " << "\n";
    cout << "Merk Motor : " << merk << "\n";
    cout << "Type Motor : " << type << "\n";
    cout << "Color Motor : " << color << "\n";
    cout << "Price Motor : " << price << "\n";
    cout << "Supply Motor : " << supply << "\n";
};

};

// Make a main program 
int main (){
    // make a class and object 
    Motorcycle Asset_Motorcycle;
    Asset_Motorcycle.setMotorcycle("Yamaha", "Rx King", "Red", 20500500.500, 50);
    Asset_Motorcycle.getMotorcycle();
    return 0;
}
