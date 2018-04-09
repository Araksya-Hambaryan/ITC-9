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

void bubbleSort(int arr[], int n, bool (*compare)(int a, int b)) {
    int i, j;
    bool swapped;
    for(int i = 0; i < n-1; i++) {
        swapped = false;
        for(j = 0; j < n-i-1; j++) {
            if(compare(arr[j], arr[j+1])) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
 
     // IF no two elements were swapped by inner loop, then break
        if(swapped == false) {
            break;
        }
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size) {
    int i;
    for(i=0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;  
}
 

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool (*compare)(int, int);
    int command;
    std::cout <<"Decrease order-1, Increase oreder-2" << std::endl;
    std::cin >> command;
    if(command == 1) {
        compare = &compareDec;
    } else if(command == 2) {
        compare = &compareInc;
    } else {
        std::cout << "You entered a wrong command!" <<std::endl;
        return 0;
    }
    bubbleSort(arr, n, compare);
    std::cout << "Sorted array:" << std::endl;
    printArray(arr, n);
    return 0;
}
