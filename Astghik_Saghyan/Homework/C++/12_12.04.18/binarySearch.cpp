#include <iostream>

/***************Binary search function********/

bool isMatch(int arr[], int start, int end, int num) {
    int mid = (end + start)/2;
    if(num == arr[mid]) {
        return true;
    } else if(0 == end - start) {
        return false;
    } else if(num < arr[mid]) {
        isMatch(arr, start, mid - 1, num);        
    } else {
        isMatch(arr, mid + 1, end, num);
    }
}

/**********Start buble sort functions**************/

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int* bubbleSort(const int arr[], int n) {
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
            if(newArr[j] > newArr[j+1]) {
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

/*************End of buble sort functions******/

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* arr = nullptr;
    int size = -1;
    while(size < 0) {
        std::cout << "Enter the size, not a nagativ value!" << std::endl;
        std::cin >> size;
    }
    std::cout << "Enter " << size << " numbers!" << std::endl;
    arr = new int[size];
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    int* address = bubbleSort(arr, size); 
    for(int i = 0; i < size; i++) {
        arr[i] = *address;
        ++address;
    }
    std::cout << "Sorted array:" << std::endl;
    printArr(arr,size);

    int number;
    std::cout << "Enter a number to compare!" << std::endl;
    std::cin >> number;

    if(isMatch(arr, 0, size - 1, number)) {
        std::cout << number << " match an array's element!" << std::endl;
    } else {
        std::cout << number << " don't match an array's element!" << std::endl;
    }
    delete [] arr;
    arr = nullptr; 
    return 0;
}
