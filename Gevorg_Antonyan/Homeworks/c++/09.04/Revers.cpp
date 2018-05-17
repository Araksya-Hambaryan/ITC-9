#include <iostream>
#include <string>

int main() {
    std::string text = "123456789";
    char* p1;
    char* p2;
    for(int i = 0; i < text.size() / 2; ++i) {
        p1 = &text[i];
        p2 = &text[text.size() - 1 - i];
        char tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
    }  
    std::cout << text <<std::endl;
    return 0;
}
