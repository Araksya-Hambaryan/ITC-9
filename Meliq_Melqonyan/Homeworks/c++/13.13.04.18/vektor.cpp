#include <iostream>
#include <vector>
#include <string>

void stugum(std::string str) {
    for(auto i = 0; i < str.size(); ++i) {
        if(str[i] < 'A' || str[i] > 'z' || (str[i] >'Z' && str[i] < 'a')) {
            str[i] = '\0';
        }
    }
    std::cout << str << std::endl;
}

int main() {
    std::string str;
    std::vector <std::string> vec;
    std::cout << "cragir@ verjacnelu hamar nermuceq exit" << '\n';
    do{ 
        std::getline(std::cin, str);
        vec.push_back(str);
    } while(str != "exit");
    std::cout << '\n';
    for (auto i = 0; i < vec.size(); i++) {
        stugum(vec[i]);
    }
    return 0;
}
	
	
	
