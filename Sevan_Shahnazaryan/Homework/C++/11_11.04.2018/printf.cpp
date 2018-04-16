#include <iostream>
#include <cstdarg>

void printf(const char * format, ...) {
    va_list args;
    va_start(args, format);
    double numD = 0;
    int numI = 0;
    int count = 1;
    char ch = ' ';
    while('\0' != *format) {
        if('%' == *format) {
            switch(*(++format)) {
                case 'd':
                    ++count;
                    numI = va_arg(args, int);
                    std::cout << numI;     
                    break;
                case 'f':
                    ++count;
                    numD = va_arg(args, double);
                    std::cout << numD;
                    break;
                case 'c':
                    ++count;
                    numI = va_arg(args, int);
                    std::cout << static_cast<char>(numI);
                    break;
            }
        } else {
            std::cout << *format;
        }
        ++format;
    }
    va_end(args);   
}

int main() {
    char ch = 'a';
    float a = 5.5;
    float b = 3.4;
    int x = 10;
    printf("char: %c, float: %f and %f, int: %d", ch, a, b, x);
    std::cout << std::endl;
    return 0;
}

