#include <iostream>
#include <fstream>

bool isName(std :: string str) {
    return str[0] >= 'A' && str[0] <= 'Z';
}

void inputDate(std :: string& str) {
    std :: cout << "Input name or date (like this <Name> or < dd/mm/yy xx:xx >) : ";
    std :: getline(std :: cin, str);
}

bool printDate(std :: string str) {
    std :: ifstream file;
    std :: string row = "";
    file.open("./data.txt");
    
    if (!file) {
        std :: cerr << "Unable to open file data.txt";
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
    inputDate(str);
    if (!printDate(str)) {
        std :: cout << "Nothing found. \n";
    }
    return 0;
}
