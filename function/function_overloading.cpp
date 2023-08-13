/*
C++ Function Overloading -> With function overloading, 
multiple function can have same name with different parameter

Syntax : 
int myFunction (int x);
float myFunction (float x);
double myFunction (double x, double y);

*/
// Change Overload to do something 
#include <iostream>
using namespace std;

int plusfunc (int x, int y){
    return x + y;
}

double plusfunc (double x, double y){
    return x + y;
}

int main (){
    int plusfunc_int = plusfunc (4, 3);
    double plusfunc_double = plusfunc (2.1, 2.2);

    cout << plusfunc_int << "\n";
    cout << plusfunc_double << "\n";
}