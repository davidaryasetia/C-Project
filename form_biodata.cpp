// Bio Project 
#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama, jenis_kelamin, alamat, negara;
    int umur, verifikasi;
    float tinggi, berat, penghasilan;

    // Make a getline() function to read a text
    cout << "======================================================\n";
    cout << "Formulit Biodata Pendaftaran : \n";
    cout << "Nama Lengkap \t: ";
    getline (cin, nama);

    cout << "Umur \t: ";
    cin >> umur;

    cout << "Tinggi Badan \t : ";
    cin >> tinggi;

    cout << "Jenis Kelamin \t: ";
    getline (cin, jenis_kelamin);
    cout << "\n";
    cout << "Alamat Rumah \t: ";
    getline (cin, alamat);

    cout << "Warga Negara \t : ";
    cin >> negara;

    cout << "Penghasilan \t : ";
    cin >> penghasilan;

    cout << "Verifikasi (2 + 3) \t: ";
    cin >> verifikasi;
    cout << "======================================================\n";

    cout << "\n";
    cout << "Record Data Anda \n";
    cout << "Nama \t: " << nama << "\n";
    cout << "Umur \t: " << umur << "\n";
    cout << "Tinggi Badan \t : " << tinggi << "cm\n";
    cout << "Berat Badan \t : " << berat << "kg\n";
    cout << "Penghasilan \t : " << penghasilan << "\n";
    cout << "Jenis Kelamin \t : " << jenis_kelamin << "\n";
    cout << "Alamat Rumah \t : " << alamat << "\n";
    cout << "Negara \t : " << negara << "\n";
    cout << "Terima kasih Data Anda Telah tersimpan";
}