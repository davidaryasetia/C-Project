// Concepts of Inheritance Access -> make a third access specifier (protected)
// The protected specifiers -> just only can call access in inherited class, make and combine of encapsulation
// The example of protected access specifiers
#include <iostream>
using namespace std;

// make a Base Class Call Employee with salary attribut and access specifiers is protected
class Employee {
    // Set access specifiers to be protected
    protected :
    int salary;
};

// Okay and then we want to make other class to inherited access from base class
class Employee_Salary : public Employee {
    // Ok and then we want to implement of encapsulation of method to make setter and getter method 
    // And want to add another attribute
    public : 
    int bonus;
    void setSalary (int s){
        salary = s;
    };

    int getSalary (){
        return salary;
    }
// Don't forget to add semicolon 
};


// Okay and then we want to make a main program 
int main (){
    // We want to create and object 
    Employee_Salary Employee_Object;

    // and then we want to call it a salary and then access it 
    Employee_Object.setSalary (5000000);
    
    // And then we want to call it bonus 
    int myBonus = Employee_Object.bonus = 1000000;

    // Okay this is now we want to call it and preview
    cout << "This is my List of Monthly Salary : " << "\n";
    cout << "My Salary : " << Employee_Object.getSalary() << "\n";
    cout << "My Bonus : " << myBonus << "\n";
    cout << "My Total allowence monthly is : " << Employee_Object.getSalary() + myBonus << "\n";
    cout << "Thank You For your hard work";
    return 0;
}