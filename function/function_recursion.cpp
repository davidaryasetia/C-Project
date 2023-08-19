/*
Recursion -> recursion is the technique of making a function call itself. 
*/

// Example, in the following example, recursion is used to add range of number 
#include <iostream>
using namespace std;

int sum (int k){
    if (k > 0){
        return k + sum (k - 1);
    } else {
        return 0;
    }
}

int main (){
    int result = sum (5);
    cout << "Hasil : " << result;
    
    return 0;
}