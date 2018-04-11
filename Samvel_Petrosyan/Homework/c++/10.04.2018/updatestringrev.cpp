#include <iostream>
#include<cstring>

void stringReverse(char *);
int main(void) {
    char str[100];
    std::cout << "input a string" << std::endl;
    std::cin.getline(str, 99);
    std::cout << std:: endl;
    std::cout << "string in reverse is: " << std::endl;
    stringReverse(str); 
    std::cout << str << std::endl;
    return 0;
}
void stringReverse(char *cstr)
{
    int len = strlen(cstr);
    char swap;

    for (int i = 0; i < len/2; i++)
    {
        swap = cstr[i];
        cstr[i] = cstr[len-i-1];
        cstr[len-i-1] = swap;
    }
}
