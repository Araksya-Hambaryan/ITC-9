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
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

int compareInc(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) {
        return firstNumber;
    }
    return secondNumber;
}

int compareDec(int firstNumber, int secondNumber) {
    if (firstNumber < secondNumber) {
        return firstNumber;
    }
    return secondNumber;
}

int* sorting(int array[], int size, int(*compare)(int, int)) {
    int* sortedArray = new int[size];
    for (int counter = 0; counter < size; ++counter) {
        sortedArray[counter] = array[counter];
    }
    for(int counter1 = 0; counter1 < size; ++counter1) {
        for(int counter2 = 0; counter2 < size - 1; ++counter2) {
            int num = compare(sortedArray[counter2], sortedArray[counter2 + 1]);
            if (sortedArray[counter2 + 1] == num) {
                swap(sortedArray[counter2], sortedArray[counter2 + 1]);
            }
        }
    }

    return sortedArray;
} 

int main() {
    int size = 0;
    int* firstElement = 0;
    char chooseOrder = ' ';

    inputSize(size);
    int array[size];
    inputArray(array, size);

    inputOrder(chooseOrder);

    if ('-' == chooseOrder) {
        firstElement = sorting(array, size, compareInc);
    }
    if ('+' == chooseOrder) {
        firstElement = sorting(array, size, compareDec);
    }
    for (int counter = 0; counter < size; ++counter) {
        std::cout << *firstElement << std::endl;
        ++firstElement;
    }

    return 0;
}
