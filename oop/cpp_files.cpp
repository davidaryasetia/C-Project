/*
C++ Files -> the fstream library allow us to work with file 

To use fstream library, included both standard <iostream> and <fstream> header file. 
Example 
#include <iostream>
#include <fstream>

There are 3 classess, included in fstream library 
ofstream -> can create, and write file 
ifstream -> can read file 
fstream -> combination of ofstream, and ifstream, can create, read, dan write file
*/

// Create and write to a file (make filename myFile_program.txt) -> use ofstream 

// Example to make a read file 
#include <iostream>
#include <fstream>
using namespace std;

int main (){

    // Make and declare fstream classess 
    ofstream myFile ("File_Program.txt");

    // File Fill_Program.txt -> with some text
    myFile << "This is my File_Program.txt";

    // Close the file wi
    th close() function 
    myFile.close();

    return 0;
}