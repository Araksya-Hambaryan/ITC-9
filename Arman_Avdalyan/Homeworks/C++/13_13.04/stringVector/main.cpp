#include "vector.h"

void removeCharacters(std :: string& str) {
    int j = 0;
    char temp = ' ';
    for (int i = 0; '\0' != str[i]; ++i) {
        temp = str[i];
        if (!((temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z'))) {
            for (j = i; '\0' != str[j + 1]; ++j) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
            --i;
        }
    }
}

int main() {
    Vector v;
    std :: string str = " ";
    std :: cout << "Input strings (press enter to exit) : ";
    while (!str.empty()) {
        std :: getline(std :: cin, str);
        removeCharacters(str);
        if (str.empty()) {
            break;
        }
        v.add(str);
    }

    std :: cout << "Vector size is "<< v.size() << std :: endl;
    std :: cout << "Vector is ";
    v.print();
    std :: cout << std :: endl;
    return 0;
}
