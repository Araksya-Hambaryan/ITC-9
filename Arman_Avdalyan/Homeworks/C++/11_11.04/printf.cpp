#include <iostream>
#include <cstdarg>

void printf(const char* fmt...) {
    va_list args;
    va_start(args, fmt);
    double numD = 0;
    int numI = 0;
    int count = 1;
    char ch = ' ';
    while (*fmt != '\0') {
        if (*fmt == '%') {
            switch(*(++fmt)) {
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
                    std :: cout << static_cast<char>(numI);
                    break;
            }
        } else {
            std::cout << *fmt;
        }
        ++fmt;
    }
    va_end(args);
}

int main() {
    printf("Int a = %d, %d, double f = %f, char = %c", 1, 4, 10, 'c', 5.4);
    std :: cout << std :: endl;
    return 0;
}
