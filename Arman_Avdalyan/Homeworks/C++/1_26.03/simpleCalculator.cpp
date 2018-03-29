#include <iostream>

void input(double& num1, double& num2, char& op) {
    std :: cout << "Input expression(like this 1+5) : ";
    std :: cin >> num1 >> op >> num2;
    while (!std :: cin || ('+' != op && '-' != op && '*' != op && '/' != op) || ('/' == op && 0 == num2)) {
        std :: cin.clear();
        std :: cin.ignore();
        if (0 == num2) {
            std :: cout << "The second number can't be 0 if operator is '/': ";
        } else {
            std :: cout << "Please input only numbers and +,-,*,/ symbols(Input like this 3+3)\n";
        }
        std :: cin >> num1 >> op >> num2;
    }
}

double calculate(double num1, double num2, char op) {
    switch(op) {
        case '+' :
            return num1 + num2;
        case '-' :
            return num1 - num2;
        case '*' :
            return num1 * num2;
        case '/' :
            return num1 / num2;
    }
}

int main() {
    double num1 = 0;
    double num2 = 0;
    char op = ' ';
    input(num1, num2, op);
    if (0 > num2) {
        std :: cout << num1 << " " << op << " (" << num2 << ") = " << calculate(num1, num2, op) << std :: endl;
    } else {
        std :: cout << num1 << " " << op << " " << num2 << " = " << calculate(num1, num2, op) << std :: endl;
    }
    return 0;
}
