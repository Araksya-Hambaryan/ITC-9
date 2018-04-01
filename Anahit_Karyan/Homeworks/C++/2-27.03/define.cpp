#include <iostream>

#define zangvaciElementneriMutqagrum \
    int size = 0; \
    std::cout << "Nermucel zangvaci chap "; \
    std::cin >> size; \
    int array[size]; \
    std::cout << "Nermucel zangvaci elementnern "; \
    for (int i = 0; i < size; ++i) { \
        std::cin >> array[i]; \
     };
 #define mecaguynElement \
    int max = array[0]; \
    for (int i = 1; i < size; ++i) { \
        if (max < array[i]) { \
            max = array[i]; } \
     };

#define mecaguynElementiTpum \
     std::cout << "Max= " << max << std::endl; 

int main() {
    zangvaciElementneriMutqagrum
    mecaguynElement
    mecaguynElementiTpum
   
    return 0;
}


                               
