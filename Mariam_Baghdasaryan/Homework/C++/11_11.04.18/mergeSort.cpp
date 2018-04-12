#include <iostream>

struct Rectangle {
    private:
        int width;
        int length;
    public:
        Rectangle() {
            width = 1;
            length = 1; 
        }
        Rectangle(int width, int length) {
            this -> width = width;
            this -> length = length; 
        }
        int area() {
            return width * length;
        }
};

void merge(int* array, int low, int mid, int high) {
    int firstCount;
    int secondCount;
    int counter;
   
    int n1 = mid - low + 1;
    int n2 = high - mid;
 
    int left[n1];
    int right[n2];
  
    for (firstCount = 0; firstCount < n1; ++firstCount) {
        left[firstCount] = array[low + firstCount];
    }
    for (secondCount = 0; secondCount < n2; ++secondCount) {
        right[secondCount] = array[mid + 1 + secondCount];
    } 
    
    firstCount = 0; 
    secondCount = 0; 
    counter = low;
 
    while (firstCount < n1 && secondCount < n2) {
        if (left[firstCount] <= right[secondCount]) {
            array[counter] = left[firstCount];
            ++firstCount;
        } else {
            array[counter] = right[secondCount];
            ++secondCount;
        }
        ++counter;
    }

    while (firstCount < n1) {
        array[counter] = left[firstCount];
        ++firstCount;
        ++counter;
    }

    while (secondCount < n2) {
        array[counter] = right[secondCount];
        ++secondCount;
        ++counter;
    }
}  

void mergeSort(int* array, int low, int high) {
    int mid = 0;
    if (low < high) {
        mid = (low + high) / 2;

        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);

        merge(array, low, mid, high);
    }
} 

void printArray(Rectangle* array, int size) {
    for (int counter = 0; counter < size; ++counter) {
        std :: cout << array[counter].area() << "\t";
    }
    std :: cout << std :: endl << std :: endl;
}

void printSortedArray(int* array, int size) {
    std :: cout << "Sorted array : \n";
    for (int counter = 0; counter < size; ++counter) {
        std :: cout << array[counter] << "\t";
    }
    std :: cout << std :: endl;
}

void getAreas(Rectangle* array, int* newArray, int size) {
    for (int counter = 0; counter < size; ++counter) {
        newArray[counter] = array[counter].area();
    }
}

int main() {
    const int size = 10;
    Rectangle array[size] = {{5,2}, {7,3}, {3,4}, {12,2}, {20,1}, {30,2}, {7,4}, {3,9}, {2,11}, {1,1}};
    int area[size];
    getAreas(array, area, size);
    printArray(array, size);
    mergeSort(area, 0, size - 1);
    printSortedArray(area, size);
    return 0;
}
