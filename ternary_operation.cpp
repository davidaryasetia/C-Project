/*
Ternary shorthand if else 
syntax : 
variable = (condition) ? expressionTrue : expressionFalse;

*/
#include <iostream> 
using namespace std;

int main(){
    int time;
    cout << "Masukkan Waktu : ";
    cin >> time;
    string result = (time < 18) ? "Good Day" : "Good Evening";
    cout << "Keterangan : " << result;
    return 0;
}