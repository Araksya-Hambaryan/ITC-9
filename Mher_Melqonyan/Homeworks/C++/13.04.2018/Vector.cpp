#include <iostream>
#include <vector>
#include <string>
int main() {
    std::vector<std::string> mainVector;
    std::string inStr;
    std::cout << "Input Your Text. For End Of Input Just Input / \n";
    while(inStr != "/") { 
        std::getline (std::cin, inStr);
        mainVector.push_back(inStr);
    }
    mainVector.pop_back();
    std::cout << "Text Will Be \n";
    for (auto it = mainVector.begin() ; it != mainVector.end(); ++it){
        inStr = *it;
        for(int i = 0; i < inStr.length(); ++i){
            std::string outStr = "";
            if(inStr[i]<='Z' && inStr[i]>='A' || inStr[i]<='z' && inStr[i]>='a' ){
                outStr += inStr[i];
            }
            std::cout << outStr;
        }

        std::cout << '\n';
    }
    return 0;
}
