#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Mutqagrel text@ -> ";
    std::getline(std::cin, str);
    char* firstPtr = NULL;
    char* lastPtr = NULL;
    int size = str.size();
    for(int i = 0; i < size / 2; ++i) {
        firstPtr = &str[i];
        lastPtr = &str[size - 1 - i];
        char tmp = *lastPtr;
        *lastPtr = *firstPtr;
        *firstPtr = tmp;
    }  
    std::cout << str << std::endl;
    return 0;
}
