#include <iostream>
#include <string>

int findBracket(std::string text, int i_start, int i_end) {
    for (i_start; i_start < i_end; i_start++) {
       if ('"' == text[i_start] || '{' == text[i_start] || '[' == text[i_start] || '(' == text[i_start]) {
            char bracket = text[i_start];
            return i_start;
       }
    }
    return -1;
}

int bracketCheck(std::string text, int i, int length) {
    int i_copy = i;
    char oppositeBracket = ' ';
    char bracket = text[i];
    switch (bracket) {
        case '{':
            oppositeBracket = '}';
            break;
        case '[':
            oppositeBracket = ']';
            break;
        case '(':
            oppositeBracket = ')';
            break;
        case '"':
            oppositeBracket = '"';
            break;
    }
    for (i; i < length; i++) {
        if (oppositeBracket == text[i]) {
            if (-1 != findBracket(text, i_copy+1, i)) {
                int i_start = findBracket(text, i_copy+1, i); 
               bracketCheck(text, i_start, length);
            }
            std::cout << "True" << std::endl;
            return 0;
        }
    }
    std::cout << "ERROR: Your bracket isn't closing here: " << i_copy << std::endl;
    return i;
}

int main() {
    std::string code  = " ";
    int len = 0;
    int bracketPlace = 0;
    int index = 0;
    int amount = 0;
    char bracket = ' ';
    std::cout << "Enter your code" << std::endl;
    std::cin >> code;
    len = code.length();
    if (-1 == findBracket(code, 0, len)) {
        std::cout << "There is no openning  brackets in this text" << std::endl;
        return 0;
    } else {
        bracketPlace = findBracket(code, 0, len);
        bracketCheck(code, bracketPlace, len);
    }
    return 0;
}
