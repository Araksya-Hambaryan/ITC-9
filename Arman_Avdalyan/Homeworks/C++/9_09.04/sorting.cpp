#include <iostream>

int inputSize() {
    int size = 0;
    do {
        std :: cin.clear();
        std :: cout << "Input array size(Only positive numbers) : ";
        std :: cin >> size;
    }while(!std :: cin || size <= 0);
    return size;
}

void inputArray(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        do {
            std :: cin.clear();
            std :: cin.ignore();
            std :: cout << "Input array element : ";
            std :: cin >> arr[i];
        }while(!std :: cin);
    }
}

bool inputVariant() {
    bool variant = 0;
    do {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Choose '0' (decreasing) or '1' (ascending) : ";
        std :: cin >> variant;
    }while(!std :: cin);
    return variant;
}

void swap(int& num1, int& num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int ascending(int num1, int num2) {
    return num1 < num2 ? num1 : num2;
}

int decreasing(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int* sort(int arr[], int size, int(*compare)(int, int)) {
    int* newArray = new int[size];
    int num = 0;
    for(int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }

    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size - 1 ; ++j) {
            num = compare(newArray[j], newArray[j + 1]);
            if(num == newArray[j + 1]) {
                swap(newArray[j], newArray[j + 1]);
            }
        }
    }
    return newArray;
}

void printArray(int* arr, int size) {
    std :: cout << "Sorted array -> ";
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << "  ";
    }
}

int main() {
    int size = inputSize();
    int* arr = new int[size];
    inputArray(arr, size);
    int* sortedArray;
    if(inputVariant()) {
        sortedArray = sort(arr, size, ascending);
    } else {
        sortedArray = sort(arr, size, decreasing);
    }
    printArray(sortedArray, size);
    delete[] arr;
    return 0;
}
