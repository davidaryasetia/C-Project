/*
Challenge function 7 polindrom text
describe code :
1. Defines function is_polindrome() that takes : 
    - An std::string parameter text
    The function should be return :
    true -> if text polindrome
    false -> if text not polindrome

2. Polindrome is any text that has same character backward as it dose forwards, 
    for example "hannah", "racecar" is polindrome while "menu" and "akward" are not

3. Not test for each cases such as capitalizazion or spaces
*/
#include <iostream>
#include <string>

// make a declaration function 
bool is_polindrome (std::string text){
    std::string reverse_text = "";

    for (int i=text.size()-1; i>=0; i--){
        reverse_text += text[i];
    }
    
    // make conditional logic 
    if (text == reverse_text){
        return true;
    } else {
        return false;
    }
}

// make a main program
int main (){
    // call a function 
    std::cout << is_polindrome("madam") << "\n";
    std::cout << is_polindrome("ada") << "\n";
    std::cout << is_polindrome("lovelace") << "\n";
    return 0;
}
