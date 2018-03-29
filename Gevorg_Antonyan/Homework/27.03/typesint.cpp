#include <iostream>
int main(){
    int min = 10000000;
    int max = 0;
    while (min > 0) {
        min = min + 1;
    }
    max = min - 1;
    std::cout << "maximum int " << max << std::endl;
    std::cout << "minimum int " << min << std::endl;
    return 0;
}
