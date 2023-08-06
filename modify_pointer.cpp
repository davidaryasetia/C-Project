/*
Modify the Pointer Value => You can also change the pointer value. But note that wil also change value of the original variabel 
*/

// Example to modify the Pointer 
#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string* myPointer = &food;

    // Output value of food (Pizza)
    cout << "1. " <<food << "\n";

    // Output memory address of food (.....)
    cout << "2. " << &food << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << "3. " << *myPointer << "\n";

    // Change value to the pointer in Hamburger
    *myPointer = "Hamburger";

    // Output new value of the pointer Hamburger 
    cout << "4. " << *myPointer << "\n";

    // Output the new value of food variable in Hamburger
    cout << "5. " << food << "\n";

}