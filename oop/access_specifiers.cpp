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

/*1. Bumpy Case -> adalah tata penulisan sebuah frasa dimana antar kata 
dipisahkan dengan kapitalisasi.
*/
class MyClass {
    public :
    int myNum;
    string myString;

};

/*
2. Snake Case adalah -> tata penulisan yang dipisahkan oleh underscrore
*/
class other_class {
    public : 
    int number;
    string text;
};


int main (){
    // Create a class 
    MyClass myObj;
    other_class OtherClass;

    myObj.myNum = 15;
    myObj.myString = "Some text";

    OtherClass.number = 20;
    OtherClass.text = "Text Another";


    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    cout << OtherClass.number << " " << OtherClass.text << "\n";
    return 0;
}