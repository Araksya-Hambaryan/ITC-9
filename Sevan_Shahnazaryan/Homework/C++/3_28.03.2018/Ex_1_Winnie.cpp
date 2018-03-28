#include <iostream>
#include <string>
#include <cstdlib>

int reverse_num(int num) {
    int rev_num = 0, dig;
    while (num != 0) {
        dig = num % 10;
        rev_num = rev_num * 10 + dig;
        num /= 10;
    }
    return rev_num;
}

int check_date(int year, int month, int day) {
    
   if ((month < 7 && month > 0 && month % 2 == 0 && day > 30) || (month > 7 && month < 12 && month % 2 == 0 && day > 31) || ((year % 400 != 0 ) && (year % 4 != 0 && day > 28))) { 
        return 0;
    }
    if (year <= 1921 && month <= 8 && day < 21) {
        return 1;
    }
    else {
    return 2;
    } 
}

int main() {
    int year, w_month, w_day, u_day, u_month;
    std::string date, date_copy;
    std::cout << "Enter the date of birthday" << std::endl;
    std::cin >> year >> date;
    if (date.length() != 5) {
        std::cout << "Wrong input";
        return 0;
    }
    date_copy = date;
    w_day = atoi(date.erase(2,3).c_str());
    w_month = atoi(date_copy.erase(0,3).c_str());
    if (w_day > 3 && w_day != 11) {
        std::cout << "There is no day like that" << std::endl;
        return 0;
    }
    if (0 == check_date(year, w_month, w_day)) {
        std::cout << "There is no date like that" << std::endl;
        return 0;
    }
    if (1 == check_date(year, w_month, w_day)) {
        std::cout << "Winnie born in 21.08.1921" << std::endl;
        return 0;
    }
    if (2 == check_date(year, w_month, w_day)) {
        u_month = reverse_num(w_day);
        u_day = reverse_num(w_month);
        if (0 == check_date(year, u_month, u_day)) {
            std::cout << "Aliens won't come, because this day doesn't exist \n";
            return 0;
        }
        if (w_month > u_month) {
            std::cout << "ALiens will come earlier" << std::endl;
            return 0;
        }
        if (u_month > w_month) {
            std::cout << "Aliens will be late" << std::endl;
            return 0;
        }
        if (u_month = u_day) {
            std::cout << "They will be on time" << std::endl;
            return 0;
        }
        else {
            if (w_day > u_day) {
                std::cout << "Aliens will come earlier" << std::endl;
                return 0;
            if (w_day < u_day) {
                std::cout << "Aliens will be late" << std::endl;
                return 0;
            }
        }
    }
    return 0;
    }
}

