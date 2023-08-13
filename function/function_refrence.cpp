/*
C++ Function Pass By Refrence -> We can also pass the refrence to the function
this can be usefull when need, change the value;
*/

// Example 
#include <iostream>
using namespace std;

// Declare function to can change be parameter
void swapNumber (int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main (){
    int firstNum = 10;
    int secondNum = 20;

    // Before Swap 
    cout << "Before Swap : " << "\n";
    cout << firstNum << ", " << secondNum << "\n \n";

    // After Swap to call the swapNumber function();
    cout << "After Swap : " << "\n";
    swapNumber (firstNum, secondNum);
    cout << firstNum << ", " << secondNum;
    return 0;
}