#include <iostream>

int main(){
    float num1, num2;
    char sign;
    std::cout << "Please, write any text to finish the program \n";
    while(std::cin >> num1 >> sign >> num2) {
    if ('/' == sign && 0 == num2) {
        std::cout << "ERROR: Division by 0" << std::endl;}
    switch(sign)
    {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;

        case '-':
            std::cout << num1 - num2 << std::endl;
            break;

        case '*':
            std::cout << num1 * num2 << std::endl;
            break;

        case '/':
            std::cout << num1 / num2 << std::endl;
            break;

        default:
            std::cout << "Error! operator is not correct" << std::endl;
            break;
        }
    }
    std::cout << "Incorrect input, bye :-( \n";

 
return 0;
}
