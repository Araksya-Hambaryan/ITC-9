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
/*
int findPosition(int* array, int number) {
    std::cout << "findPos\n";
    int low = 0;
    int higth = 1;
    int value = array[0];
    while (value < number) {
        low = higth;
        higth = 2 * higth;
        value = array[higth];
    }
    return binarySearch(array, low, higth, number);
}
*/
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

int main() {
    int size = 0;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    std::cout << "Enter elemets: ";
    int* array = new int[size];
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
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
  //  int position = findPosition(array, searchedNumber);

   // std::cout << "pos " << position << std::endl;
    if (-1 == binarySearch(array, 0, size, searchedNumber)) {
        std::cout << searchedNumber << " is not in the array!" << std::endl;
    } else {
        std::cout << searchedNumber << " is int the array!" << std::endl;
    }
    return 0;
}
