#include <chrono>
#include <iostream>
#include <vector>
#include <array>

void getArrayTime() {
    std :: array <int, 500> arr;
    auto start = std :: chrono :: high_resolution_clock :: now();
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = i;
    } 
    std :: cout << arr.front() << std :: endl;
    std :: cout << arr.back() << std :: endl;
    std :: cout << arr.empty() << std :: endl;
    std :: cout << arr.at(100) << std :: endl;
    std :: cout << arr.max_size() << std :: endl;
    auto stop = std :: chrono :: high_resolution_clock::now();
    auto duration = std :: chrono :: duration_cast <std :: chrono :: microseconds>(stop - start);
    std :: cout << "\nArray time : " << duration.count() << " microseconds" << std :: endl << std :: endl;
}

void getVectorTime() {
    std :: vector <int> vec(500);
    auto start = std :: chrono :: high_resolution_clock :: now();
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = i;
    }
    std :: cout << vec.front() << std :: endl;
    std :: cout << vec.back() << std :: endl;
    std :: cout << vec.empty() << std :: endl;
    std :: cout << vec.at(100) << std :: endl;
    std :: cout << vec.size() << std :: endl;
    auto stop = std :: chrono :: high_resolution_clock::now();
    auto duration = std :: chrono :: duration_cast <std :: chrono :: microseconds>(stop - start);
    std :: cout << "\nVector time : " << duration.count() << " microseconds" << std :: endl << std :: endl;
}

int main() {
    getArrayTime();
    getVectorTime();

    return 0;
}
