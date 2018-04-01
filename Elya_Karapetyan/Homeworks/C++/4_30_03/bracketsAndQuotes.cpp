#include <iostream>
#include <string>
#include <stack>

bool check(char firstChar, char secondChar) {
    if (('{' == firstChar && '}' == secondChar) || 
        ('(' == firstChar && ')' == secondChar) || 
        ('[' == firstChar && ']' == secondChar) || 
        ('\'' == firstChar && '\'' == secondChar) ||
        ('"' == firstChar && '"' == secondChar)) {
       
        return true;
    } else {
        return false;
    }
}

bool isValid(std::string str) {
    std::stack<char> brackets;
    int i = 0;
    int toOne = 0;
    int toTwo = 0;

    while ('\0' != str[i]) {
        if ('"' == str[i]) {
            if (0 == toTwo % 2) {
                brackets.push(str[i]);
            } else {
                if (!check(brackets.top(), str[i])) {
                    std::cout << "Index: " << i << std::endl;
                    return false;
                } else {
                   brackets.pop();
                }
            }
            ++toTwo;
        }
            
        if ('\'' == str[i]) {
            if (0 == toOne % 2) {
                brackets.push(str[i]);
            } else {
                if (!check(brackets.top(), str[i])) {
                    std::cout << "Index: " << i << std::endl;
                    return false;
                } else {
                   brackets.pop();
                }
            }
            ++toOne;
        }

        if ('{' == str[i] || '(' == str[i] || '[' == str[i]) {
            brackets.push(str[i]);
        }
        if ('}' == str[i] || ')' == str[i] || ']' == str[i]) {
            if (brackets.empty()) {
                std::cout << "Index: " << i << std::endl;
                return false;
            } else {
                if (false == check(brackets.top(), str[i])) {
                    std::cout << "Index: " << i << std::endl;
                    return false;
                } else {
                   brackets.pop();
                }
            }   
        }
        ++i;
    }

    return brackets.empty();
}

int main() {
    std::string str;
    std::cout << "Enter the string with brackets and quotes: ";
    std::cin >> str;
    if (!isValid(str)) {
        std::cout << "String is incorrect!" << std::endl;
    }
    else {
        std::cout << "String is correct!" << std::endl;
    }
    return 0;
}
