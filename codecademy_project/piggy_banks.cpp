/*
C++ Piggy Bank Codecademy Project -> Convert currency in usd
description : 
1. Write program for input amount currency in peos, reasis, soles
2. Convert all input currency in $usd
3. formulas :
    - 1 pesos = 0.059 usd
    - 1 reais = 0.20 usd
    - 1 soles = 0.27 usd
*/
#include <iostream>

int main (){
    // declare 3 variable input currency
    double pesos, reais, soles;
    double dollars;
    std::cout << "=======================================\n";
    std::cout << "Welcome to Convert another currency \n"; 
    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of reais Brazil: ";
    std::cin >> reais;

    std::cout << "Enter number of soles Peru: ";
    std::cin >> soles;

    // declare of 3 formula pesos, reasis, soles 
    dollars = ((pesos * 0.059) + (reais * 0.20) + (soles * 0.27));
    std::cout << "\n";
    std::cout << "The display US Dollars = $ " << dollars << "\n";
    std::cout << "Thank You for your attention \n";
    std::cout << "=======================================\n";
    return 0;   
}