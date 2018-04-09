#include <iostream>
#include <string>

int main() {
    std::string str  = "12345678";
    char* sign1 = &str[0];
    char* sign2 = &str[str.length() - 1];
    std::cout << str << std::endl;
    for(int i = 0; i < str.length() / 2; i++) {
        char temp = *sign1;
        *sign1 = *sign2;
        *sign2 = temp;
        ++sign1;
        --sign2;
    }
    std::cout << str << std::endl;
    return 0;
}
