/*
C++ For Loop
Syntax : 
for (statement1; statement2; statement3){
    // Code Block to execute
}
*/

// Example of nested loop 
#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=2; i++){
        cout << "Outer : " << i << "\n";

        for (int j=0; j<=3; j++){
            cout << "\t Inner : " << j << "\n";
        }
    }
}