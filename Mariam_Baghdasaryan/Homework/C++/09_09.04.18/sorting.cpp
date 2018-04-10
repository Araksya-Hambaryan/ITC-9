#include <iostream>

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
    for(int counter1 = 0; counter1 < size; ++counter1) {
        for(int counter2 = 0; counter2 - 2 < size; ++counter2) {
            sortedArray[counter2] = compare(array[counter2], array[counter2 + 1]);
        }
    }
    for(int counter = 0; counter < size; ++counter) { 
            std :: cout << sortedArray[counter] << std :: endl;
        
    }

    return sortedArray;
} 

int main() {
    int size = 0;
    int array[size];
    int* firstElement = 0;
    char chooseOrder = ' ';

    std::cout << "Input the size of the array : ";
    std::cin >> size;
    while (!std :: cin || size < 1) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input the positive integer number : ";
        std :: cin >> size;
    }
    std :: cout << "Enter '+' for ascending order, '-' for decrease order : ";
    std :: cin >> chooseOrder;
    while (!std :: cin || ('+' != chooseOrder && '-' != chooseOrder)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please enter only '+' for ascending order and '-' for decrease order : ";
        std :: cin >> chooseOrder;

    }
    for (int counter = 0; counter < size; ++counter) {
        std :: cout << "Enter array[" << counter << "]= ";
        std :: cin >> array[counter];
    }

    if ('+' == chooseOrder) {
        firstElement = sorting(array, size, compareInc);
    }
    if ('-' == chooseOrder) {
        firstElement = sorting(array, size, compareDec);
    }
    std::cout << *firstElement << std::endl;

    return 0;
}
