#include <iostream>

int& pre(int& i) {
    i -= 1;
    return i;
}


int post (int& i) {
    int tmp = i;
    i -= 1;
    return tmp;
}

int main() {
    int num = 0;
    std::cout << pre(num) << std::endl;
    std::cout << num << std::endl;
    std::cout << post(num) << std::endl;
    std::cout << num << std::endl;
    return 0;
}
