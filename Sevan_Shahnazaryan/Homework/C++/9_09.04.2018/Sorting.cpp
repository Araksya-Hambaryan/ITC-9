#include <iostream>

void swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int compareGrow(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int compareReduction(int num1, int num2) {
    if(num1 > num2) {
        return num2;
    } else {
        return num1;
    }
}

int * bubbleSort(int arr[], int size, int(*functionCompare)(int, int)) {
    int* sorted_array = new int[size];
    for(int i = 0; i < size; i++) {
        sorted_array[i] = arr[i];
    }
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1 ; j++) {
           int theNum = functionCompare(sorted_array[j], sorted_array[j+1]);
           if(sorted_array[j+1] == theNum) {
               swap(sorted_array[j], sorted_array[j+1]);
           }
        }
    }
    return sorted_array;
} 

int main() {
    int size;
    std::cout << "size = ";
    std:: cin >> size;
    if(size <= 0) {
        std::cout << "ERROR: Negative input" << std::endl;
        return 0;
    }
    int* arr = new int[size];
    int * firstElement = 0;
    for(int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "]=";
        std::cin >> arr[i];
    }
    char sign = ' ';
    std::cout << "For growing sort input '+'" << std::endl;
    std::cout << "For reduction sort input '-'" << std::endl;
    std::cin >> sign;
    if('-' == sign) {
        firstElement = bubbleSort(arr, size, compareGrow);
    }
    if('+' == sign) {
        firstElement = bubbleSort(arr, size, compareReduction);
    } else {
        std::cout << "ERROR: Wrong input. Follow the instruction" << std::endl;
        return 0;
    } 
    for(int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "]=" << *firstElement << std::endl;
        ++firstElement;
    }
    return 0;
}
