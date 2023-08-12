/*
Loop Throght an Array with sizeof() function 
in array we must loop condition, is not ideal, and will
work only for array soecified
*/

// example standart of loop
#include <iostream>
using namespace std;

// We can make foreach loop function() ex
// for (type variableName : arrayName){
    // code block to execute
//}
int main(){
int number[] = {10, 20, 30, 40, 50};
for (int i : number){
    cout << "Number : " << i << "\n";
}
}
