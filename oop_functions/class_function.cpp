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

class Motorcycle {
    public : 
    string merk;
    string color;
    string type;

    void description_motorcycle(string merk, string type, string color){
        cout << merk << " " << type << " " << color << "\n";
    }
};

int main (){
    Car Vehicle_Car;
    Motorcycle Vehicle_Motor;
    
    // Declare a Function 
    Vehicle_Car.description_car("BMW", "i5", "Red");
    Vehicle_Car.description_car("Toyota", "Innova", "White");
    Vehicle_Motor.description_motorcycle("Yamaha", "rx King", "red");

    cout << "\n";
    // Car
    Vehicle_Car.merk="Mitsubishi";
    Vehicle_Car.color="Black";
    Vehicle_Car.type="Pajero Sport";

    // Motor 
    Vehicle_Motor.merk="Honda";
    Vehicle_Motor.type="Vario";
    Vehicle_Motor.color="White";
    
    cout << Vehicle_Car.merk << " " << Vehicle_Car.type << " " << Vehicle_Car.color << "\n";
    cout << Vehicle_Motor.merk << " " << Vehicle_Motor.type << " " << Vehicle_Motor.color << "\n";
    return 0;
}