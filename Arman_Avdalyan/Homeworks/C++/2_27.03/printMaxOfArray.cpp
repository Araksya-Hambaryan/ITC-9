#include <iostream>
#define mutq_anel_zangvac int max = 0; int size = inputSize(); int arr[size]; inputArray(arr, size);
#define hashvel_maximum_arjeq max = findMax(arr, size);
#define tpel printMax(max);

int inputSize() {
    int size = 0;
    std :: cout << "Input array size: ";
    std :: cin >> size;
    while(!std :: cin || size <= 0) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input only number and bigger than 0 : ";
        std :: cin >> size;
    }
    return size;
}

void inputArray(int* arr, int size) {
    std :: cout << "Input " << size << " numbers : ";
    for(int i = 0; i < size; ++i) {
        std :: cin >> arr[i];
        while(!std :: cin) {
            std :: cin.clear();
            std :: cin.ignore();
            std :: cout << "Please input only number : ";
            std :: cin >> arr[i];
        }
    }
}

int findMax(int* arr, int size) {
    int max = arr[0];
    for(int i = 1; i < size; ++i) {
        max = arr[i] > max ? arr[i] : max;
    }
    return max;
}

void printMax(int max){
    std :: cout << "Max number of array is equal " << max << std :: endl;
}

int main() {
    mutq_anel_zangvac
    hashvel_maximum_arjeq
    tpel
    return 0;
}
