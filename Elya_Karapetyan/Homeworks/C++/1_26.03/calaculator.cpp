#include <iostream>

float action(float firstNumber, float secondNumber, char oper, bool &check) {
    switch(oper) {
        case '+':
            return (firstNumber + secondNumber);
        case '-':
            return (firstNumber - secondNumber);
        case '*':
            return (firstNumber * secondNumber);
        case '/':
            if (0 == secondNumber) {
                check = false;
                std::cout << "ERORR!!! Division 0" << std::endl;
                return -1;
            }
            return (firstNumber / secondNumber);
        default:
            check = false;
            std::cout << "Invalid operator!" << std::endl;
            return -1;
    }
}
 
int main() {
    float firstNumber = 0;
    float secondNumber = 0;
    char oper;
    int check = 1;
    bool valid = true;
    do {
        std::cout << "Enter the action (e.g 5 + 15): ";
        std::cin >> firstNumber >> oper >> secondNumber;
        float result = action(firstNumber, secondNumber, oper, valid);
        if (valid) {
            std::cout << "Result: " << result << std::endl;
        }
         do {
            std::cout << "Enter 1 for continue or 0 for Exit! ";
            std::cin >> check;
            switch(check) {
                case 0:
                    return 0;                   
                case 1:
                    break;
            }
        } while(0 != check || 1 !=check);
    } while(check);
    return 0;
    }
