#include <iostream>
#include <fstream>

bool ifContainsNumber(const std::string &c)
{
    if (c.find('0') != std::string::npos ||
        c.find('1') != std::string::npos ||
        c.find('2') != std::string::npos ||
        c.find('3') != std::string::npos ||
        c.find('4') != std::string::npos ||
        c.find('5') != std::string::npos ||
        c.find('6') != std::string::npos ||
        c.find('7') != std::string::npos ||
        c.find('8') != std::string::npos ||
        c.find('9') != std::string::npos)
    {
        return true;
    }
    return false;
}

void isIt() {
    std::string input  = " ";
    std::string line = " ";
    char dig = ' ';
    bool flag = false;
    do {
        getline(std::cin, input);
        std::ifstream file("meetings.txt");
        if(file.is_open()) {
            while(getline(file, line)) {
                int i = input.length();
                if(line.find(input) != std::string::npos && ((ifContainsNumber(input) && line[line.length() - i - 1] == ' ' && i != 5)
                   || !ifContainsNumber(input) && line[input.length()] == ' ')){
                    if(ifContainsNumber(input)) {
                        i = 0;
                        while(line[i] != ' ') {
                            std::cout << line[i];
                            ++i;
                        }
                        std::cout << std::endl;
                        flag = true;
                        continue;
                    } else {
                        for(int i = input.length() + 1; i < line.length(); ++i) {
                            std::cout << line[i];
                        }
                        std::cout << std::endl;
                        flag = true;
                        continue;
                    }
                }
            }
            if("OK" != input && false == flag) {
                std::cout << "That data doesn't exist in our database" << std::endl;
                flag = false;
            }
            file.close();
        }
    } while(input != "OK");
}

int main() {
    std::cout << "Input \"OK\" to finish the programm" << std::endl;
    std::cout << "Enter the name or the time when he/she came" << std::endl;
    isIt();
    return 0;
}
