#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;

    cout << "C++ Math Function Perhitungan Matematika \n";
    cout << "Masukkan Value x = ";
    cin >> x;
    cout << "Masukkan Value y = ";
    cin >> y;
    cout << "==============================================\n";
    cout << "Keterangan x =" << x << ", y =" << y << "\n";
    cout << "Max (" << x << "), (" << y << ") = " << max(x, y) << "\n";
    cout << "Min (" << x << "), (" << y << ") = " << min(x, y) << "\n";
    cout << "sqrt (" << x << ") = " << sqrt(x) << ", sqrt(" << y << ") =" << sqrt(y) << "\n";    // function squere root
    cout << "log (" << x << ") =" << log(x) << ", log=(" << y << ") =" << log(y) << "\n";        // function rounds of number
    cout << "round (" << x << ") =" << round(x) << ", round(" << y << ") =" << round(y) << "\n"; // function natural logaritm
    cout << "abs (" << x << ") =" << abs(x) << ", abs(" << y << ") =" << abs(y) << "\n";         // Return absolute value of x
    cout << "acos(" << x << ") = " << acos(x) << ", acos(" << y << ") =" << acos(y) << "\n";     // Return arccosine of x
    cout << "asin(" << x << ") = " << asin(x) << ", asin(" << y << ") =" << asin(y) << "\n";     // Return the arcsin of x
    cout << "cos(" << x << ") = " << cos(x) << ", cos(" << y << ") =" << cos(y) << "\n";         // Return cosine of x
    cout << "sin(" << x << ") = " << sin(x) << ", sin(" << y << ") =" << sin(y) << "\n";         // Return sin of x
    cout << "tan(" << x << ") = " << tan(x) << ", tan(" << y << ") =" << tan(y) << "\n";         // Return tan of x
    return 0;
}