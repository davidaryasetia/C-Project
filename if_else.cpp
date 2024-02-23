/*
if else statement (to specify new condition if first condition false)

if (condition1){
    // block code to be execute when condition 1 true
} else if (condition2){
    // block code to be execute when condiion1 false and condition2 is true
} else {
    // to specifiy condition if condition1 and condition2 are false
}

*/

#include <iostream>
using namespace std;

int main()
{
    int time;

    cout << "Masukkan Waktu pukul berapa hari ini : ";
    cin >> time;

    cout << "Keterangan : \n";
    if (time < 10)
    {
        cout << "Good Morning";
    }
    else if (time < 20)
    {
        cout << "Good Day";
    }
    else
    {
        cout << "Good Evening";
    }

    return 0;
}