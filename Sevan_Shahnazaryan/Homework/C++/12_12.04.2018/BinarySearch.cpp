#include <iostream>

int binarySearch(int * arr, int num, int first, int last) {
    if(first <= last) {
        int mid = (first + last) / 2;
        if(arr[mid] < num) {
            return binarySearch(arr, num, mid + 1, last);
        }
        if(arr[mid] > num) {
            return binarySearch(arr, num, first, mid - 1);
        }
        return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 5, 3, 9, 15, 26, 40, 60, 72, 78, 93, 105, 130, 160, 180, 250, 300, 400, 405, 500};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    std::cout << "*****ARRAY*****\n";
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "\n";
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(std::cin.fail()) {
        std::cout << "WRONG INPUT: try again \n";
        return 1;
    }
    if(binarySearch(arr, num, 0, size - 1) == true) {
        std::cout << "Your number is in array" << std::endl;
    } else {
        std::cout << "Your number is NOT in array" << std::endl;
    }
    return 0;
}
