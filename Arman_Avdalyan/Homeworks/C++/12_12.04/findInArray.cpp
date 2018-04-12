#include <iostream>

bool hasElement(int* arr, int num,  int first, int last) {
    if (first <= last) {
        int mid = (first + last) / 2;
        if (arr[mid] < num) {
            return hasElement(arr, num, mid + 1 , last);
        }
        if (arr[mid] > num){
            return hasElement(arr, num, first, mid - 1);
        }
        return true;
    }
    return false;
}

int inputNumber() {
    int num = 0;
    std :: cout << "Input number : ";
    std :: cin >> num;
    while (!std :: cin) {
        std :: cout << "Please input only number : ";
        std :: cin.clear();
        std :: cin.ignore();
        std :: cin >> num;
    }
    return num;
}

void printArray(int* arr, int size) {
    std :: cout << "The array is ";
    for (int i = 0; i < size; ++i) {
        std :: cout << arr[i] << " ";
    }
    std :: cout << std :: endl;
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 9, 10, 20, 21, 23, 27, 30, 40, 51, 52, 53, 71, 72, 91, 92};
    const int size = sizeof(arr)/ sizeof(arr[0]);
    printArray(arr, size);
    int num = inputNumber();
    if (hasElement(arr, num, 0, size -1)) {
        std :: cout << "Array has that number.\n";
    } else {
        std :: cout << "Array hasn't that number.\n";
    }
    return 0;
}
