/*
C++ References 
Reference variable -> is a reference to an existing variable, and 
its created with & operator
Syntax : 
string food = "Pizza";
string &meal = food;
*/

// Using a references
#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string &meal = food;

    cout << &food << "\n";
    cout << meal << "\n";
}