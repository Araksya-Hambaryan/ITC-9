#include <iostream>
int indexFun(int *arr, int f, int l, int cam) {
    int mid;
    if(f <= l){
        mid = (f + l) / 2;
        if(arr[mid] > cam){
            return  indexFun(arr, f, mid - 1, cam);
        }
        if(arr[mid] < cam){
            return indexFun(arr, mid + 1, l, cam);
        }
        return mid;
    } else {
        return -1;
    }
}

int main() {
    int len = 6;
    std::cout << "input arr length > 1 or it will be done by default\n";
    std::cin >> len ;
    if(len < 2){
        len = 6;
    }

    int * arr = new int[len];

    for(int i = 0; i < len; ++i) {
        std::cout << "arr[" << i << "]= ";
        std::cin >> arr[i];
        std::cout << "\n";
    }
    int num;
    std::cout << "Input searching number   "; 
    std::cin >> num;
    int retVal = indexFun(arr, 0, len-1, num);
    if(0 <= retVal) {
        std::cout << "The index of number is " << retVal ;
    } else {
        std::cout << "No matches ";
    }
    delete [] arr;
}
