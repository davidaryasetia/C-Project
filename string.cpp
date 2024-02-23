#include <iostream>
#include <string>

int main()
{
    // String Concatenation
    std::string text1;
    std::string text2;
    std::string txt;
    std::cout << "Masukkan Kata 1: ";
    getline(std::cin, text1); // use getline() function to read line of text
    std::cout << "Masukkan Kata 2: ";
    std::cin >> text2;
    std::cout << "Masukkan txt : ";
    std::cin >> txt;
    std::cout << "\n";
    // Make a concatenation
    std::cout << "Kata Yang Dimasukkan : " << text1 + " " + text2 << "\n";

    // Make a append function to concatenation
    std::cout << "Kata Yang Dimasukkan : " << text1.append(text2) << "\n";

    // Description lenght or size function
    std::cout << "Deskripsi Kata : " << txt.size() << "\n";

    // Access String
    std::cout << "Access String index[1] : " << text1[1] << "\n";

    // Modify String in Index[1]
    text1[1] = 'a';
    std::cout << "Result Modifying : " << text1 << "\n";
    return 0;
}