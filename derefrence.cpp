/*
C++ Derefrence => Use the * Operator to derefrence operator
// Get Memory Address and Value 

Syntax of declare pointer : 
string* myString;
string *mystring;
string * myString;

*/

#include <iostream>
using namespace std;

int main(){
    // Declare variable 
    string food = "Pizza";
    string* myPointer = &food;

    // refrence : Output the memory address of food with the pointer 
    cout << myPointer << "\n";

    // Derefreng : Output value food from memory address , back to value 
    cout << *myPointer << "\n";
    return 0;
}