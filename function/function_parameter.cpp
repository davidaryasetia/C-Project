/*
Function Parameter -> Information can be passed to function as a parameter.
Parameter act as variable inside the function 

Default Parameter -> We can also use default parameter value, by using equal sign (=)
if we call the function without an argument, it uses the default value ("Norway");

Multiple Parameter -> Inside the function you can add ass many parameter as you want

Syntax : 
void functionName (parameter1, parameter2, parameter3){
    // Code to be executed
}
*/
#include <iostream>
using namespace std;

// Declare function to print name 
void myName (string name){
    cout << "My Name is : " << name << "\n";
}

// Declare function with a default parameter
void myCity (string city = "Mojokerto"){
    cout << "I live in : " << city << "\n";
}

// Declare function with a multiple parameter()
void myDate (string name, string city, int age){
    cout << "My Name " << name << ", " << "I From " << city << ", " << "My Age " << age << "\n";
}

int main(){
    // Call parameter function()
    cout << "Function Parameter() \n";
    myName ("David");
    myName ("John");
    myName ("Doe");
    cout << "\n";

    // Call the default function()
    cout << "Function default parameter() \n";
    myCity ();
    myCity ("Surabaya");
    cout << "\n";

    // Call the multiple function()
    cout << "Function multiple parameter() \n";
    myDate ("David", "Mojokerto", 20);
    myDate ("Steven", "Roger", 22);
    myDate ("John", "Newyork", 25);
    cout << "\n";
    return 0;
}