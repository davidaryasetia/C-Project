// Codecademy review variable practice project
#include <iostream>

int main (){
    // 1. program 1 -> create program to convert weight item in earth to mars
    double weight_item_earth, weight_item_mars;
    std::cout << "===============================================================\n";
    std::cout << "Program 1 (Convert weight item from earth to mars) \n";
    std::cout << "Input weight item in earth (kg) : ";
    std::cin >> weight_item_earth;
    std::cout << "\n";
    weight_item_mars = weight_item_earth * (3.73 * 9.81); // formula convert item earth to mars
    std::cout << "Result conversion weight item in (earth to mars): " << weight_item_mars << " kg \n";
    std::cout << "Thank for your conversion in \n";
    std::cout << "===============================================================\n";

    // 2. Program 2 -> create program to convert item in miles to km
    double miles, km;
    std::cout << "Program 2 (Convert of distance from miles to km) \n";
    std::cout << "Input the distance in miles : "; 
    std::cin >> miles;
    std::cout << "\n";
    km = miles * 1.6; // formula to convert miles to km
    std::cout << "Result conversion (miles to km) : " << km << " km \n";
    std::cout << "===============================================================\n";
    return 0;
}