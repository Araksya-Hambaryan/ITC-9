#include <iostream>

int binarySearch(int* array, int number, int leftEnd, int rightEnd) {
        if (rightEnd >= leftEnd) {
            int middle = leftEnd + (rightEnd - leftEnd) / 2;

            if (number == array[middle]) {
                return middle;

            } else if (number > array[middle]) {

                return binarySearch(array, number, middle + 1, rightEnd);
            } else {

                return binarySearch(array, number, leftEnd, middle - 1);
            }
        } else {
            return -1;
        }
    }

void printArray(int* array, int size) {
    std::cout << "Your array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 5;
    int* array = new int[size] {1,2,5,9,10};
    printArray(array, size);
    int number = 0;
    std::cout << "Enter the number to be found please: ";
    std::cin >> number;
    if (std::cin.fail()) {
        std::cout << "Sorry,wrong input!" << std::endl;
    } else {
        int leftEnd = 0;
        int rightEnd = size - 1;
        int result = binarySearch(array, number, leftEnd, rightEnd);
        if (-1 == result) {
            std::cout << "No such number!" << std::endl;
        } else {
            std::cout << "The number is under index " << result << "." << std::endl;
        }
    }
    delete[] array;
    return 0;
}