#include <iostream>

int compareGrow(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int compareReduction(int num1, int num2) {
    if(num1 > num2) {
       // std::cout << "-----------------------" << std::endl;
        return num2;
    } else {
        return num1;
    }
}

int * bubbleSort(int arr[], int size, int(*functionCompare)(int, int)) {
    int* sorted_array = new int[size];
    //std::cout << "HI" << std::endl;
    for(int i = 0; i < size; i ++) {
        std::cout << "HI" << std::endl; 
        for(int j = 0; j - 2 < size; j++) {
            sorted_array[j] = functionCompare(arr[j], arr[j+1]);
        }
    }
    for(int i = 0; i < size; i ++) { 
            std::cout << "arr[" << i << "]=" << sorted_array[i] << std::endl;
        
    }

    return sorted_array;
} 

int main() {
    int size;
    std::cout << "size = ";
    std:: cin >> size;
    int arr[size];
    int * firstElement = 0;
    for(int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "]=";
        std::cin >> arr[i];
    }
    char sign = ' ';
    std::cout << "For growing sort input '+'" << std::endl;
    std::cout << "For reduction sort input '-'" << std::endl;
    std::cin >> sign;
    if('+' == sign) {
        firstElement = bubbleSort(arr, size, compareGrow);
    }
    if('-' == sign) {
        firstElement = bubbleSort(arr, size, compareReduction);
    }
    std::cout << "HAHHAHAHA    " << *firstElement << std::endl;
   /* for(int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "]=" << *firstElement << std::endl;
        ++firstElement;
    }*/
    return 0;
}
