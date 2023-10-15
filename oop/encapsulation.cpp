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
    // For Motorcycle 
    void setMotorcycle(string merk_motor, string type_motor, string color_motor, double price_motor, int supply_motor){
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

class Customers{
    private : 
    string name;
    string address;
    string motorcycle_ownership;

    public : 
    void setCustomers(string name_customers, string address_customers, string motorcycle_customers){
        name = name_customers;
        address = address_customers;
        motorcycle_ownership = motorcycle_customers;
    };

    void getCustomers(){
        cout << "====================================\n";
        cout << "Biodata of ownership Cars : \n";
        cout << "Name : " << name << "\n";
        cout << "Address : " << address << "\n";
        cout <<  "Motorcyle Ownership : " << motorcycle_ownership << "\n";
    };
};

// Make a main program 
int main (){
    // make a class and object 
    Motorcycle Asset_Motorcycle;
    Customers Bi    odata_Customers;
    // Set function
    
    Asset_Motorcycle.setMotorcycle("Yamaha", "Rx King", "Red", 20500500.500, 50);
    Biodata_Customers.setCustomers("Steve", "Surabaya", "Yamaha Rx kING");

    // Get function
    Asset_Motorcycle.getMotorcycle();
    Biodata_Customers.getCustomers();
    return 0;
}
