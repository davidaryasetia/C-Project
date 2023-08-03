/*
C++ Structures (struct)
Structures (also called struct) 
Syntax Declaration : 
struct { // Structure declaration
    int myNum; // Member (int values)
    string myString // Member (string values)
} myStructure; // Structure Variable 


One Structure in Multiple Variables 
struct {
    int myNum;
    string myString;
} myStruct1, myStruct2, myStruct3, myStruct4, myStruct5; // mutiple structure


Name Structure 
By Giving a name to the structure, you can treat it as data type.
struct myDataType {
    int myNum;
    string myString;
}

To Declare Variable that uses the structure, use name of structure as data type 
myDataType myVar;

*/
#include <iostream>
using namespace std;

int main(){
    // Deklarasi Single Struktur 
    struct {
        int myNum;
        string myString;
        char myChar;
    } myStructure;

    // Deklarasi another structure to multiple variable 
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // Add variable to seperate comma

    // Deklarasi Named Structure 
    struct myCar3{
        string brand;
        string model;
        int year;
    };

    // Menggunakan Single Structure
    cout << "=======================================\n";
    cout << "Menggunakan 'myStructure' \n";
    myStructure.myNum = 1;
    myStructure.myString = "David";
    myStructure.myChar = 'A';

    // Print Member of Structure 
    cout << "Print and Called A Structure \n";
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
    cout << myStructure.myChar << "\n";
    cout << "=======================================\n";

    // Menggunakan Multiple Structure
    cout << "=======================================\n";
    cout << "Memnggunakan multiple structure \n";
    myCar1.brand = "Ford Mustang";
    myCar1.model = "Model X";
    myCar1.year = 1999;

    myCar2.brand = "BMW";
    myCar2.model = "Model Y";
    myCar2.year = 2000;

    // Declare 
    myCar3 car;
    car.brand = "Mercedez";
    car.model = "Model Y";
    car.year = 2000;

    cout << "Structure 1 : " << myCar1.brand << " | " << myCar1.model << " | " << myCar1.year << "\n";
    cout << "Structure 2 : " << myCar2.brand << " | " << myCar2.model << "|" << myCar2.year << "\n";
    cout << "Structure 3 : " << car.brand << " | " << car.model << " | " << car.year;
    return 0;
}