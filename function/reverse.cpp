#include <iostream>
#include <string>

int main(){
    std::string text = "makan";
    std::string reverse_text = "";
    for (int i=text.size() - 1; i>=0; i--){
        reverse_text += text[i];
    }
    std::cout << reverse_text << "\n";
    std::cout << text << "\n";
    std::cout << text[0];

    return 0;
}