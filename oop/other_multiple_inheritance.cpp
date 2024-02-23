/*
C++ Multiple Inherintance -> A class can also be derived from more than one base class, using coma separated list
*/

#include <iostream>
using namespace std;

// Declare one base class parent name myClass
class myClass
{
public:
    void myFunction()
    {
        cout << "Some text in Parent Class 1"; // test
    }
};

// Declare one base class parent name myOtherClass
class myOtherClass
{
public:
    void anotherFunction()
    {
        cout << "Some text in Parent Class 2";
    }
};

// Derived class name myChild, from 2 parent class
class myChild : public myClass, public myOtherClass
{
};

// Make a main program
int main()
{
    // Declare object from myChild Class
    myChild myObj;

    // Print text function from function in parent class 1 and 2
    myObj.myFunction();
    cout << "\n";
    myObj.anotherFunction();
    return 0;
}
