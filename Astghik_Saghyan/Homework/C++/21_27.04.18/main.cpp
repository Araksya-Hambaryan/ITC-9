#include <iostream>
#include "hMap.hpp"


int main() {
    HMap myHMap;
    myHMap.add(100, "Astghik");
    std::cout << "HMap size:\t" << myHMap.getSize() << std::endl;
    myHMap.printHMap();
    myHMap.add(50, "Astghik");
    myHMap.add(51, "Saghyan");
    myHMap.add(52, "Yerem");
    myHMap.add(99, "Lyudvig");
    myHMap.add(0, "Van");
    myHMap.add(19, "Bethoven");
    std::cout << "HMap size:\t" << myHMap.getSize() << std::endl;
    myHMap.printHMap();
    myHMap.remove(52);    
//    myHMap.remove(51);    
//    myHMap.remove(50);    
    myHMap.printHMap();
    return 0;
} 
