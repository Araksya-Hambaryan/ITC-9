#include <iostream>
#include <cstdio>
#include <cstdarg>

void myPrintf(const char* format, ...) {
    const char* ptr;
    int intValue = 0;
    float floatValue = 0.0;
    char charValue;
    char* stringValue;
    va_list arguments;
    va_start(arguments, format);
    for (ptr = format; *ptr != '\0'; ++ptr) {
        if ('%' == *ptr) {
            switch(*(++ptr)) {
                case 'd' : 
                    intValue = va_arg(arguments, int);
                    std::cout << intValue << std::endl;
                    break;
                case 'f' : 
                    floatValue = va_arg(arguments, double);
                    std::cout << floatValue << std::endl;
                    break;
                case 'c' : 
                    charValue = va_arg(arguments, int);
                    std::cout << charValue << std::endl;
                    break;
                case 's' : 
                    stringValue = va_arg(arguments, char*);
                    std::cout << stringValue << std::endl;
                    break;
            }
        } else {
            std::cout << *ptr;
        }
    }
    va_end(arguments);
}

int main() {
    myPrintf("int number = %d\nfloat number = %f\nchar character = %c\nstring = %s", 5, 57.5555,'@', "Hello!");
    return 0;
}
