// Make to encapsulation method program to contain value salary and make attribute private
#include <iostream>
using namespace std;

// make a class call employee 
class Employee {
    // make a private atrribute access specifiers
    private : 
    int salary;

    // access salary private access specifiers make encapsulation
    // make public method seeter and getter
    public : 
    void setSalary (int s){
        salary = s;
    } 

    // make method getter to access value 
    public : 
    int getSalary (){
        return salary;
    }
// and dont forget to add semicolon in end bracket of class
};

// Ok the main class program above is ready to use make encapsulation 
// And then we want to make a main program and called class
int main (){
    // create an object 
    Employee myEmployee_Salary;

    // ok an then we want set value of salary with method function setter 
    myEmployee_Salary.setSalary (1000000);

    // Ok and then we want to get value of salary 
    cout << myEmployee_Salary.getSalary();

    cout << "\n";

    cout << "My Salary is : " << myEmployee_Salary.getSalary() << "\n";
    return 0;
}
