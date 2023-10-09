#include <iostream>
#include <string>
using namespace std;

class Car {
    public : 
    string merk;
    string color;
    string type;
    double cc;
    void description_car(string merk, string type, double cc, string color){
        cout << merk << " " << type << " " << cc << " " << color << "\n"; 
    } 
};

int main (){
    Car Vehicle;
    
    Vehicle.description_car("BMW", "i5", 1200, "Red");
    Vehicle.description_car("Toyota", "Innova", 1000, "White");
    Vehicle.merk="Mitsubishi";
    Vehicle.color="Black";
    Vehicle.type="Pajero Sport";
    cout << Vehicle.merk << " " << Vehicle.type << " " << Vehicle.color << "\n";
    return 0;
}