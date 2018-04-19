#include <iostream>
#include <fstream>

bool isName(std :: string str) {
    return str[0] >= 'A' && str[0] <= 'Z';
}

void input(std :: string& str) {
    std :: cout << "Input Poxos Petros Martiros ";
    std :: getline(std :: cin, str);
}

bool Date(std :: string str) {
    std :: ifstream file;
    std :: string row = "";
    file.open("./data.txt");
    
    if (!file) {
        std :: cerr << "file data.txt";
        return 0;
    } 
    bool flag = 0;
    if (isName(str)) {
        while (file >> row) {
            if (row == str) {
                flag = 1;
                for (int i = 0; i < 2; ++i) {
                    file >> row;
                    std :: cout << row << " ";
                }
                std :: cout << std :: endl;
            }
        }
        file.close();
        return flag;
    } else {
        std :: string date = "";
        std :: string name = "";
        while (file >> row) {
            date = "";
            name = row;
            file >> row;
            date = date + row + ' ';
            file >> row;
            date+= row;
            if (date == str) {
                flag = 1;
                std :: cout << name << std :: endl;
            }
        }
        file.close();
        return flag;
    }
    file.close();
    return 0;
}

int main() {
    std :: string str = "";
    input(str);
    if (!Date(str)) {
        std :: cout << "ERROR \n";
    }
    return 0;
}
