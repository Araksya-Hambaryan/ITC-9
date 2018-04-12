#include <iostream>

int binarySearch(int* array, int left, int rigth, int number) {
    if (rigth >= left) {
        int mid = left + (rigth - left) / 2;
        if (array[mid] == number) {
            return mid;
        }
        if (array[mid] > number) {
            return binarySearch(array, left, mid -1, number);
        }
        return binarySearch(array, mid + 1, rigth, number);
    }
    return -1;
}

void sortingArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j+1]) {
                int tmp =  array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

void validNumber(int& number) {
    while (std::cin.fail() || 1 > number) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int main() {
    int size = 0;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    validNumber(size);
    std::cout << "Enter elemets: ";
    int* array = new int[size];
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
        validNumber(array[i]);
    }
    sortingArray(array, size);
    std::cout << "======Array=====" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    int searchedNumber = 0;
    std::cout << "Enter searched number: ";
    std::cin >> searchedNumber;    
    validNumber(searchedNumber);
    int position = binarySearch(array, 0, size -1, searchedNumber);
    std::cout << std::endl;
    if (-1 == position) {
        std::cout << searchedNumber << " is not in the array!" << std::endl;
    } else {
        std::cout << searchedNumber << " found at index " << position << std::endl;
    }
    return 0;
}
