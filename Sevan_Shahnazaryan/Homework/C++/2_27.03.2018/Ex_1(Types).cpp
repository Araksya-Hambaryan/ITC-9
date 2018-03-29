#include <iostream>

int main() {
    int int_max = -1;
   // float float_max = -1;
   // double double_max = -1;
    while(int_max < 0) {
        int_max -= 1;
    }
   /* while(float_max < 0) {
        float_max -= 0.5;
    }
    while(double_max < 0) {
        double_max -= 0.5;
    }*/
    std::cout << "int_max = " << int_max << std::endl;
    std::cout << "int_min = " << int_max + 1 << std::endl;
   /* std::cout << "float_max = " << float_max << std::endl;
    std::cout << "float_min = " << float_max + 1 << std::endl;
    std::cout << "double_max = " << double_max << std::endl;
    std::cout << "double_min = " << double_max + 1 << std::endl;*/
}
