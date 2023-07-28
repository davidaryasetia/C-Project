//Create Variable 

#include <iostream>
using namespace std;

int main(){
    int myAge = 15; // Integer (Without Decimal) // Good Name Identifiers
    double myFloat = 15.99; // Floating point (with decimal) // Good Name Identifiers
    char myLetter = 'D'; // Character // Good Name Identifiers
    string myName = "David Aryasetia Febrian Susanto"; // String Text // Good Name Identifiers
    bool myBoleanTrue = true; // Bolean true (true or false)
    bool myBoleanFalse = false; // Bolean false (true or false)
    int sum = myAge + myFloat;
    int x = 5, y = 10, z = 15; // C++ Declare multiple Variable
    int a, b, c; //Declare one value to multiple value
    a = b = c = 50;
    const int Number = 15; // Declare Constant variable readonly
    // Number = 20; Declare constant variable make error
    const int minutePerHour = 60; // Declare minute per hour as constant value
    const float PI = 3.14; // Declare PI as constant value

    cout << "My Age : " << myAge << " Years Old. \n";
    cout << myFloat << "\n";
    cout << myLetter << "\n";
    cout << "My Name : " << myName << "\n";
    cout << myBoleanTrue << "\n";
    cout << myBoleanFalse << "\n";
    cout << "The Total is : " << sum << "\n";
    cout << "To Total multiple declare variable :" << x+y+z << "\n";
    cout << "One value to multiple variable : " << a+b+c << "\n";

    // Start Constant Variabel
    cout << "Constant Number : "<< Number << "\n";
    cout << "Contstan minute per Hour : " << minutePerHour << "\n";
    cout << "Contstant PI : " << PI << "\n";
    return 0;
}