#include <iostream>
#include <stack>

bool isCorrect(std :: string str) {
    int index = 0;
    char temp = str[0];
    while ('\0' != temp) {
        if ('(' != temp && ')' != temp && '[' != temp && ']' != temp &&  '{' != temp && '}' != temp && '"' != temp && '/' != temp){
            return false;
        }
        ++index;
        temp = str[index];
        return true;
    }
}

void input(std :: string& str) {
    std :: cout << "Please input bracket string to check it : ";
    std :: cin >> str;
    char temp = ' ';
    while (!std :: cin || !isCorrect(str) || 0 != str.length() % 2) {
        if (0 != str.length() % 2) {
            std :: cout << "Please input symbols in pairs. Add one to check it: " << str;
            std :: cin >> temp;
            str += temp;
        } else {
            std :: cin.clear();
            std :: cin.ignore();
            std :: cout << "Please input correct : ";
            std :: cin >> str;
        }

    }
}




bool checkBrackets(int& errorIndex, std :: string& bracket) {
    input(bracket);
    std :: stack<char> brackets;
    int index = 0;
    int diff = 0;
    char symbol = bracket[0];
    char tempSymbol = ' ';
    while ('\0' != symbol) {
        if ('(' == symbol || '[' == symbol || '{' == symbol || (('"' == symbol || '/' == symbol) && (brackets.empty() || symbol != brackets.top()))) {
            brackets.push(symbol);
        } else {
            if (0 == brackets.size()) {
                return false;
            }
            diff = symbol - brackets.top();
            if (2 == diff || 1 == diff || 0 == diff) {
                brackets.pop();
                errorIndex += 2;
            } else {
                return false;
            }
        }
        ++index;
        symbol = bracket[index];
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

