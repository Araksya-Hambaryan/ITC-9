#include <iostream>
#include <string>
int main() {
    float num1;
    char symbal;
    float num2;
    std::cin>> num1 >> symbal >> num2;
    std::cout <<num1<< std::endl;	
    if (symbal == '+') {
	std::cout<< num1 + num2<<std::endl;
    } else if (symbal == '-') {
 	std::cout << num1 - num2;
    } else if (symbal == '*') {	
        std::cout << num1 * num2;
    } else if (symbal == '/') {
	std::cout <<num1 / num2;
    } else {
	 std::cout << "sxal";
    }
    return 0;
} 
