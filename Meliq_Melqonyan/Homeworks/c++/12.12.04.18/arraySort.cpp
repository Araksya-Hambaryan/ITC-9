#include <iostream>

int stugum(int *arr, int skizb, int verj, int num) {
    int mid = (skizb + verj) / 2;
    if(arr[mid] == num) {
        std::cout << "trvac tvi indexn e:: " << mid << '\n';
        return 0;
    }
    if(num > arr[verj] || num < arr[skizb]) {
        std::cout << "trvac tiv@ zangvacum chka" << std::endl;
        return 0;
    }
    if(skizb < verj) {
        if(arr[mid] > num) {
            stugum(arr, skizb, mid, num);
        }
        if(arr[mid] < num) {
            stugum(arr, mid, verj, num);
        }
    } else {
        std::cout << "trvac tiv@ zangvacum chka" << '\n';
        return 0;
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;
    std::cin >> num;
    stugum(arr, 0, 9, num);
    return 0;
}











