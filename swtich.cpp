/*
Switch Case Statement 
Syntax : 
switch (expression){
    case x : 
    // code block 
    break;
    
    case y : 
    // code block
    break;

    case z : 
    // code block 
    break;
}
*/

// Example use a weekday number to print a weekday name 
#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Masukkan Nomor 1 - 7 \n";
    cout << "Masukkan Nomor Hari : ";
    cin >> day;

    switch (day){
        case 1: 
        cout << "This is Monday";
        break;

        case 2: 
        cout << "This is Tuesday";
        break;

        case 3 : 
        cout << "This is Wednesday";
        break;

        case 4 : 
        cout << "This is Thursday";
        break;

        case 5:
        cout << "This is Friday";
        break;

        case 6: 
        cout << "This is Saturday";
        break;

        case 7:
        cout << "This is Sunday";
        break;

        default : 
        cout << "Input Number 1 - 7";
    }
}