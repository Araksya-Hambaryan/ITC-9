#include <iostream>

struct Rect {
    int length;
    int hight;
    int areaRect();
    Rect();
    Rect(int len, int hig);
};   
   
int Rect::areaRect() {
        int area = length * hight;
        return area;
}

Rect::Rect(){
}

Rect::Rect(int len, int hig) {
    length = len;
    hight = hig;
}

void Merge(int* a, int f, int l, int mid) {
    int temp[l-f+1];
    int i = f;
    int k = 0;
    int j = mid + 1;
    while(i <= mid && j <= l) {
        if(a[i] < a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        } else {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while(i <= mid) {
        temp[k] = a[i];
        k++;
        i++;
    }
    while(j <= l) {
        temp[k] = a[j];
        k++;
        j++;
    }
    for(i = f; i <= l; i++) {
        a[i] = temp[i-f];
    }
}

void MergeSort(int* a, int f, int l) {
    int mid;
    if (f < l) {
        mid = (f + l) / 2;
        MergeSort(a, f, mid);
        MergeSort(a, mid + 1, l);
        Merge(a, f, l, mid);
    }
}

void printArray(int* a, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << a[i] << '\t';
    }    
}

void rectArea(Rect* arr, int* a, int size) {
    for(int i = 0; i < size; ++i) {
        a[i] = arr[i].areaRect();
    }
}

int main() {
    int size = 5;
    Rect arr[size]{{14,3}, {8,5}, {6,25}, {24,9}, {10,4}};
    int array[size];
    rectArea(arr, array, size);
    printArray(array, size);
    MergeSort(array, 0, size - 1);
    std::cout << "\nAfter sorted -> ";
    printArray(array, size);
    std::cout << std::endl;
    return 0;
} 