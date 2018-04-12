#include <iostream>

void creatArray(int* arr, int size) {
    std::cout << "Mutqagrel zangvaci elementner@ ->\n";
    for(int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    std::cout << std::endl;
}

void printArray(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;
}

int checkNum(int* arr, int f, int l, int val) {
    int m = (l + f) / 2;
    if(m != f) {
    if(arr[m] == val) {
        return true;
    } else if(arr[m] < val) {
        if(arr[m + 1] > val) {
            return false;
        } else {
            checkNum(arr, m + 1, l, val);
        }
    } else {
        if(arr[m - 1] < val) {
            return false;
        } else {
            checkNum(arr, f, m - 1, val);
        }
    }
    } else { 
        if(arr[m] == val || arr[m + 1] == val) {
            return true;
        } else {
            return false;
        }
    }

}

void Merge(int* arr, int f, int l, int mid) {
    int temp[l-f+1];
    int i = f;
    int k = 0;
    int j = mid + 1;
    while(i <= mid && j <= l) {
        if(arr[i] < arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        } else {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j <= l) {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for(i = f; i <= l; i++) {
        arr[i] = temp[i-f];
    }
}

void MergeSort(int* arr, int f, int l) {
    int mid;
    if (f < l) {
        mid = (f + l) / 2;
        MergeSort(arr, f, mid);
        MergeSort(arr, mid + 1, l);
        Merge(arr, f, l, mid);
    }
}

int main() {
    int size = 0;
    std::cout << "Mutqagrel zangvaci chap@ -> ";
    std::cin >> size;
    if(0 < size) {
    int* arr = new int[size];
        creatArray(arr, size);
        MergeSort(arr, 0, size - 1);
        std::cout << "Sortavorvac zangvac@ hetevyaln e -> ";
        printArray(arr, size);
        int value;
        std::cout << "Mutqagrel tiv@ vor@ cankanum e stugel - > ";
        std::cin >> value;
        if(checkNum(arr, 0, size - 1, value)) {
            std::cout << "Zangvacum ka " << value << " tiv@ !!! \n";
        } else {
            std::cout << "Zangvacum chka " << value << " tiv@ :( \n";
        }
    }
    return 0;
}
