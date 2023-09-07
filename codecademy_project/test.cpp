// C++ Program test to check program 
#include <iostream>

int main (){
    // declare pin and tries 
    int pin = 0;
    int tries = 0;
    
    std::cout << "Welcome to the Bank of codecademy : \n";
    std::cout << "Enter your pin number : ";
    std::cin >> pin;
    tries++;

    while (pin != 12345 && tries < 3){
        std::cout << "\n";
        std::cout << "Your pin false \n";
        std::cout << "Please enter your pin number again : ";
        std::cin >> pin;
        tries++;
    }

    if (pin == 12345){
         std::cout << "Your Pin Accepted \n";
    } else {
    std::cout << "Your Account has been blocked \n";
    }
    return 0;
}