// Example to make read file from C++ Program 
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Declare variable to fill line 
    string myText;

    // Declare classes in ifstream
    ifstream readText("program.txt");

    // Loop text
    while(getline(readText, myText)){
        cout << myText;
    }

    readText.close();
};