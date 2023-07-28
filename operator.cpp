// Implement Operator 

#include <iostream>
using namespace std;

int main(){
    // Addition operator (+)
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2 ;

    // Substraction operator (-) 
    int subtract = sum2 - sum1;

    // Multiplican operator (*)
    // double multiple = sum1 * sum2;

    // Divides operator (/)
    int divides = sum3 / sum2;

    // Modulus Operator (%)
    int modulus = sum2 & sum1;

    // Increment operator (++)
    int increment = ++sum1;

    // Decrement operator (--)
    int decrement = --sum1;

    cout << "Hasil Perhitungan : " "\n";
    cout << "Sum 1 \t: " << sum1 << "\n";
    cout << "Sum 2 \t: " << sum2 << "\n";
    cout << "Sum 3 \t: " << sum3 << "\n";
    cout << "Subtraction(-) \t: " << subtract << "\n";
    // cout << "Multiple(*) \t: " << multiple << "\n";
    cout << "Divide(/) \t: " << divides << "\n";
    cout << "Modulus(%) \t: " << modulus << "\n";
    cout << "Increment(++) : " << increment << "\n";
    cout << "Decrement(--) \t: " << decrement << "\n";
    return 0;
}