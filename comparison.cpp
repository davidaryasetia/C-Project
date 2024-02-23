#include <iostream>
using namespace std;
// test
int main()
{
    int x;
    int y;
    cout << "Simulasi Assignment Operator \n";
    cout << "Masukkan Value x : ";
    cin >> x;

    cout << "Masukkan Value Y : ";
    cin >> y;

    cout << "\n";
    cout << "Hasil Perhitungan \n";
    cout << x << " > " << y << " ? " << (x > y) << "\n";   // if x > y
    cout << x << " < " << y << " ? " << (x < y) << "\n";   // if x < y
    cout << x << " == " << y << " ? " << (x == y) << "\n"; // if x == y
    cout << x << " != " << y << " ? " << (x != y) << "\n"; // if x != y
    cout << x << " <= " << y << " ? " << (x <= y) << "\n"; // if x <= y
    cout << x << " >= " << y << " ? " << (x >= y) << "\n"; // if x >= y
    cout << "Keterangan : 1(true), 0(false)";
    return 0;
}