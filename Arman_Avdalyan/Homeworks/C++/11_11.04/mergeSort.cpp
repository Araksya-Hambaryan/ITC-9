#include <iostream>

struct Rect {
    public:
        Rect() {
            length = 1;
            width = 1;
        }
        Rect(int length, int width) {
            this -> length = length;
            this -> width = width;
        }
        int area() {
            return length * width;
        }
    private:
        int length;
        int width;
};

void merge(int* arr, int low, int high, int mid) {
    int i = low;
    int j = mid + 1; 
    int k = 0;
    int temp[high - low + 1];
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            ++k;
            ++i;
        } else {
            temp[k] = arr[j];
            ++k;
            ++j;
        }
    }
    while (i <= mid) {
        temp[k] = arr[i];
        ++k;
        ++i;
    }
    while (j <= high) {
        temp[k] = arr[j];
        ++k;
        ++j;
    }
    for (i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int* arr, int low, int high) {
    int mid = 0;
    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, high, mid);
    }
}

void printArray(int* arr, int size) {
    std :: cout << "\nSorted array is ";
    for (int i = 0; i < size; ++i) {
        std :: cout << arr[i] << "  ";
    }
    std :: cout << std :: endl;

}

void printOldArray(Rect* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std :: cout << arr[i].area() << "  ";
    }
    std :: cout << std :: endl;
}

void getAreas(Rect* arr, int* newArr, int size) {
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i].area();
    }
}

int main() {
    const int size = 7;
    Rect array[size]{{1,2}, {7,5}, {8,10}, {74,10}, {1,11}, {3,17}, {50,13}};
    int  area[size];
    getAreas(array, area, size);
    printOldArray(array, size);
    mergeSort(area, 0, size - 1);
    printArray(area, size);
    return 0;
}
