#include <iostream>
#include <stdio.h>
#include <stdarg.h>

void customPrintf(const char* stringLiteral, ...) {
    va_list listPointer;
    va_start(listPointer, stringLiteral);//making listpoer the first arg of numargs; 
    int ifInt = 0;
    float ifFloat = 0.0;
    char ifChar;
    char* ifString;
    const char* i;
    for( i = stringLiteral; *i != '\0'; ++i) {
        if('%' == *i) {
            switch(*(++i)) {
                case 'd':
                    ifInt = va_arg(listPointer, int);
                    std::cout << ifInt; 
                    break;
                case 'f':
                    ifFloat = va_arg(listPointer, double);
                    std::cout << ifFloat;
                    break;
                case 'c':
                    ifChar = va_arg(listPointer, int);
                    std::cout << ifChar;
                    break;
                case 's':
                    ifString = va_arg(listPointer, char*);
                    std::cout << ifString;
                    break;
                    
            }
        } else {
            std::cout << *i;
        }
    }
    va_end(listPointer);
}

int main() {
    customPrintf("Integer %d,\nFloat %f,\nChar %c,\n\
Char* %s\n", 104, 29.0, 'W', "Wow!");
    return 0;


}
