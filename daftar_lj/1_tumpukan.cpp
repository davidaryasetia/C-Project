#include <iostream>
using namespace std;

int main() {
    int jumlah_tumpukan;

    cout << "Masukkan Jumlah Tumpukkan : ";
    cin >> jumlah_tumpukan;

    for (int i = 1; i <= jumlah_tumpukan; i++) {
        // Menampilkan spasi sebelum angka
        for (int j = 1; j <= jumlah_tumpukan - i; j++) {
            cout << "  ";
        }

        // Menampilkan angka
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << i;
            if (j < 2 * i - 1) {
                cout << " ";
            }
        }

        cout << std::endl;
    }

    return 0;
}
