// C++ Exception (exception is to make a block of code to be tested before excecuted)
/*
There are 3 consist of exception of block code 
try -> to be allow to tested code before while being excecuted
throw -> throw error argument while detected of wrong code
catch -> make code to be excecuted of error

Syntax of exception 
try {
    // code to be tested
    throw exception // to throw of code
}
catch {
    // to be executed of code while error of code
}
*/
#include <iostream>
using namespace std;

// make  a main program 
int main (){
    // make a block code to be try catch 
    try {
        // make a declare variable 
        int age;
        cout << "Halo selamat datang di pemilihan umum \n";
        cout << "Masukkan umur anda : ";
        cin >> age;
        if (age >= 18){
            cout << "Access Granted - Youre old enought to vote";
        } else {
            throw (age);
        }
    }

    // Handle any type of exception if we can't of type data wit ...
    catch (int ageNumber){
        cout << "Access Denied : \n";
        cout << "Your age is : " << ageNumber << " Youre not enought to vote"; 
    }

    return 0;
}
