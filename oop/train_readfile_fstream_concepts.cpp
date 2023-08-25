// I want to read the fstream_file.cpp
#include <iostream>
#include <fstream>
using namespace std;

// make main program 
int main (){
    // declare variable to fill up contain 
    string txt;

    // declare read classes
    ifstream readFile("fstream_file.cpp");

    // loop the contain of file 
    while (getline (readFile, txt)){
        cout << "Output text file : \n" << txt;
    }

    // close function to clean unnecassary space 
    readFile.close();
}