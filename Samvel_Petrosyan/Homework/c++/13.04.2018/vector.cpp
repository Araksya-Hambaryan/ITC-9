#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> year;
    year.push_back("spring");
    year.push_back("summer");
    year.push_back("autumn");
    year.push_back("winter");
    
    for(auto item : year) {
        std::cout << item << std::endl;    
    }
    
    for(auto &item : year) {
        for(int i = 0; item[i] != '\0'; i++) {
            if( 'A'> item[i] || 'z' < item[i]) {
                item.erase (item.begin() + i);
                i--;
            }
        }
    }

    for(auto item : year) {
        std::cout << item << std::endl;    
    }
    return 0;

}
