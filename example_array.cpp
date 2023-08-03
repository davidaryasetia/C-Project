// Make Game to a battleship 
#include <iostream>
using namespace std;

int main(){
    // Tipe Data Boolean 
    bool ship[4][4
    ] = {
        {0, 1, 0, 0}, 
        {1, 0, 0, 0}, 
        {1, 1, 0, 0}, 
        {0, 0, 0, 0}
    }; 

    // Declare variable 
    int hits = 0;
    int percobaan = 0;

    while (hits < 4){
        int baris, kolom;
        cout << "=========================================\n";
        cout << "Game tebak-tebakan : \n";
        cout << "Masukkan Baris Kapal : ";
        cin >> baris;

        cout << "Masiukkan Kolom Kapal : ";
        cin >> kolom;

        if (ship[baris][kolom]){
            // restart 0
            ship[baris][kolom]=0;
            hits++;
            cout << "Tebakannmu kurang : " << (hits-4) << " kali lagi. \n\n";
        } else {
            cout << "Kamu Salah \n\n";
        }
        percobaan++;
    }

    cout << "Selamat  Kamu Menang!!! \n";
    cout << "Kamu telah melakukan percobaan sebanyak : -" << percobaan << " kali";
}