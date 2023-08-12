/*
Ternary shorthand if else 
syntax : 
variable = (condition) ? expressionTrue : expressionFalse;

*/

#include <iostream>
using namespace std;

int main (){
    int time;

    cout << "Halo Masukkan Jam saat ini :";
    cin >> time;
    cout << "\n";
    string waktu = (time > 18) ? "Good Evening" : "Good Day";
    cout << "Waktu saat ini adalah : " << waktu;
    return 0;


}