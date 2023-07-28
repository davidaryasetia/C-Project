#include <iostream>
#include <string>
using namespace std;

int main(){
    int number = 10; // Declare integer number 
    float floatnum = 5.99; // Declare float number 
    double doublenum = 6.99; // Declare double 
    char character = 'A'; //  Declare a character
    bool myBoolean = true; // Declare boolean 
    string myText = "Hello World"; // Declare string text
    // Using scientific number 
    float f1 = 35e4;
    double d1 = 12E5;

    // Boolean Data Type: 
    bool iscodingFun = true;
    bool isFishTasty = false;

    // Character Data Type 
    char myGrade = 'A';

    // Use ASCII value to display certain character
    int A=20, B=25, C=30;

    // String Datatype
    string greeting = "Hello World";

    // Print text variable 
    cout << "Data Type Example of Output \n";
    cout << "Integer \t: " << number << "\n";
    cout << "Float Number \t: " << floatnum << "\n";
    cout << "Double Number \t: " << doublenum << "\n"; 
    cout << "Character \t: " << character << "\n";
    cout << "String Text \t: " << myText << "\n";
    cout << "Float Number with e \t : " << f1 << "\n";
    cout << "Double Number with e \t : " << d1 << "\n";
    cout << "Expression coding \t : " << iscodingFun << " - 1(True), 0(False) \n";
    cout << "Expression fish \t : " << isFishTasty << " - 1(True), 0(False) \n";
    cout << "My Grade result \t : " << myGrade << "\n";
    cout << "Viewing ASCI Value \t : A(" << A << ") | B(" << B << ") | C(" << C <<  ") | \n";
    cout << "The string \t : " << greeting << "\n";
    return 0;
}