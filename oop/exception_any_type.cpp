// Declare exception anytype in cpp
#include <iostream>
using namespace std;

int main (){
    // declare a try cath
    try {
        int age;
        string name;
        // Declare input user 
        cout << "This is program to choice \n";
        cout << "Input Your Name : ";
        cin >> name;
        cout << "Input Your Age : ";
        cin >> age;

        if (age >= 18){
            cout << "Access Granted - "<< "Hey " << name <<" , your age old enough to choice \n\n";
        } else {
            throw (age);
        }
    } catch (...){
        cout << "Access Denied - Youre Not enough to choice \n";
    }
    return 0;
}