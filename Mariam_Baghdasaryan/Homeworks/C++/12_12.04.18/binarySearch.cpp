#include <iostream>

int binarySearch(int* array, int number, int first, int last) {
    if (last >= first) {
        int mid = (first + last) / 2;
        if (array[mid] == number) {
            return mid;
        } else if (array[mid] > number) {
            return binarySearch(array, number, first, mid - 1);
        } 
        return binarySearch(array, number, mid + 1, last);
    }
    return -1;    
}

int inputNumber() {
    int number = 0;
    std :: cout << "Input number : ";
    std :: cin >> number;
    while (!std :: cin) {
        std :: cout << "Please input only number : ";
        std :: cin.clear();
        std :: cin.ignore();
        std :: cin >> number;
    }
    return number;
}

void printArray(int* array, int size) {
    std :: cout << "Array :\n";
    for (int counter = 0; counter < size; ++counter) {
        std :: cout << array[counter] << "\t";
    }
    std :: cout << std :: endl;
}

int main() {
    int* array = new int[10] {3, 8, 10, 11, 14, 17, 22, 31, 36, 45};
    printArray(array, 10);
    int number = inputNumber();
    
    int position = binarySearch(array, number, 0, 9);
    if (-1 != position) {
        std :: cout << "Array has that number." << std :: endl;
    } else {
        std :: cout << "Array hasn't that number." << std :: endl;
    }
    delete[] array;
    array = nullptr;

    return 0;
}
