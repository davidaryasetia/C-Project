/*
C++ Encapsulation -> The meaning of encapsulation is to make sure 
that sensitive data hidden from users

*/

// Example to access private attribute, to use public "get" and "set" method
#include <iostream>
using namespace std;

class Employee {
    private : 
    int salary; // make a private attribut 

    // Make a public getter and setter 
    public : 
    void setSalary (int x){ // declare se function
        salary = x;
    }

    int getSalary (){
        return salary;
    }
};

// Call and print salary of employee 
int main (){
    Employee myObj;

    // Fill salary with set method 
    myObj.setSalary (400000);
    cout << myObj.getSalary();
    return 0;
}