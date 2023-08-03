// Real life case use a boolean 
#include <iostream>
using namespace std;

int main(){
    int minAgeVote = 18;
    int age;
    string notice;

    cout << "Simulasi Umur Minimal to Vote \n";
    cout << "Masukkan Umur : ";
    cin >> age;
    cout << "=================================== \n";
    cout << "Hasil Perhitungan : \n";
    cout << "Keterangan : 1(Boleh), 0(tidak) \n";
    cout << "Anda Boleh Voting Simulasi ? " << (age >= minAgeVote) << "\n";

    if (age >= minAgeVote){
        notice = "Silahkan Voting";
    } els1e {
        notice = "Maaf anda tidak boleh vooting";
    } 
    cout << notice;
    return 0;   
}