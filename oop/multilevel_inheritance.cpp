/*
C++ Multilevel Inheritance -> A class can also derived from one class, 
which is alredy derived from another class
*/

// In the following Example, MyGrandChild derived from class MyChild (which is derived from myClass)
#include <iostream>
using namespace std;

// Declare basae class Parent 
class myClass {
    public : 
    void myFunction (){
        cout << "Some Content in parent class";
    }
};

// Derived class Child 
class myChild : public myClass{ // Declare derive class name and then follow with public

};

// Derived class GrandChild 
class myGrandChild : public myChild { // Declare derive class name and the follow with public class

};

// Declare main program 
int main (){
    myGrandChild myObj;

    // Call function in object 
    myObj.myFunction();
    return 0;
}
