#include <iostream>

void reverse(std :: string& str, int size) {
    char* start;
    char* end;
    char temp = ' ';
    for (int i = 0; i < size / 2; ++i) {
        start = &str[i];
        end = &str[size - i - 1];
        temp = *start;
        *start = *end;
        *end = temp;
    }
}

int main() {
    std :: string str = "";
    int length = 0;
    std :: cout << "Input string: ";
    std :: getline(std :: cin, str);
    length = str.length();
    reverse(str, length);
    std :: cout << "Reversed string is -> " << str << std :: endl;
    return 0;
}

