#include <iostream>

void inputSize(int& size) {
    std::cout << "Input the size of the array : ";
    std::cin >> size;
    while (!std :: cin || size < 1) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input the positive integer number : ";
        std :: cin >> size;
    }
}

void inputOrder(char& chooseOrder) {
    std :: cout << "Enter '+' for ascending order, '-' for decrease order : ";
    std :: cin >> chooseOrder;
    while (!std :: cin || ('+' != chooseOrder && '-' != chooseOrder)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please enter only '+' for ascending order and '-' for decrease order : ";
        std :: cin >> chooseOrder;

    }
}

void inputArray(int array[], int size) {
    for (int counter = 0; counter < size; ++counter) {
        std :: cout << "Enter array[" << counter << "] = ";
        std :: cin >> array[counter];
    }
}

void swap(int& firstNumber, int& secondNumber) {
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
}

int compareInc(int firstNumber, int secondNumber) {
    return firstNumber > secondNumber ? firstNumber : secondNumber;
}

int compareDec(int firstNumber, int secondNumber) {
    return firstNumber < secondNumber ? firstNumber : secondNumber;
}

int* sorting(int array[], int size, int(*compare)(int, int)) {
    int* newArray = new int[size];
    for (int counter = 0; counter < size; ++counter) {
        newArray[counter] = array[counter];
    }
    for(int counter1 = 0; counter1 < size; ++counter1) {
        for(int counter2 = 0; counter2 < size - 1; ++counter2) {
            int num = compare(newArray[counter2], newArray[counter2 + 1]);
            if (newArray[counter2 + 1] == num) {
                swap(newArray[counter2], newArray[counter2 + 1]);
            }
        }
    }

    return newArray;
} 

int main() {
    int size = 0;
    int* sortedArray = 0;
    char chooseOrder = ' ';

    inputSize(size);
    int* array = new int[size];
    inputArray(array, size);

    inputOrder(chooseOrder);

    if ('-' == chooseOrder) {
        sortedArray = sorting(array, size, compareInc);
    }
    if ('+' == chooseOrder) {
        sortedArray = sorting(array, size, compareDec);
    }
    for (int counter = 0; counter < size; ++counter) {
        std::cout << *sortedArray << std::endl;
        ++sortedArray;
    }
   
    delete[] array;

    return 0;
}
