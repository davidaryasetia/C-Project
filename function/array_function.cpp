/*
C++ Pass Array to a Function (You can also pass array to a function)
*/
// Example 
#include <iostream>
using namespace std;

// Mendeklarasikan function 
void arrayValue (int myNumber[5]){
    for (int i=0; i<5; i++){
        cout << myNumber[i]<< ", ";
    }
}

int main (){
    // Deklarasi array 
    int myNumber[5] = {10, 20, 30, 40, 50};

    // Menampilkan Value loop array tanpa function
    cout << "Memanggil Value Loop Array Tanpa Function : \n"; 
    for (int j=0; j<5; j++){
        cout << myNumber[j] << ", ";
    }
    cout << "\n\n";

    // Menampilkan value Loop Array dengan function
    cout << "Memanggil value Loop Array dengan Function : \n";
    arrayValue (myNumber);
}