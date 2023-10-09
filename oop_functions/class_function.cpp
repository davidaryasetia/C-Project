#include <iostream>
#include <string>
using namespace std;

class Car {
    public : 
    string merk;
    string color;
    string type;

    void description_car(string merk, string color, string type){
        cout << merk << " " << type << " " << color << "\n"; 
    }
};

int main (){
    Car Vehicle;
    
    Vehicle.description_car("BMW", "Red", "i5");
    Vehicle.merk="Mitsubishi";
    Vehicle.color="Black";
    Vehicle.type="Pajero Sport";
    cout << Vehicle.merk << " " << Vehicle.type << " " << Vehicle.color << "\n";
    return 0;
}