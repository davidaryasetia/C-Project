/*
C++ try and catch -> exception handling in C++ consist 3 keyword : try throw catch

try -> statement allow  to define a block code to be tested for error while it is being excecuted
throw -> throw keyword when problem is detected, which let us a custom keywords
catch -> statement allows you to define a block code to be executed, if an error occur in the try block

Syntax try and catch : 
try {
    // Block of code to try
    throw exception;
}
catch(){
    // Block of code to handle error
}
*/

// Consider following try and catch 
#include <iostream>
using namespace std;

// make a main program 
int main (){
    // declare and make try catch syntax : 
    try {
        int age = 19;
        if (age >= 18){
            cout << "Access Granted - Youre old enough";
        } else {
            throw 505;
        }
    }
    catch (int number){
        cout << "Access Denied - Youre not enough in your age \n";
        cout << "Your Age still : " << number;
    }
    return 0;
}