#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> weekDays;
    weekDays.push_back("Sund1ay");
    weekDays.push_back("Monday");
    weekDays.push_back("Tue58sday");
    weekDays.push_back("Wed&nesday");
    weekDays.push_back("Turs*day");
    weekDays.push_back("Fr##iday");
    weekDays.push_back("Sa<turday");
    
    for(auto item : weekDays) {
        std::cout << item << std::endl;    
    }
    
    for(auto &item : weekDays) {
        for(int i = 0; item[i] != '\0'; i++) {
            if( 'A'> item[i] || 'z' < item[i]) {
                item.erase (item.begin() + i);
                i--;
            }
        }
    }

    for(auto item : weekDays) {
        std::cout << item << std::endl;    
    }
    return 0;

}
