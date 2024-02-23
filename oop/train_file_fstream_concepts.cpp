// C++ File -> fstream library (to create, write, and read a file )
/*
There are 3 concepts classess can be use in fstream library :
ofstream -> create and write a file
ifstream -> read a filekz
fstream -> a combination ofstream and ifstream (can create, write, and read a file)
*/
// tests
//  Okay now we want to make a file nam "train_file.cpp" concepts use fstream library
#include <iostream>
#include <fstream>

using namespace std;

// make a main program
int main()
{
    // make a declaration class
    ofstream trainFile_fstream("fstream_file.cpp");

    // fill the file fstream_file.cpp with some text
    trainFile_fstream << "This is a test of fstream library with class ofstream (to create and write file)";

    trainFile_fstream.close();
};