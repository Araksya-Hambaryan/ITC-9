#include <iostream>
#include <vector>
#include <array>
#include <chrono>

using namespace std::chrono;

void vectorOpper();
void arrayOpper();
void print_vec(const std::vector<int>& vec);

int main() {
    
    vectorOpper();
    arrayOpper();
    return 0;

}


void vectorOpper() { 
    std::cout << "\nOperations with std::vector" << std::endl;

    auto start = high_resolution_clock::now();
    std::vector <int> vec0(1000,5);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "1000 elem vector create time:\t";
    std::cout << duration.count() << " microseconds" << std::endl;

    start = high_resolution_clock::now();
    std::vector <int> vec(10,5);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    std::cout << "Vector create time:\t";
    std::cout << duration.count() << " microseconds" << std::endl;
    print_vec(vec);

    auto bgv = vec.begin();
    start = high_resolution_clock::now();
    vec.insert(bgv+2, 200);
    stop = high_resolution_clock::now();
    std::cout << "Vector insert element time:\t";
    std::cout << duration.count() << " microseconds" << std::endl;
    print_vec(vec);

    bgv = vec.begin();
    start = high_resolution_clock::now();
    vec.erase(bgv+3, bgv+4);
    stop = high_resolution_clock::now();
    std::cout << "Vector erase element time:\t";
    std::cout << duration.count() << " microseconds" << std::endl;
    print_vec(vec);
}


void arrayOpper() {
    std::cout << "\nOperations with std::array" << std::endl;
    
    auto start = high_resolution_clock::now();
    std::array <int,1000> arr0;
    arr0.fill(5);
    auto stop = high_resolution_clock::now();
    std::cout << "1000 element array create time:\t";
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << duration.count() << " microseconds" << std::endl;
}

void print_vec(const std::vector<int>& vec)
{
    for (auto x: vec) {
         std::cout << ' ' << x;
    }
    std::cout << '\n';
}

