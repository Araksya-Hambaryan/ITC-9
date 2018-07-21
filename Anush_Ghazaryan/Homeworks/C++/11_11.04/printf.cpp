#include <iostream>
#include <cstdio>
#include <cstdarg>

void myPrintf(const char* arguments, ...) {
    const char* ptr;
    int intArg = 0;
    float floatArg = 0.0;
    char charArg;
    char* stringArg;
    va_list argsList;
    va_start(argsList, arguments);
    for (ptr = arguments; *ptr != '\0'; ++ptr) {
        if ('%' == *ptr) {
            switch(*(++ptr)) {
                case 'd' : 
                    intArg = va_arg(argsList, int);
                    std::cout << intArg << std::endl;
                    break;
                case 'f' : 
                    floatArg = va_arg(argsList, double);
                    std::cout << floatArg << std::endl;
                    break;
                case 'c' : 
                    charArg = va_arg(argsList, int);
                    std::cout << charArg << std::endl;
                    break;
                case 's' : 
                    stringArg = va_arg(argsList, char*);
                    std::cout << stringArg << std::endl;
                    break;
            }
        } else {
            std::cout << *ptr;
        }
    }
    va_end(argsList);
}

int main() {
    myPrintf("int num = %d\nfloat num  = %f\nchar symbol  = %c\nstd::string strings = %s", 10, 1.5555,'c', " It's a string");
    return 0;
}
