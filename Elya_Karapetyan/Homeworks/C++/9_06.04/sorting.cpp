#include <iostream>

void initArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "array[" << i << "]= ";
        std::cin >> array[i]; 
    }
}

void printArray(int array[], int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int compare1(const void* firstNumber, const void* secondNumber) {
    return (*(int*)firstNumber - *(int*)secondNumber);
}

int compare2(const void* firstNumber, const void* secondNumber) {
    return (*(int*)secondNumber - *(int*)firstNumber);
}

void bubbleSort(int arr[], int size, int(*functionPtr)(const void*, const void*)) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (0 < functionPtr(&arr[j], &arr[j+1])) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void validNumber(int& number) {
    while (std::cin.fail()) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

void inputData(int& size, char& chooseOrder) {
    do {
        std::cout << "Enter the size of the array: ";
        std::cin >> size;
        validNumber(size);
    } while (0 >= size);
    do {
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Enter < a > for ascending order,  < d > for decrease order: ";
        std::cin >> chooseOrder;
    } while ('a' != chooseOrder && 'd' != chooseOrder);
}

int main() {
    int size = 0;
    char chooseOrder;
    int array[size];
    inputData(size, chooseOrder);
    initArray(array, size);
    printArray(array, size);
    if ('a' == chooseOrder) {
        bubbleSort(array, size, compare1);
    } else {
        bubbleSort(array, size, compare2);
    };
    printArray(array, size);
    return 0;
}
