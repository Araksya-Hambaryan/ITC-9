# include <iostream>

int main() {
    char op;
    float num1;
    float num2;

    std::cout << "Enter the expression: " << std::endl;
    std::cin >> num1 >> op >> num2;
    if(0 == num2) {
	std::cout << "The number cannot be divided into zero!" << std::endl;
    }
    switch(op)
    {
        case '+':
            std::cout << num1+num2 << std::endl;
            break;

        case '-':
            std::cout << num1-num2 << std::endl;
            break;

        case '*':
            std::cout << num1*num2 << std::endl;
            break;

        case '/':
            std::cout << num1/num2 << std::endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            std::cout << "Error! operator is not correct" << std::endl;
            break;
    }

    return 0;
}
