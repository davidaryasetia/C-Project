/*
C++ Before while loop -> this loop will execute code block once,
before checking condition true, then it will reapet loop if condition true
Syntax : 
do {
    // code to be execute 
}
while (condition)
*/

#include <iostream>
using namespace std;

int main(){
    int i=0;

    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);
    return 0;
}