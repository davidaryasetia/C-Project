// Assignment Operator 
#include <iostream>
using namespace std;

int main(){
    int x;

    // Membuat input number 
    cout << "Masukkan Angka = ";
    cin >> x;

    cout << "\n";
    cout << "Hasil Perhitungan : \n";
    x += 3;
    cout << x << " + 3 = " << x << "\n";

    x -= 3;
    cout << x << " - 3 = " <<  x << "\n";

    x *= 3;
    cout << x << " * 3 = " << x << "\n";

    x /= 3;
    cout << x << " / 3 = " << x << "\n";

    x %= 3;
    cout << x << " % 3 = " <<  x << "\n";

    x |= 3;
    cout << x << " | 3 = " << x << "\n";

    x >>= 3;
    cout << x << " >>= 3 ? " << x << "\n";

    x << 3;
    cout << x << " <<= 3 ? " << x << "\n";

    return 0;
}