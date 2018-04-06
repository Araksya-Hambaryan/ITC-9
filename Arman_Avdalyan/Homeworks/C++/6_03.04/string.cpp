#include <iostream>

int inputVariant();

void variant1(std :: string& str) {
    char ch = ' ';
    int count = 0;
    std :: cin >> ch;
    for (int i = 0; str[i] != '\0'; ++i){
        if(str[i] == ch) {
            ++count;
        }
    }
    std :: cout << "Count of ' " << ch << " ' symbol = " << count << std :: endl;
}

void variant2(std :: string& str, bool& flag) {
    flag = 0;
    char ch1 = ' ';
    char ch2 = ' ';
    std :: cin >> ch1 >> ch2;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch1) {
            str[i] = ch2;
            flag = 1;
        }
    }
    if (!flag) {
        std :: cout << "There is not " << ch1 << " symbol to replace.\n\n";
    }
}

void variant3(std :: string& str, bool& flag) {
    int j = 0;
    char ch1 = ' ';
    flag = 0;
    std :: cin >> ch1;
    for (int i = 0; str[i] != '\0'; ) {
        if (str[i] == ch1) {
            for(j = i; str[j + 1] != '\0'; ++j) {
                str[j] = str[j + 1];
            }
            str[j] = ' ';
            flag = 1;
        }
        if (1 != flag) {
            ++i;
        }
        flag = 0;
    }
    if (!flag) {
        std :: cout << "There is not " << ch1 << " symbol to remove.\n\n";
    }
}

void make(std :: string& str) {
    int var = 0;
    bool flag = 0;
    char temp = ' ';
    while (var != 4) {
        var = inputVariant();
        if(0 == str.length()) {
            std :: cout << "You remove the whole string. \n";
            return;
        }
        switch(var) {
            case 1:
                variant1(str);
                break;
            case 2:
                variant2(str, flag);
                break;
            case 3:
                variant3(str, flag);
                break;
            default:
                std :: cout << "Please input again.\n\n";
        }
        std :: cout << str << std :: endl;
    }
    std :: cout << "Good luck.\n\n";
}

void input(std :: string& str) {
    std :: cout << "Input string ";
    std :: getline(std :: cin, str);
    std :: cout << str;
}

int inputVariant() {
    int variant = '0';
    std :: cout << "\n\nChoose one of this actions\n 1 - Return count of elements\n 2 - replace character\n 3 - remove element \n 4 - exit\n\n ";
    std :: cin >> variant;
    if (!std :: cin || variant < 1 || variant > 4) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "\nPlease choose one of actions : ";
        std :: cin >> variant;
    }
    return variant;
}

int main() {
    std :: string str;
    input(str);
    make(str);
    return 0;
}
