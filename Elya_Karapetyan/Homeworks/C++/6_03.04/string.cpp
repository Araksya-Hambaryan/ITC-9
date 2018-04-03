#include <iostream>
#include <string>

int countOfInputedCharacter(std::string str, char inputedCharacter) {
    int length = str.length();
    int count = 0;
    for (int i = 0; i < length; ++i) {
        if (inputedCharacter == str[i]) {
            ++count;
        }
    }
    return count;
}

void replace(std::string& str, char oldCharacter, char newCharacter) {
    int length = str.length();
    int check = false;
    for (int i = 0; i < length; ++i) {
        if (str[i] == oldCharacter) {
            str[i] = newCharacter;
            check = true;
        } 
    } 
    if (!check) {
        std::cout << ":::::The string doesn't contain " << oldCharacter << std::endl;
        return;
    }
}

void removeCharacter(std::string& str, char deletedCharacter) {
    int length = str.length();
    bool check = false;
    std::string tmp;
    for (int i = 0; i < length; ++i) {
        if (str[i] != deletedCharacter) {
                tmp += str[i];
                check = true;
            }
    }
    str = tmp;
    if (!check) {
        std::cout << ":::::The string doesn't contain " << deletedCharacter << std::endl;
    return;
    }
}

void regulator(std::string& str, char firstCharacter, char secondCharacter, 
       int functionNumber, bool& check) {
   
    int count = 0; 
    switch(functionNumber) {
        case 1:
            count = countOfInputedCharacter(str, firstCharacter);
            std::cout << "\n--------------------------------------";
            std::cout << "\nCount of <" << firstCharacter 
                      << "> is " << count << std::endl;  
            std::cout << "--------------------------------------";
        break;
        case 2:
            replace(str, firstCharacter, secondCharacter);
            std::cout << "\n--------------------------------------";
            std::cout << "\nString is: " << str << std::endl;
            std::cout << "--------------------------------------";
        break;
        case 3:
            removeCharacter(str, firstCharacter);
            std::cout << "\n--------------------------------------";
            std::cout << "\nString is: " << str << std::endl;
            std::cout << "--------------------------------------";
        break;
        case 4:
            check = false;
            break;
        default:
            std::cout << "Invalid input!" << std::endl;
    }
}


int main() {

    std::string str;
    bool check = true;
    std::cout << "Entr the string: ";
    getline(std::cin, str);
    std::cout << "----------Function----------" << std::endl;
    std::cout << "1. Count of inputed character\n2. Replase any character\n3. Remove any characteri\n4. Exit";
    std::cout << "\n-----------------------------------------" << std::endl;
    std::cout << "To see the result of the function, enter the form as follows:";
    do {
        std::cout << "\n> For first function 1 <character>\n> For second function 2 <character> <character>\n> For third function 3 <caracter>\n> For Exit press 4" << std::endl;
        std::cout << "Enter: ";
        std::string s;
        getline(std::cin, s);

        int chooseFunc = (int)(s[0]) - 48;
        char firstCharacter = s[2];
        char secondCharacter = s[4];
        int count = 0;
        regulator(str, firstCharacter, secondCharacter, chooseFunc, check);
    } while(check);
    return 0;
}
