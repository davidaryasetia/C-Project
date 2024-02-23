/*
C++ Inheritance Access -> Access specifiers chapter there are
three access specifiers is availabe.
The third specifiers is protected, is similar to private,
but in can also access in inherit class
*/

// Example use access specifiers protected
#include <iostream>
using namespace std;

// Declare base classes (parent) class
class Employee
{
protected:      // -> protected access specifiers
    int salary; // -> declare attribute
};

class Programmer : public Employee
{
public:
    int bonus;

    // declare setter method -> to set value
    void setSalary(int s)
    {
        salary = s;
    }

    // declare getter method -> to get value after set value
    int getSalary()
    {
        return salary;
    }
};

// Make a main program
int main()
{
    // Create an object from Programmer
    Programmer myObj;

    // Filled and setSalary value
    myObj.setSalary(3500);

    // Filled and set bonus
    int myBonus = myObj.bonus = 2000;

    // Save value of salary in mySalary
    int mySalary = myObj.getSalary();

    // Print Out of the value salary and bonus
    cout << "My Salary is : $" << myBonus << "\n";

    // Print out of the value bonus
    cout << "My Bonus is : $ " << myObj.bonus << "\n";

    // Total value to print out
    cout << "My Total Salary : $ " << myBonus + mySalary << "\n";

    return 0;
}