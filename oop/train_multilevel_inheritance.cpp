// Concept of C++ Multilevel Inheritance (A class can also derived from one class, which is alredy derived from another class)
#include <iostream>
using namespace std;

// Make a Base class myClass (parent)
class myClass
{
public:
    void greeting()
    {
        cout << "Hey My Name is David \n";
    }
};

class myChild : public myClass
{
};

class myGrandParent : public myChild
{
};

// make a main program to make a object class
int main()
{
    // make an object
    myGrandParent myFamily;

    // call the method function in base class myClass (parent)
    myFamily.greeting();
    return 0;
}