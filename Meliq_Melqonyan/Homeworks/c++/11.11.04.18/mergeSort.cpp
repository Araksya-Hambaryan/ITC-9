#include <iostream>
int a[5];
struct Rect {
	int lenght;
        int width;
        Rect(int a, int b) {
            lenght = a;
            width = b;
        }
        int bazm() {
            return lenght * width;
        }
};

void merge(int, int, int);

void merge_sort(int low,int high) {
    int mid;
    if(low < high) {
        mid = low + (high-low) / 2;
        merge_sort(low, mid);
        merge_sort(mid+1, high);
        merge(low, mid, high);
    }
}

void merge(int low, int mid, int high) {
    int h, i, j, b[50], k;
    h = low;
    i = low;
    j = mid+1;

    while((h <= mid) && (j <= high)) {
        if(a[h] <= a[j]) {
            b[i]=a[h];
            ++h;
        } else {
            b[i] = a[j];
            ++j;
        }
        ++i;
    }
    if(h > mid) { 
        for(k = j; k <= high; ++k) {
            b[i] = a[k];
            ++i;
        }
    } else {
        for(k = h; k <= mid; ++k) {
            b[i] = a[k];
            ++i;
        }
    }
    for(k = low; k <= high; ++k) {
        a[k] = b[k];
    }
}

int main() {
    const int size = 5;
    Rect arr[size]{{1,2}, {3,5}, {8,2}, {9,2}, {4,1}};
    for(int i = 0; i < size; ++i) {
        a[i] = arr[i].bazm();
    }
    merge_sort(0, 4);
    for(int i = 0; i < size; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << '\n';
    return 0;
}
