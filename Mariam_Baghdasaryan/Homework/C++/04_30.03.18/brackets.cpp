#include <iostream>
#include <stack>
#include <cstring>

bool isCorrect(std :: string str) {
    int index = 0;
    char temp = str[0];
    while ('\0' != temp) {
        if ('(' != temp && ')' != temp && '[' != temp && ']' != temp && '{' != temp && '}' != temp && '"' != temp) {
            return false;
        } 
        ++index;
        temp = str[index];
    }
    return true;
}

void input(std :: string& str) {
    std :: cout << "Enter bracket string : ";
    std :: cin >> str;
    char temp = ' ';
    while (!std :: cin || !isCorrect(str) || 0 != str.length() % 2) {
        if (0 != str.length() % 2) {
            std :: cout << "Please input symbols in pairs : ";
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

bool check(char firstChar, char secondChar) {
    if (('(' == firstChar && ')' == secondChar) ||
        ('[' == firstChar && ']' == secondChar) ||
        ('{' == firstChar && '}' == secondChar) ||
        ('"' == firstChar && '"' == secondChar)) {
        return true;
    } else {
        return false;
    }
}

bool isValid(std :: string str) {
    int counter;
    int count = 0;
    std :: stack<char> tempStack;
    for (counter = 0; counter < str.length(); ++counter) {
        if ('(' == str[counter] || '[' == str[counter] || '{' == str[counter]) {
            tempStack.push(str[counter]);
        } else if (')' == str[counter] || ']' == str[counter] || '}' == str[counter]) {
            if (tempStack.empty() || !check(tempStack.top(), str[counter])) {
                return false;                         
            } else {
                tempStack.pop();
            }
        }
        if ('"' == str[counter]) {
            count++;
        }
    } 
    if (0 != count % 2) {
        return false;
    }
    return tempStack.empty() ? true : false;
}

int main() {
    std :: string expression;
    input(expression);

    if (isValid(expression)) {
        std :: cout << "The expression is balanced." << std :: endl;
    } else {
        std :: cout << "The expression is not balanced" << std :: endl;
    }

    return 0;
}


















































































