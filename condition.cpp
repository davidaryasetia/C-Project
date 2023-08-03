// if else condition 
#include <iostream>
using namespace std;

int main (){
    int time;

    cout << "Masukkan Pukul berapa sekarang : ";
    cin >> time;
    if (time < 18){
        cout << "Good Day";
    } else {
        cout << "Good Evening";
    }
}