#include <iostream>
#include <fstream>

void printContentsOfFile(int& countOfLine) {
    std::string line;
    std::ifstream myFile("data.txt");
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            std::cout << line << std::endl;
            ++countOfLine;
        }
    myFile.close();
    } else {
        std::cout << "Unable to open file!" << std::endl;
    }
}

bool isName(std::string inputedData) {
    return (inputedData[0] >= 'A' && inputedData[0] <= 'Z');
}

void getNameOrDate(std::string inputedData) {
    std::fstream myFile("data.txt");
    std::string name;
    std::string date;
    std::string hour;
    bool isContains = false;
    if (isName(inputedData)) {
        while (myFile >> name >> date) {
            if (inputedData == name) {
                isContains = true;
                std::cout << "Meeting date: " << date << std::endl;
            }
       }
    } else {
        while (myFile >> name >> date) {
            if (inputedData == date) {
                isContains = true;
                std::cout << "Meeting with: " << name << std::endl;
            }
       }
    }
    if (!isContains) {
        std::cout << "File does not contain that data!" << std::endl;
    }
}

int main() {
    int countOfLine = 0;
    std::cout << "=====The contents of the file=====\n" << std::endl;
    printContentsOfFile(countOfLine);
    std::string inputedData;
    std::cout << "\nEnter the name or the date: ";
    getline(std::cin, inputedData);

    std::string line;
    
    getListNameAndDate(inputedData);
    
    return 0;
}
