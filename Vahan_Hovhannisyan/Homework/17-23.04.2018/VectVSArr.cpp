#include <chrono>
#include <iostream>
#include <vector>
#include <array>

using namespace std::chrono;
void vecInitializing() {
    std :: vector <int> v(5000);
    auto start = high_resolution_clock :: now();
    for (int i = 0; i < v.size(); ++i) {
        v[i] = i;
    }
    
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast <microseconds>(stop - start);
    std :: cout << "Time taken for initializing 5000 elements of vector: " << duration.count()
    << " microseconds" << std :: endl;
}

void arrInitializing() {
    std::array <int,5000 > arr;
    auto start = high_resolution_clock :: now();
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = i;
    }
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast <microseconds>(stop - start);
    std :: cout << "Time taken for initializing 5000 elements of array: " << duration.count() 
    << " microseconds" << std :: endl;
}

int main(void) {
    
    vecInitializing();
    arrInitializing();
    return 0;
}