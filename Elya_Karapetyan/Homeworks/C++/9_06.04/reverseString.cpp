#include <iostream>

void reverseString(std::string& str, int size) {
    char* ptr1 = nullptr;
    char* ptr2 = nullptr;   
    for (int i = 0; i < size / 2; ++i) {
        ptr1 = &str[i];
        ptr2 = &str[size - i - 1];
        char tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
    }
}

int main() {
    std::string str;
    std::cout << "Enter any string: ";
    getline(std::cin, str);
    int size = str.size();
    reverseString(str, size);
    std::cout << "Reverse: " << str << std::endl;

    return 0;
}
