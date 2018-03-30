#include <iostream>
#include <math.h>
#include <limits>

//0 11111111111 1111111111111111111111111111111111111111111111111111 - double max value
void printDoubleValues() {
    double exponent = 0.0;
    double decimalNumber = 0.0;
    int temp = 0;
    int size = sizeof(double) == 4 ? 32 : 64;
    double num = 1;
    //for 64 bit exponent has 11 bits, for 32 - 8 bits
    int point = (64 == size) ? 11 : 8;
    for (int i = 0; i < point; ++i){
        exponent += num;
        num*=2;
    }
    temp = exponent - pow(2, point - 1);
    num = 1;
    double mantissa = 0.0;
    for (int i = point + 2; i < size - 1; ++i) {
        mantissa += num;
        num/=2;
    }
    std :: cout << "Double min value = " << -mantissa*pow(2, temp) << std :: endl;
    std :: cout << "Double max value = " << mantissa*pow(2, temp) << std :: endl;
}

//converting binnary number to decimal
void printFloatValues() {
    int decimalNumber = 0;
    int num = 1;
    int size = (sizeof(int) == 4) ? 32 : 64;
    for (int i = 0; i < size - 1; ++i){
        decimalNumber += num;
        num *= 2;
    }
    std :: cout << "Float min value = " << decimalNumber + 1 << std :: endl;
    std :: cout << "Float max value = " << decimalNumber << std :: endl;
}

void printIntValues() {
    unsigned temp = 0;
    int max = (temp-1)/2;
    int min = max + 1;
    std :: cout << "Int min value = " << min << std :: endl;
    std :: cout << "Int max value = " << max << std :: endl;
}

int main() {
    printIntValues();
    printFloatValues();
    printDoubleValues();
    return 0;
}
