#include <iostream>
#include <vector>

int main() {
    std::vector<char> text;
    std::vector<char> newText;
    char buffer;
    std::cout << "enter your text, for stop ener 0" << std::endl;
    do {
        std::cin >> buffer;
        text.insert(text.end(), buffer);
    } while ('0' != buffer);
    unsigned int size = text.size();
    for (int i = 0; i < size; ++i) {
        if('A' < text[i] || 'z' < text[i]) {
            newText.insert(newText.end(), text[i]);
        }
    }
    for (int i = 0; i < newText.size(); ++i) {
        std::cout << newText[i];
    }
    std::cout << std::endl;
    return 0;
}
