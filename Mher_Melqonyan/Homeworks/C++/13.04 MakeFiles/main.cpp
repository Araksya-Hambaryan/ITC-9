#include <iostream>
#include "functions.h"

int main() {
printMessage();
std::cout << std::endl;
std::cout << "Input number which must count the factorial." << "\n" << "Note: The input number must be < than 30 & > than 0" <<std::endl;
int num;
std::cin >> num;
if( num > 0 && num < 30){
std::cout << "\n" << "The factorial of " << num << " is " << factorial(num) <<std::endl;
} else {
std::cout << "Please read the note :)" << std::endl;
}
return 0;
}
