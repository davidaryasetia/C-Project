/*
C++ Multi-Dimensional Array -> is an array of arrays
Declare Syntax : 
string letters[2][4];

// Array two dimension, and 4 value
string letters[2][4] = {
                        {"A", "B", "C", "D"}, 
                        {"E", "F", "G", "H"}
                        };

// Array have 3 dimension 
string letter[2][2][2] = {
                            {"A", "B"}, 
                            {"C", "D"}, 
                        }, 
                        {
                            {"E", "F"}, 
                            {"G", "H"}
                        };
*/

// Example of declare multi dimension array with call access
#include <iostream>
using namespace std;

int main (){
    string letter[2][4] = {{"A", "B", "C", "D"}, {"E", "F", "G", "H"}};
    // Change Elements in multi dimensional array 
    letter[0][2] = 'Z';
    // Test to access array in firs row and third colum
    cout << letter[0][2] << "\n";
    cout << "================================================== \n";
    cout << "2 Dimension of Arrya \n";
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            cout << "letter : " << letter[i][j] << "\n";
        }
    };

    cout << "========================================================\n";
    cout << "3 Dimension of Array \n";
    string character[2][2][2] = 
    {
        {
            {"A", "B"}, 
            {"C", "D"}
        }, 
        {
            {"E", "F"}, 
            {"G", "H"}
        }
    };

    // Changing Multi Dimension Character in E
    // character[1][0][0] = "T";

    // Print Character in row1 , inside row2, and value D
    cout << "Letter  : " <<character[1][0][0] << "\n\n";
    cout << "Looping All Array 3 Dimension : \n";

    // Example to show upp all loop in1 multi dimension array 
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<2; k++){
                cout << "Character : " << character[i][j][k] << "\n";
            }
        }
    }
    return 0;
}