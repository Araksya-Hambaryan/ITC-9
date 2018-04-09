#include <iostream>

int comp(int a, int b) {
    if (a > b) {
        return a;	
    }
    return b;
}

void mySort(int* arr, int n, int(*comp)(int, int), char simb) {
    int value = 0;
    if ('+' == simb) {
        value = 0;
    } else {
        value = 1;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-1; ++j) {
            if(comp(arr[j], arr[j+1]) == arr[j + value])  {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

}

void print(int* arr, int n) {
    for(int i = 0; i < n; ++i) {
        std::cout << arr[i] << "\t";        
    }
    std::cout << std::endl;
}

void creatArray(int* arr, int n) {
    std::cout << "Mutqagrel zangvaci elementner@ -> \n";
    for(int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }    
}

int main() {
    int size = 0;
    std::cout << "Mutqagrel zangvaci chap@ -> ";
    std::cin >> size;
    if(0 >= size) {
        std::cout << "Sxal mutqagrum \n";
        return 0;
    }
    int arr[size];
    creatArray(arr, size);
    char simbol;
        std::cout << "Achman kargov dasavorelu hamar mutqagrel + , isk nvazman hamaar -  -> ";
        std::cin >> simbol;
    if(simbol == '+' || simbol == '-') {
    mySort(arr, size, comp, simbol);
    print(arr, size);
    } else {
        std::cout << "Sxal mutqagrum \n";
    }
    return 0;
}
