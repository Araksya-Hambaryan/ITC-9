#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

using namespace std::chrono;

void getVectorInitTime() {
    std::vector<int> vec(1000);
    auto start = high_resolution_clock::now();
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = i;
    } 
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 
    std::cout << "Vector time: "
         << duration.count() << " microseconds" << std::endl;
}
 
void getArrayInitTime() {
    std::array<int, 1000> arr;
    auto start = high_resolution_clock::now();
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = i;
    } 
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 
    std::cout << "Array time: "
         << duration.count() << " microseconds" << std::endl;
}
int main() {
    getVectorInitTime(); 
    getArrayInitTime();
     
    return 0;
}
