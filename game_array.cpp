#include <iostream>
using namespace std;

int main (){
    bool ship[4][4] = {
        {0, 0, 1, 0}, 
        {1, 0, 0, 1}, 
        {0, 1, 0, 0}, 
        {0, 0, 0, 0}
    };

    int match = 0;
    int percobaan = 0;
    // Logic jika koordinat ter tebak 4 kali
    while (match < 4){
        int baris, kolom;
        cout << "=============================================\n";
        cout << "Percobaan Test dan Check Koordinat \n";
        cout << "Masukkan Baris (0-3) : ";
        cin >> baris;
        cout << "Masukkan Kolom (0-3) : ";
        cin >> kolom; 

        if(ship[baris][kolom]){
            ship[baris][kolom]=0;
            match++;
            cout << "Anda Perlu Menebak " << (4 - match) << " kali lagi.\n";
        } else {
        cout << "Tebakan Koordinat Anda Salah : \n";
        cout << "=============================================\n";
        }
        percobaan++;
    }
    cout << "\n\n";
    cout << "Selamat Anda Telah Menang !! \n";
    cout << "Anda Telah Mencoba Selama : " << percobaan << " Kali";
    return 0;
}