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

void sort1(int* arr, int size) {
    int* p1;
    int* p2;
    for (int i = 0; i < size - 1; i++) {       
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                p1 = &arr[j];
                p2 = &arr[j + 1];
                int tmp = *p1;
                *p1 = *p2;
                *p2 = tmp; 
            }
        }
    }        
}

void sort2(int* arr, int size) {
    int* p1;
    int* p2;
    for (int i = 0; i < size - 1; i++) {       
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[ j + 1]) {
                p1 = &arr[j];
                p2 = &arr[j + 1];
                int tmp = *p1;
                *p1 = *p2;
                *p2 = tmp; 
            }
        }
    }        
}

void sort(int* arr, int size, void(foo)(int*, int)) {
    foo(arr, size);
}


int main() {
    int size = 0;
    std::cout << "enter array size - " ;
    std::cin >> size;
    validnumber(size);
    int arr[size];    
    std::cout << "enter elements array" << std::endl;
    for(int i = 0; i < size; ++i) {
        int k = 0;
        std::cin >> k;
        validnumber(k);
        arr[i] = k;
    }
    char symbol;
    std::cout << "enter symbol '+' or '-' ";
    std::cin >> symbol;
    if('-' == symbol) {
        sort(arr, size, sort1);
    } else {
        sort(arr, size, sort2);
    }
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i]  << " ";
    }
    std::cout << std::endl;
    return 0;
}
