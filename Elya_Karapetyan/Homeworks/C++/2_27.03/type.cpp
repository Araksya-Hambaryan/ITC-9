#include <iostream>
#include <math.h>

int main() {

    int maxValueOfChar = pow(2, sizeof(char) * 8.0) - 1;
    int minValueOfChar = (-1) * maxValueOfChar - 1;
    std::cout << "Max value of char: " << maxValueOfChar << std::endl
              << "Min value of char: " << minValueOfChar << std::endl;
    int maxValueOfInt = pow(2, sizeof(int) * 8.0 - 1) - 1;
    int minValueOfInt = (-1) * maxValueOfInt - 1;
    std::cout << "Max value of int: " << maxValueOfInt << std::endl
              << "Min value of int: " << minValueOfInt << std::endl;
    float maxValueOfFloat = pow(2, sizeof(float) * 8.0 - 1) - 1;
    float minValueOfFloat = (-1) * maxValueOfFloat - 1;
    std::cout << "Max value of float: " << maxValueOfFloat << std::endl
              << "Min value of float: " << minValueOfFloat << std::endl;
    double maxValueOfDouble = pow(2, sizeof(double) * 8.0 - 1) - 1;
    double minValueOfDouble = (-1) * maxValueOfDouble - 1;
    std::cout << "Max value of double: " << maxValueOfDouble << std::endl
              << "Min value of double: " << minValueOfDouble << std::endl;
    
    return 0;
}
