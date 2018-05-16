#include <iostream>

  int main() {
    char op;
    double num1, num2;
    std::cout << "Please input the expression as shown - 5+5 - and press 'Enter' : ";
    std::cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
      std::cout << num1 << " " << op << " " << num2 << " = " << num1 + num2;
      break;

    case '-':
      std::cout << num1 << " " << op << " " << num2 << " = " << num1 - num2;
      break;

    case '*':
      std::cout << num1 << " " << op << " " << num2 << " = " << num1 * num2;
      break;

    case '/':
      if (0 == num2) {        
        std::cout << "Division by zero! ";
        break;
        
      } else {
        std::cout << num1 << " " << op << " " << num2 << " = " << num1 / num2;
        break;
      }

    default:
      // If the operator is other than +, -, * or /, error message is shown
      std::cout << "Error! operator is not correct";
      break;
    }

    return 0;
  }