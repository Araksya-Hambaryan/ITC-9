#include <iostream>

int area(int num1, int num2) {
    return num1 * num2;
}

struct Rect {
    int width;
    int length;
};

void merge(Rect * arr, int left, int middle, int right) {
    int i = 0;
    int j = 0;
    int k = 0;
    int num1 = middle - left + 1;
    int num2 = right - middle;
    Rect Left[num1];
    Rect Right[num2];
    for(i = 0; i < num1; i++) {
        Left[i] = arr[left + i];
    }
    for(j = 0; j < num2; j++) {
        Right[j] = arr[middle + 1 + j];
    }
    i = 0;
    j = 0;
    k = left;
    while(i < num1 && j < num2) {
        if(area(Left[i].width, Left[i].length) <= area(Right[j].width, Right[j].length)) {
            arr[k] = Left[i];
            i++;
        } else {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    while(i < num1) {
        arr[k] = Left[i];
        i++;
        k++;
    }
    while(j < num2) {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void mergeSort(Rect * arr, int left, int right) {
    if(left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    const int size = 7;
    Rect arr[size] = {{2,3}, {5,8}, {26,27}, {15, 2}, {4,3}, {8,20}, {7,80}};
    mergeSort(arr, 0, size - 1);
    for(int i = 0; i < size; i++) {
        std::cout << arr[i].width << " * " << arr[i].length << " = " << area(arr[i].width, arr[i].length) << std::endl;
    }
}
