/*
Array are useed to store in multiple values in a 
single variable, instead a declaring variable for each value

Syntax declare array: 
string cars[4];
string cars[4] = {"Volvo", "BMW, "Ford", "Mazda"};
int myNum[3] = {10, 20, 30};
*/

#include <iostream>
using namespace std;

int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << "Element Before : " << cars[1] << "\n";
    // Change array in element (refers to index number)
    cars[1] = "Toyota";
    cout << "Element After : " << cars[1] << "\n";

    cout << "======================================== \n";
    cout << "Array Elements : \n";
    for (int i=1; i<5; i++){
        cout << i <<". Merk : " <<cars[i] << "\n";

    }
}
