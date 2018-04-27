#include <iostream>
#include "hMap.hpp"


int main() {
    HMap myHMap;
    std::cout << "array:\t" << myHMap.array << std::endl;
    std::cout << "Print array elements" << std::endl;
    for(int i = 0; i < 10; i++) {
        std::cout << myHMap.array[i];
    }
    std::cout << std::endl;
    myHMap.add(100, "Astghik");
/*    std::cout << "HMap size:\t" << myHMap.getSize() << std::endl;
    std::cout << "Pop once" << std::endl;
    myHMap.pop();
    std::cout << "HMap size after pop:\t" << myHMap.getSize() << std::endl;
    myHMap.printHMap();
    int index = 3;
    std::cout << index << "-th element is:\t" << myHMap.getElem(index) << "\n";
    std::cout << "Insert a number at 25-th index" << std::endl;
    myHMap.insert(25, 33);
    std::cout << "Insert 33 at 3-th index"<< std::endl;
    myHMap.insert(3, 33);
    myHMap.printHMap();
    std::cout << "Erase the elemenet at 2-th index"<< std::endl;
    myHMap.erase(2);
    std::cout << "HMap size after erase:\t" << myHMap.getSize() << std::endl;
    myHMap.printHMap();


*/

    return 0;
} 
