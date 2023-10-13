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

class Motorcycle {
    public : 
    string merk;
    string color;
    string type;
    double cc;

    void description_motorcycle(string merk, string type, double cc, string color){
        cout << merk << " " << type << " " << color << "\n";
    }
};

class Bycycle {
public : 
string merk;
string color;
string type;

void description_bycycle(string merk, string color, string type){
    cout << "My Bycycle merk : " << merk << ", type : " << type << "color: " << color << "\n"; 
}
}

int main (){
    Car Vehicle_Car;
    Motorcycle Vehicle_Motor;
    Bycycle Vehicle_Bycycle;

    // Vehicle Car
    Vehicle_Car.description_car("BMW", "i5", 1200, "Red");
    Vehicle_Car.description_car("Toyota", "Innova", 1000, "White");
    Vehicle_Car.merk="Mitsubishi";
    Vehicle_Car.color="Black";
    Vehicle_Car.type="Pajero Sport";

    // Vehicle Bycycle 
    Vehicle_Bycycle.description_bycycle("United", "red", "Mountain Bike");
    
    cout << Vehicle_Car.merk << " " << Vehicle_Car.type << " " << Vehicle_Car.color << "\n";
    return 0;
}
