#include <iostream>
#include <string>
#include <stack>

bool correspondence(char openedOne, char closedOne) {
    if (('{' == openedOne && '}' == closedOne) ||    ('(' == openedOne && ')' == closedOne) || 
        ('[' == openedOne && ']' == closedOne) ||  ('\'' == openedOne && '\'' == closedOne) ||
        ('"' == openedOne && '"' == closedOne)) {
       

        return true;

    } else {

        return false;

    }

}

bool check(std::string input) {
    std::stack<char> bracket;
    int index = 0;
    int one;
    int two;

    while ('\0' != input[index]) {
        if ('"' == input[index]) {
            if (0 == two % 2) {
                bracket.push(input[index]);
            } else {
                if (!correspondence(bracket.top(), input[index])) {
                    return false;
                } else {
                   bracket.pop();
                }
            }
            ++two;
        }
            
        if ('\'' == input[index]) {
            if (0 == one % 2) {
                bracket.push(input[index]);
            } else {
                if (!correspondence(bracket.top(), input[index])) {
                    return false;
                } else {
                   bracket.pop();
                }
            }
            ++one;
        }

        if ('{' == input[index] || '(' == input[index] || '[' == input[index]) {
            bracket.push(input[index]);
        }
        if ('}' == input[index] || ')' == input[index] || ']' == input[index]) {
            if (bracket.empty()) {
                return false;
            } else {
                if (false == correspondence(bracket.top(), input[index])) {
                    return false;
                } else {
                   bracket.pop();
                }
            }   
        }
        ++index;
    }

    return bracket.empty();
}

int main() {
    std::string input;
    std::cout << "Enter a  string : ";
    std::cin >> input;
    if (!check(input)) {
        std::cout << "Incorrect!" << std::endl;
    }
    else {
        std::cout << "Correct!" << std::endl;
    }
    return 0;
}
