#include <iostream>

void reverseString(std :: string& str, int length) {
    char* ptr1 = nullptr;
    char* ptr2 = nullptr;
    for (int counter = 0; counter < length / 2; ++counter) {
        ptr1 = &str[counter];
        ptr2 = &str[length - counter - 1];
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}

int main() {
    std :: string str;
    std :: cout << "Input string : ";
    getline(std :: cin, str);

    int length = str.size();
    reverseString(str, length);

    std :: cout << "Reversed string : " << str << std :: endl;

    return 0;
}
