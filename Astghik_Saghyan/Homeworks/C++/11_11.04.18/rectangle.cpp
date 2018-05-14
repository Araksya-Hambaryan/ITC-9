#include <iostream>
#include <stdlib.h>
#include <stdio.h>

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
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/***********************End of merge sort functions*****************/

/* Function to print an array */
void printArray(int array[], int size) {
    for (int i=0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

struct Rect{
    int width;
    int length;
    int calcArea(int x, int y) {
        return x*y;
    }
}; 

int main() {

    Rect arr[8] {{10,3}, {5,9}, {3,2}, {15,2}, {2,2}, {4,2}, {6,7}, {5,9}};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int areaArr[arrSize];
    for(int i = 0; i < arrSize; i++) {
        areaArr[i] = arr[i].calcArea(arr[i].width, arr[i].length);
    }  

    std::cout << "Given array is:\t" << std::endl;
    printArray(areaArr, arrSize);

    mergeSort(areaArr, 0, arrSize - 1);

    std::cout << "\nSorted array is:\t" << std::endl;
    printArray(areaArr, arrSize);
    return 0;
}

