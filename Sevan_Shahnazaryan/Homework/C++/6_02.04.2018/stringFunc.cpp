#include <iostream>
#include <string>

int count(std::string str) {
    int amount = 0;
    char symbol = ' ';
    std::cout << "Input a symbol: ";
    std::cin >> symbol;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == symbol) {
            amount++;
        }
    }
    return amount;
}

std::string replace(std::string str) {
    char symbol1 = ' ';
    char symbol2 = ' ';
    std::cout << "Enter a symbol you want to replace: ";
    std::cin >> symbol1;
    std::cout << "Enter exchange symbol: ";
    std::cin >> symbol2;
    for (int i = 0; i <  str.length(); i++) {
        if (str[i] == symbol1) {
            str[i] = symbol2;
        }
    }
    return str;
}

std::string remove(std::string str) {
    char symbol;
    std::cout << "Input an element you want to remove: ";
    std::cin >> symbol;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == symbol) {
           str[i] = '\0';
        }
    }
    return str;
}

void guide() {
    std::cout << "If you want to manipulate the text, here is a guide for you\n"; 
    std::cout << "1 - count (To count the amount of any symbol of text) \n";
    std::cout << "2 - replace (will replace first symbol with second) \n";
    std::cout << "3 - remove (Will remove a symbol from the text) \n";
    std::cout << "4 - will stop the programm \n";
    std::cout << "Let's start now! Enter the number you want" << std::endl;
    std::cout << "------------------------------------------------- \n \n";

}

int main() {
    std::string numString = " ";
    std::string str = "";
    std::cout << "Enter a string" << std::endl;
    std::getline(std::cin, str);
    guide();
    while (std::cout << "num = ", std::cin >> numString) { 
        if (numString.length() > 1) {
            std::cout << "Wrong input, try again" << std::endl;
            continue;
        }
        char num = numString[0];
        switch (num) {
        case '1':
            std:: cout << "Symbol amount in this text is: " << count(str) << std::endl;
            std::cout << str << std::endl;
            break;
        case '2':
              str = replace(str);
              std::cout << str << std::endl;
              break;
        case '3':
              str = remove(str);
              std::cout << str << std::endl;
              break;
        case '4':
              std::cout << "Good bye :-(" << std::endl;
              return 0;
        default:
              std::cout << "Wrong input, try again" << std::endl;
              break;
        }
    }
    return 0;
}
