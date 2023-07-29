// Real life case use a boolean 
#include <iostream>
using namespace std;

int main(){
    int minAgeVote = 18;
    int age;

    cout << "Simulasi Umur Minimal to Vote \n";
    cout << "Masukkan Umur : ";
    cin >> age;
    cout << "=================================== \n";
    cout << "Hasil Perhitungan : \n";
    cout << "Keterangan : 1(Boleh), 0(tidak) \n";
    cout << "Anda Boleh Voting Simulasi ? " << (age >= minAgeVote) << "\n";
    return 0;   
}