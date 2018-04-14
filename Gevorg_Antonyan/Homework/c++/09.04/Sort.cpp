#include <iostream>
#include <string>


void validnumber(int& number) {
    while (std::cin.fail()) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int compare1(const int firstNum, const int secondNum) {
	return firstNum - secondNum;
}

int compare2(const int firstNum, const int secondNum) {
	return secondNum - firstNum;
}
    
int* sort(int* arr, int size, int (*funcPtr)(int, int)) {
	int* sortedArray = new int[size];
	for (int i = 0; i < size; ++i) {
		sortedArray[i] = arr[i];
	}
    for (int i = 0; i < size - 1; i++) {       
        for (int j = 0; j < size - i - 1; j++) {
            if (0 < funcPtr(sortedArray[j], sortedArray[j+1])) {
                int tmp = sortedArray[j];
                sortedArray[j] = sortedArray[j+1];
                sortedArray[j+1] = tmp; 
            }
        }
    }
	return sortedArray;        
}

void printArray(int* array, int size) {
	for(int i = 0; i < size; ++i) {
        std::cout << array[i]  << " ";
    }
	std::cout << std::endl;
}

void initArray(int* array, int size) {
    for(int i = 0; i < size; ++i) {
        std::cin >> array[i];
        validnumber(array[i]);
    }
}

void sortingArray(int*& array, int* arr, int size) {
    char symbol;
    std::cout << "enter symbol '+' or '-' ";
    do {
		std::cin.clear();
		std::cin.ignore(256,'\n');
        std::cout << "enter correct symbol" << std::endl;
        std::cin >> symbol;
    } while ('-' != symbol && '+' != symbol); 
    if('-' == symbol) {
        array = sort(arr, size, compare2);
    }
    if('+' == symbol) {
        array = sort(arr, size, compare1);
    }
    std::cout << "xxx" << std::endl;
}

int main() {
    int size = 0;
    std::cout << "enter array size - " ;
    std::cin >> size;
    while(0 > size) {
        std::cout << "enter correct size" << std::endl;
        std::cin >> size;
    }        
    validnumber(size);
    int* arr = new int[size];    
    std::cout << "\nEnter elements array" << std::endl;
	initArray(arr, size);
	std::cout << "\n-----Array-----\n" << std::endl;
	printArray(arr, size);
	
	int* sortedArray = nullptr; 
	sortingArray(sortedArray, arr, size);
	std::cout << "\n-----Sorted array-----\n" << std::endl;
	printArray(sortedArray, size);

	delete[] arr;
	delete[] sortedArray;
    return 0;
}
