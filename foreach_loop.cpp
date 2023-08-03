/*
Foreach Loop => which is used to loop throught elements in array
Syntax : 
for (type variableName : arrayName){
    // code block to be executed
}
*/

// Example of Foreach Loop 
#include <iostream>
using namespace std;

int main(){
    int myNumber[5] = {10, 20, 30, 40, 50};
    for (int Number : myNumber){
        cout << "This is : " << Number << "\n";
    }
    return 0;
}