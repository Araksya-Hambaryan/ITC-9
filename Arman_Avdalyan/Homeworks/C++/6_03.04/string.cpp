#include <iostream>

int inputVariant();

void variant1(std :: string& str, int& i) {
    char ch = ' ';
    int count = 0;
    i = 0;
    std :: cin >> ch;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            ++count;
        }
        ++i;
    }
    std :: cout << "Count of ' " << ch << " ' symbol = " << count << std :: endl;
}

void variant2(std :: string& str, int& i, bool& flag) {
    flag = 0;
    char ch1 = ' ';
    char ch2 = ' ';
    i = 0;
    std :: cin >> ch1 >> ch2;
    while (str[i] != '\0') {
        if (str[i] == ch1) {
            str[i] = ch2;
            flag = 1;
        }
        ++i;
    }
    if (!flag) {
        std :: cout << "There is not " << ch1 << " symbol to replace.\n\n";
    }
}

void variant3(std :: string& str, int& i, bool& flag) {
    int j = 0;
    char ch1 = ' ';
    i = 0;
    flag = 0;
    std :: cin >> ch1;
    while (str[i] != '\0') {
        if (str[i] == ch1) {
            j = i;
            while (str[j + 1] != '\0') {
                str[j] = str[j + 1];
                ++j;
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

void make(std :: string str) {
    int var = 0;
    int i = 0;
    bool flag = 0;
    char temp = ' ';
    while (true) {
        var = inputVariant();
        if(0 == str.length()) {
            std :: cout << "You remove the whole string. \n";
            return;
        }
        switch(var) {
            case 1:
                variant1(str, i);
                break;
            case 2:
                variant2(str, i, flag);
                break;
            case 3:
                variant3(str, i, flag);
                break;
            case 4:
                std :: cout << "Good luck.\n\n";
                return;
            default:
                std :: cout << "Please input again.\n\n";
        }
        std :: cout << str << std :: endl;
    }
}

void input(std :: string& str) {
    std :: cout << "Input string ";
    std :: getline(std :: cin, str);
    std :: cout << str;
}

int inputVariant() {
    int variant = 0;
    std :: cout << "\n\nChoose one of this actions\n 1 - Return count of elements\n 2 - replace character\n 3 - remove element \n 4 - exit\n\n ";
    std :: cin >> variant;
    while (!std :: cin || variant < 1 || variant > 4) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "\nPlease choose one of actions : ";
        std :: cin >> variant;
    }
    return variant;
}

int main() {
    std :: string str = " ";
    input(str);
    make(str);
    return 0;
}
