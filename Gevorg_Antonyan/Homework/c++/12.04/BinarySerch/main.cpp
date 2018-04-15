#include "BinarySerch.hpp" 

int main () {
    int arr [10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    std::cout << "array is : ";
    for(int i = 0; i < 10; ++i) {
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl << "enter serch number" << std::endl;
    int begin = 0;
    int end = 9;
    int num = 0;
    std::cin >> num;
    validnumber(num);
    serch(arr, num, begin, end);
    return 0;
}
    
