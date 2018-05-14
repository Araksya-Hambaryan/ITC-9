#include <iostream>

bool compareInc(int a, int b) {
    if(a > b) {
        return true;
    }
    return false;
}

bool compareDec(int a, int b) {
    if(a < b) {
        return true;
    }
    return false;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int* bubbleSort(const int arr[], int n, bool (*compare)(int a, int b)) {
    int newArr[n];
    int* adNewArr = &newArr[0];
    for(int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
    int i, j;
    bool swapped;
    for(int i = 0; i < n-1; i++) {
        swapped = false;
        for(j = 0; j < n-i-1; j++) {
            if(compare(newArr[j], newArr[j+1])) {
                swap(&newArr[j], &newArr[j+1]);
                swapped = true;
            }
        }
 
     // IF no two elements were swapped by inner loop, then break
        if(swapped == false) {
            break;
        }
    }
    return adNewArr;
}
 
int main() {
    int n;
    std::cout << "Enter the size of array!" << std::endl;
    std::cin >> n;
    while(n < 0) {
        std::cout << "The size can not have a nagativ value!" << std::endl;
        std::cin >> n;
    }
    int arr[n];
    std::cout << "Enter the array elements one by one!" << std::endl;
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    bool (*compare)(int, int);
    int command;
    std::cout <<"Decrease order-1, Increase oreder-2" << std::endl;
    std::cin >> command;
    while(command != 1 && command != 2) {
        std::cout << "You entered a wrong command!" <<std::endl;
        std::cin >> command;
    }
    if(command == 1) {
        compare = &compareDec;
    } else if(command == 2) {
        compare = &compareInc;
    } 

    int* address = bubbleSort(arr, n, compare);
    int newArray[n];
    for(int i = 0; i < n; i++) {
        newArray[i] = *address;
        ++address;
    }
    std::cout << "Sorted array:" << std::endl;
    for(int i = 0; i < n; i++) { 
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;  
    return 0;
}
