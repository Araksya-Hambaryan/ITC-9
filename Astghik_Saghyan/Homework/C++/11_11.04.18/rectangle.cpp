#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct Rect{
    int width;
    int length;
    int calcArea(int x, int y) {
        return x*y;
    }
};
/******************Start of merge sort functions***************/

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for(j = 0; j < n2; j++) {
        R[j] = arr[m + 1+ j];
    }

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(Rect arrStr[], int l, int r) {
    int arr[r+1];
    
    for(int i = 0; i <= r; i++) {
        arr[i] = arrStr[i].calcArea(arrStr[i].width, arrStr[i].length);
    }
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves

        mergeSort(arrStr, m+1, r);

        merge(arr, l, m, r);
    }
}

/***********************End of merge sort functions*****************/

/* Function to print an array */
void printArray(Rect array[], int size) {
    for (int i=0; i < size; i++) {
        std::cout << array[i].calcArea(array[i].width, array[i].length) << " ";
    }
    std::cout << std::endl;
}
/*void printArray(Rect elem) {
    
    std::cout << elem.calcArea(elem.width, elem.length) << " ";
    std::cout << std::endl;
}*/



/*struct Rect{
    int width;
    int length;
    int calcArea(int x, int y) {
        return x*y;
    }
};*/
int main() {
    
    struct Rect arr[8] {{10,3}, {5,9}, {3,2}, {15,2}, {2,2}, {4,2}, {6,7}, {5,9}};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    std::cout << "Given array is:\t" << std::endl;
    printArray(arr, arr_size);


//    mergeSort(arr, 0, arr_size - 1);

    std::cout << "\nSorted array is:\t" << std::endl;
    printArray(arr, arr_size);
    return 0;
}

