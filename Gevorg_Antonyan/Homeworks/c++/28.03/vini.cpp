#include <iostream>

int revers(int  dd) {
    int redd = 0;
    if (10 <= dd) {
        redd = (dd % 10) * 10 + dd / 10;
        return redd;
    } else {
        redd = 10 * dd;
        return redd;
    }
}

int main() {
    std::cout << "vinnii dd, mm, yy" << std::endl;
    int dd = 0;
    int mm = 0;
    int yy = 0;
    int redd;
    int remm;
    bool k=0;
    std::cin >> dd >> mm >> yy;
    if (10 == dd || 20 == dd || 30 == dd || 1 == dd || 11 == dd || 21 == dd) {
        if (1 == mm || 2 == mm  || 3 == mm || 10 == mm || 11 == mm || 12 == mm) {
            k = 1;
        } else {
            k = 0;
            }
    }
    redd = revers(dd);
    remm = revers(mm);
    if (1 == k) {
        std::cout << "yes, day is" << "-" <<  remm << "."<<  redd 
                  << "." << yy << std::endl;
    } else{
        std::cout << "No!" << std::endl;
    }
    return 0;
}


