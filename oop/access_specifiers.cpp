/*
C++ Access Specifiers () -> Access Specifiers define how the member (attributes and method)
of a class can be accessed

3 Access Specifiers Type : 
public -> member are accessible from outside the world 
private -> member cannot be accessed (or viewed) from outside class
protected -> member cannot be accessed from outside class, however they can accessed in inherit classes

the public keyword is an access specifiers 
*/

#include <iostream>
#include <string>
using namespace std;

class myClass {
    public :
    int myNum;
    string myString;

};


int main (){
    // Create a class 
    myClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Some text";

    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    return 0;
}