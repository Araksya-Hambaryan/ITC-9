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

void getListNameAndDate(std::string* nameList, std::string* dateList) {
    std::fstream myFile("data.txt");
    std::string name;
    std::string date;
    int i = 0;
    while( myFile >> name >> date) {
        nameList[i] = name;
        dateList[i] = date;
        ++i;
    }
}

bool isName(std::string inputedData) {
    return (inputedData[0] >= 'A' && inputedData[0] <= 'Z');
}

void findDateOrName(std::string inputedData, std::string* nameList, std::string* dateList, int countOfLine) {
    bool isConected = false;
    if (isName(inputedData)) {
        for (int i = 0; i < countOfLine; ++i) {
            if (inputedData == nameList[i]) {
                isConected = true;
                std::cout << "Meeting day: " << dateList[i] << std::endl;
            }
        }
        if (!isConected) {
            std::cout << "File does not contine that name!" << std::endl;
        }
        return;
    } else {
        for (int i = 0; i < countOfLine; ++i) {
            if (inputedData == dateList[i]) {
                isConected = true;
                std::cout << "Meeting with: " << nameList[i] << std::endl;
            }
        }
        if (!isConected) {
            std::cout << "File does not contine that date!" << std::endl;
        }
        return;
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
    
    std::string* nameList = new std::string[countOfLine];
    std::string* dateList = new std::string[countOfLine];
    getListNameAndDate(nameList, dateList);
    
    findDateOrName(inputedData, nameList, dateList, countOfLine);
    return 0;
}
