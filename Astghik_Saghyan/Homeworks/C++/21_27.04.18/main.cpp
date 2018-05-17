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
    myHMap.add(0, "Lyudvig");
    myHMap.add(99, "Van");
    myHMap.add(19, "Bethoven");
    std::cout << "HMap size:\t" << myHMap.getSize() << std::endl;
    myHMap.printHMap();
    myHMap.remove(50);    
    myHMap.remove(56);    
    myHMap.remove(51);    
    myHMap.remove(52);    
    myHMap.printHMap();
    myHMap.update(99, "Bethoven");    
    myHMap.update(19, "Van");    
    myHMap.printHMap();
    return 0;
} 
