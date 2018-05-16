#include <iostream>
#include <string>
#include <stack>

bool check(char open, char close) {
    if (('(' == open && ')' == close) || ('{' == open && '}' == close) || ('[' == open && ']' == close)) {
        return true;
    } else {
        return false;
    }
}

bool trueOrFalse(std::string line) {
    std::stack<char> mystack;
    int i = 0;
    while ('\0' != line[i]) {
        if ('(' == line[i] || '{' == line[i] || '[' == line[i]) {
            mystack.push(line[i]);
        }
        if (')' == line[i] || '}' == line[i] || ']' == line[i]) {
            if (mystack.empty()) {
                return false;
            } else {
                if (false == check(mystack.top(), line[i])) {
                    return false;
                } else {
                   mystack.pop();
                }
            }   
        }
        ++i;
    }
    if (mystack.empty()) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string str;
    std::cout<<"Mutqagrel teqst@ -> ";
    std::cin>>str;
    if (true == trueOrFalse(str)) {
        std::cout<<"Bolor pakagcer@ chisht en!"<<std::endl;
    } else {
        std::cout<<"Pakagcer@ sxal en!"<<std::endl;
    }
    return 0;
}
