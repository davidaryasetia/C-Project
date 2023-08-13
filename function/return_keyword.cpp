/*
Return Values keyword -> If you want the function return a value, use a datatype (such as int string, etc);
*/
// Example 
#include <iostream>
using namespace std;

// Example return value with one parameter
int myFunction (int x){
    return 5 + x;
}

// Example return value parameter with two parameter 
int myCalculate (int x, int y){
    return x + y;
}

int main (){
    cout << "The Number = " << myFunction (3) << "\n";
    cout << "The x + y = " << myCalculate (3, 4) << "\n";

    // We can store result in variable z 
    int z = myCalculate (5, 5);
    cout << "This Calculate = " << z << "\n";
    return 0;
}
