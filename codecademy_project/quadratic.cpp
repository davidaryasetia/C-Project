/*
C++ Quadratic Formula project using cmath library
description : 
1. make program to calculate quadratic formula ax^2 + bx + c = 0
2. make concepts algebra of graphing 
*/
#include <iostream>
#include <cmath>

int main (){
    // declare 3 variable store float 
    double a, b, c;
    std::cout << "=====================================================\n";
    std::cout << "Welcome to program in calculate Qudratic Formula : \n";
    std::cout << "Enter a : ";
    std::cin >> a;

    std::cout << "Enter b : ";
    std::cin >> b;

    std::cout << "Enter c : ";
    std::cin >> c;

    // initialize formula root 1 & 2 
    double root1, root2;
    root1 = (-b + (std::sqrt((b*b) - (4*a*c)))) /2*a;
    root2 = (-b - (std::sqrt((b*b) - (4*a*c)))) /2*a;

    // preview the output result program 
    std::cout << "\n";
    std::cout << "The result of program is : \n"; 
    std::cout << "Enter a : " << a << "\n";
    std::cout << "Enter b : " << b << "\n";
    std::cout << "Enter c : " << c << "\n";
    std::cout << "Root 1 is : " << root1 << "\n";
    std::cout << "Root 2 is : " << root2 << "\n";
    std::cout << "=====================================================\n";
    return 0;
}
