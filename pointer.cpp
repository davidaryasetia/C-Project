/*
Creating a Pointer
C++ Pointers 

Syntax Declare Pointer Variable : 
string* myPointer; // Prefered
string *myPointer;
string * myPointer;
*/

// Make a example pointer 
#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string* myPointer = &food;
}