
#include <iostream>
#include <string>
#include <vector>

void erase (std::vector<std::string>& myVector) {
   for (auto str : myVector) {
       if ("quit" == str) {
           break;
       }
       for (int i = 0; i < str.size(); i++) {
            if(str[i] < 'A' || str[i] > 'z' || (str[i] >'Z' && str[i] < 'a')) {
                str[i] = '\0';
            }
   }
    std::cout << str << std::endl;
}
}
int main()
{
    std::string str="NULL";
    std::vector<std::string> myVector;
    std::cout << "Input string and press 'enter' to input another one." << "\n"
    "At the end please press 'enter' and input 'quit' to erase all non latin characters. " << std::endl;
    do {
        std::getline(std::cin, str);
        myVector.push_back(str);
    }while ("quit" != str);
    erase (myVector);
    return 0;
}