#include <iostream>
int main(){
    float max = 1;
    float min = 100000000000000;
	    while (min > 0) {
        min = min + 0.5;
    }
    max = min - 1;
    std::cout << "maximum float " << max << std::endl;
    std::cout << "minimum float " << min << std::endl;
    return 0;
}
