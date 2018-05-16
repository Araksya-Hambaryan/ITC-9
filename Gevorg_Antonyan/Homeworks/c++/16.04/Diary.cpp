#include <iostream>
#include <string>

struct Date {
public:
    std::string m_name;
    std::string m_date;
    Date();
    Date(std::string, std::string);
    void printName();    
    void printDate();
};

Date::Date() : m_name("Name")
             , m_date("01.01.2018 10:30") {};

Date::Date(std::string name, std::string date) : m_name(name)
                                               , m_date(date) {};

void Date::printDate() {
    std::cout << "Date of meeting is: " << m_date << std::endl;
};

void Date::printName() {
    std::cout << "At this time we met with: " << m_name << std::endl;
}

bool dateOrName(std::string info) {
    if (('0' <= info[0] && '9' >= info[0]) &&
        ('0' <= info[1] && '9' >= info[1]) &&
        ('0' <= info[3] && '9' >= info[3]) &&
        ('0' <= info[4] && '9' >= info[4]) &&
        ('0' <= info[6] && '9' >= info[6]) &&
        ('0' <= info[7] && '9' >= info[7]) &&
        ('0' <= info[8] && '9' >= info[8]) &&
        ('0' <= info[9] && '9' >= info[9]) &&
        ('0' <= info[11] && '9' >= info[11]) &&
        ('0' <= info[12] && '9' >= info[12]) &&
        ('0' <= info[14] && '9' >= info[14]) &&
        ('0' <= info[15] && '9' >= info[15])) {
        return true;
    } else {
        return false; 
    }
}

int main() {
    Date meet1("Bob", "10.04.2011 10:30");
    Date meet2("Anna", "11.05.2011 12:30");
    Date meet3("Anna", "20.06.2012 18:30");
    Date meet4("Bob", "30.09.2012 13:40");
    Date meet5("Anna", "23.02.2015 12:10");
    Date meet6("Anna", "18.04.2016 14:30");
    Date meet7("Bob", "22.12.2016 09:00");
    Date meet8("bob", "05.04.2017 12:00");
    Date arr[8] = {meet1, meet2, meet3, meet4, meet5, meet6, meet7, meet8};
    std::cout << "Bob, 10.04.2011 10:30" << std::endl;
    std::cout << "Anna, 11.05.2011 12:30" << std::endl; 
    std::cout << "Anna, 20.06.2012 18:30" << std::endl;
    std::cout << "Bob, 30.09.2012 13:40" << std::endl;
    std::cout << "Anna, 23.02.2015 12:10" << std::endl;
    std::cout << "Anna, 18.04.2016 14:30" << std::endl;
    std::cout << "Bob, 22.12.2016 09:00" << std::endl;
    std::cout << "bob, 05.04.2017 12:00" << std::endl;
    std::cout << "enter 'name' or date '00.00.0000 00:00' '0' for exit" << std::endl;
    std::string text;
    do {
        getline(std::cin, text);
        if (dateOrName(text)) {
            for (int i = 0; i < 8; ++i) {
                if (text == arr[i].m_date) {
                    arr[i].printName();
                } 
            }   
            std::cout << std::endl;
        } else {
            for (int i = 0; i < 8; ++i) {
                if (text == arr[i].m_name) {
                    arr[i].printDate();
                } 
            }   
            std::cout << std::endl;
        }
    } while ("0" != text);
    return 0;
}
