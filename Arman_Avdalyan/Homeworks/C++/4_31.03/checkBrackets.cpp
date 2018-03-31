#include <iostream>
#include <stack>

bool isCorrect(std :: string str) {
    int index = 0;
    while ('\0' != str[index]) {
        if ('(' != str[index] && ')' != str[index] && '[' != str[index] && ']' != str[index] &&  '{' != str[index] && '}' != str[index]){
            return false; 
        }
        ++index;
    }
    return true;
}

void input(std :: string& str) {
    std :: cout << "Please input bracket string to check it : ";
    std :: cin >> str;
    char temp = ' ';
    if (0 != str.length() % 2) {
        std :: cout << "You inputed the odd count symbols please add one to check it: " << str;
        std :: cin >> temp;
        str += temp;
    }
    while (!std :: cin || !isCorrect(str)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct : ";
        std :: cin >> str;
    }
}

bool checkBrackets(int& errorIndex, std :: string& bracket) {
    input(bracket);
    std :: stack<char> brackets;
    int index = 0;
    while ('\0' != bracket[index]) {
        if ('(' == bracket[index] || '[' == bracket[index] || '{' == bracket[index]) {
            brackets.push(bracket[index]);
        } else {
            if (0 == brackets.size()) {
                return false;
            }
            //because their difference in ascii table is 2 or 1
            if (2 == (bracket[index] - brackets.top()) || 1 == (bracket[index] - brackets.top())) {
                brackets.pop();
                errorIndex += 2;
            } else {
                return false;
            }
        }
        ++index;
    }
    errorIndex += brackets.size();
    return brackets.empty();
}

void printBrackets(std :: string str, int errorIndex) {
    int index = 0;
    while ('\0' != str[index]) {
        if (index == errorIndex) {
            std :: cout << str[index] << "<>";
        } else {
            std :: cout << str[index];
        }
        ++index;
    }
    std :: cout << std :: endl;
}

int main() {
    int errorIndex = 0;
    std :: string brackets = " ";
    if (true == checkBrackets(errorIndex, brackets)) {
        std :: cout << "The brackets sorted correctly. " << std :: endl;
    } else {
        std :: cout << "The brackets sorted not correct." << std :: endl;
        std :: cout << "Error starts from ";
        printBrackets(brackets, errorIndex);
    }
    return 0;
}
