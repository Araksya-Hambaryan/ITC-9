#include <iostream>
#include <string>

void input(std :: string& str) {
    std :: cout << "Enter the string : ";
    std :: cin >> str;
    while (!std :: cin) {
            std :: cin.clear();
            std :: cin.ignore();
            std :: cout << "Please input correct : ";
            std :: cin >> str;
    }
} 

int countOfCharacter(std :: string str, char a) {
    int count = 0;
    for (int counter = 0; counter < str.length(); ++counter) {
        if (a == str[counter]) {
            ++count;
        }
    }
    return count;
}

void replace(std :: string& str, char firstSymbol, char secondSymbol) {
    bool check = false;
    for (int counter = 0; counter < str.length(); ++counter) {
        if (firstSymbol == str[counter]) {
            str[counter] = secondSymbol;
            check = true;
        }
    }
    if (!check) {
        std :: cout << "The string doesn't contain " << firstSymbol << std :: endl;
        return;
    }
}

void remove(std :: string& str, char m) {
    bool check = false;
    std :: string newStr;
    for (int counter = 0; counter < str.length(); ++counter) {
        if (m != str[counter]) {
            newStr += str[counter];
            check = true;
        }
    }
    str = newStr;
    if (!check) {
        std :: cout << "The string doesn't contain " << m << std :: endl;
        return;
    } 
}

void regulator(std :: string str, char firstSymbol, char secondSymbol, int functionNumber, bool& check) {
    int count = 0; 
    switch(functionNumber) {
        case 1:
            count = countOfCharacter(str, firstSymbol);
            std :: cout << "\n--------------------------------------";
            std :: cout << "\nCount of " << firstSymbol << " is " << count << std::endl;  
            std :: cout << "--------------------------------------";
            break;
        case 2:
            replace(str, firstSymbol, secondSymbol);            
            std::cout << "\n--------------------------------------";
            std::cout << "\nString is: " << str << std::endl;
            std::cout << "--------------------------------------";
            break;
        case 3:           
            remove(str, firstSymbol);
            std::cout << "\n--------------------------------------";
            std::cout << "\nString is: " << str << std::endl;
            std::cout << "--------------------------------------";
            break;
        case 4:
            check = false;
            break;
        default:
            std :: cout << "Invalid input!" << std :: endl;
    }
}


int main() {
    std :: string str = " ";
    bool check = true;
    input(str);
    std :: cout << " 1.Count of inputed character\n 2.Replase any character\n 3.Remove any characteri\n 4.Exit";
    std :: cout << "\n-----------------------------------------" << std :: endl;
    do {
        std :: cout << "\n For first function 1 <character>\n For second function 2 <character> <character>\n For third function 3 <caracter>\n For Exit press 4" << std :: endl;
        std :: cout << "Enter: ";
        std :: string s;
        getline(std :: cin, s);

        int chooseFunc = (int)(s[0]) - 48;
        char firstSymbol = s[2];
        char secondSymbol = s[4];
        int count = 0;
        regulator(str, firstSymbol, secondSymbol, chooseFunc, check);
    } while (check);

    return 0;
}

