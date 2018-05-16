#include <iostream>

int serch(int* arr, int num, int begin, int end) {
    if (num > arr[end]) {
        std::cout << "number is not element of array: " << std::endl;
        return 1;
    }
    if (num == arr[begin]) {
        std::cout << "number is a element of array: " << begin + 1 << std::endl;
        return 0;
    }
    if (num == arr[end]) {
        std::cout << "number is a element of array: " << end + 1 << std::endl;
        return 0;
    }    
    if (num == arr[(end - begin) / 2]) {
        std::cout << "number is a element of array: " << (end - begin) / 2 + 1 << std::endl;
        return 0;
    }
    if ((1 == end - begin) || (0 == end - begin)) {
        std::cout << "number is not element of array" << std::endl;
        return 1;
    }
    if (num < arr[(end - begin) / 2]) {
        end = (end - begin) / 2;
        return serch(arr, num, begin, end);
    } else {
        begin = begin + (end - begin) / 2;
        return serch(arr, num, begin, end);
    }
}

void validnumber(int& number) {
    while (std::cin.fail()) {
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int main () {
    int arr [10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    std::cout << "array is : ";
    for(int i = 0; i < 10; ++i) {
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl << "enter serch number" << std::endl;
    int begin = 0;
    int end = 9;
    int num = 0;
    std::cin >> num;
    validnumber(num);
    serch(arr, num, begin, end);
    return 0;
}
    
