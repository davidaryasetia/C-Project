/*
C++ Breaks => it was used to jumped out of a switch statement
*/

// Example of break statement
#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while (i < 10){
        cout << i << "\n";
        i++;
        if (i == 4){
            continue;
        }
    }
}