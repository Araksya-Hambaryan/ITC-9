#include <iostream>
int main() {
    std::cout << "vinnii dd, mm, yy" << std::endl;
    int dd = 0;
    int mm = 0;
    int yy = 0;
    int redd;
    int remm;
    bool k=0;
    std::cin >> dd >> mm >> yy;
    if (10 == dd or 20 == dd or 30 == dd or 1 == dd or 11 == dd or 21 == dd) {
        if (1 == mm or 2 == mm  or 3 == mm or 10 == mm or 11 == mm or 12 == mm){
            k = 1;
            }else{
            k = 0;
        }
    }
    if ( 20 == dd and 03 == mm) {
        k=0;
    } 
    if (10 == dd) {
        redd = 01;
    }
    if (20 == dd) {
        redd = 02;
    }
    if (30 == dd) {
        redd = 03;
    }
    if (1 == dd) {
        redd =10;
    }
    if (21 == dd) {
        redd = 12;
    } 
    if (11 == dd) {
        redd = 11;
    }
    if (1 == mm) {
        remm = 10;
    }
    if (2 == mm) {
        remm = 20;
    }
    if (3 == mm) {
        remm = 30;
    }
    if (10 == mm) {
        remm =01;
    }
    if (11 == mm) {
        remm = 11;
    } 
    if (12 == mm) {
        remm = 21;
    }
    if (1 == k) {
        std::cout << "yes, day is" << "-" <<  remm << "."<<  redd << "." <<yy;
    }else{
        std::cout << "No!" ;
    }
    return 0;
}


