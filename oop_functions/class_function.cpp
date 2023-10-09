#include <iostream>
#include <string>
using namespace std;

class Car {
    public : 
    string merk;
    string color;
    string type;

    void description_car(string merk, string type, string color){
        cout << merk << " " << type << " " << color << "\n"; 
    }
};

int main (){
    Car Vehicle;
    
    Vehicle.description_car("BMW", "i5", "Red");
    Vehicle.description_car("Toyota", "Innova", "White");
    Vehicle.merk="Mitsubishi";
    Vehicle.color="Black";
    Vehicle.type="Pajero Sport";
    cout << Vehicle.merk << " " << Vehicle.type << " " << Vehicle.color << "\n";
    return 0;
}