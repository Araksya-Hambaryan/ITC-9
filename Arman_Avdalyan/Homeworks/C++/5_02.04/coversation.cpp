#include <iostream>

int getCode(char arr[][255]) {
    std :: string temp = " ";
    std :: getline(std :: cin, temp);
    for (int i = 0; i < 5; ++i) {
        if (temp == arr[i]) {
            return i+1;
        }
    }
    return -1;
}

void start() {
    std :: string name = "";
    std :: cout << "Input your name to start : ";
    std :: cin >> name;
    std :: cin.clear();
    std :: cin.ignore();
    char arr[5][255] = {{"Hello"}, 
        {"How are you"}, 
        {"Did you do your homeworks"}, 
        {"And why you do not do"}, 
        {"Bye"}};

    std :: cout << "Very good... You can start conversation " << name <<  " You can say\n 1. Hello \n 2. How are you \n 3. Did you do your homeworks\n 4. Bye\n 5. exit \n";

    while(true) {
        std :: cout << name << " - ";
        switch(getCode(arr)) {
            case 1:
                std :: cout << "\tHi." << std :: endl;
                break;
            case 2: 
                std :: cout << "\tI am fine thank you, and you." << std :: endl;
                break;
            case 3:
                std :: cout << "\tUnfortunately don't do yet." << std :: endl;
                break;
            case 4:
                std :: cout << "\tI haven't got many time." << std :: endl;
                break;
            case 5:
                std :: cout << "\tBye." << std :: endl;
                return;
                break;
            default:
                std :: cout << "\tSorry but I don't understand you." << std :: endl;
                break;
        }
    }
}

int main() {
    start();
    return 0;
}
