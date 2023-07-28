// Make logical operator with comparison operator
#include <iostream>
using namespace std;

int main(){
    int x;
    int y;

    // make logic here 
    cout << "Simulasi Logic Operator : \n";
    cout << "Masukkan x : ";
    cin >> x;
    
    cout << "Masukkan y : ";
    cin >> y;

    cout << "\n";
    cout << "Hasil Perhitungan \n";
    cout << "Keterangan : " << "x = " << x << ", y = " << y << "\n";

    cout << "x < 5 && y > 10 ? " << (x < 5 && y > 5) << "\n"; // use logical and
    cout << "x < 5 || y > 10 ? " << (x < 5 || y > 10) << "\n"; // use logical or
    cout << "!(x < 5 || y > 10) ? " << (!(x < 5 || y > 10)) << "\n"; //use logical not (or)
    cout << "!(x < 5 && y > 10) ? " << (!(x < 5 && y > 10)) << "\n"; // use logical not (and)
    cout << "keterangan : boolean logic 1(true) , 0(false)";
    return 0;

}