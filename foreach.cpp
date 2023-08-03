/*
Foreach loop is used exclusively to loop throught in an 
array
Syntax : 
for (type variableName : arrayName){
    // Code Block to execute
}
*/
// Example of foreach loop 
#include <iostream>
using namespace std;

int main(){
// Use foreach Loop to array l
int number[5] = {10, 20, 30, 40, 50};

// sizeof() function usually must containt size in bytes based on array store
cout << "Size array : " << sizeof(number) << "\n";

// Make sizeof() to count array 
cout << "Count Number in integer array is : " << sizeof(number)/sizeof(int) << "\n";
for (int i : number){
    cout << i << "\n";
}
}